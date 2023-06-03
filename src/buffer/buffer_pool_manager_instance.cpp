//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// buffer_pool_manager_instance.cpp
//
// Identification: src/buffer/buffer_pool_manager.cpp
//
// Copyright (c) 2015-2021, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "buffer/buffer_pool_manager_instance.h"

#include "common/macros.h"

namespace bustub {

BufferPoolManagerInstance::BufferPoolManagerInstance(size_t pool_size, DiskManager *disk_manager, size_t replacer_k,
                                                     LogManager *log_manager)
    : pool_size_(pool_size), disk_manager_(disk_manager), log_manager_(log_manager) {
  // we allocate a consecutive memory space for the buffer pool
  pages_ = new Page[pool_size_];
  page_table_ = new ExtendibleHashTable<page_id_t, frame_id_t>(bucket_size_);
  replacer_ = new LRUKReplacer(pool_size, replacer_k);

  // Initially, every page is in the free list.
  for (size_t i = 0; i < pool_size_; ++i) {
    free_list_.emplace_back(static_cast<int>(i));
  }
}

BufferPoolManagerInstance::~BufferPoolManagerInstance() {
  delete[] pages_;
  delete page_table_;
  delete replacer_;
}
/*flush不需要清空数据*/
auto BufferPoolManagerInstance::FlushPgImp(page_id_t page_id) -> bool {
  const std::lock_guard<std::mutex> guard(latch_);
  if (page_id == INVALID_PAGE_ID) {
    return false;
  }
  frame_id_t frame_id;
  if (!page_table_->Find(page_id, frame_id)) {
    return false;
  }
  disk_manager_->WritePage(pages_[frame_id].GetPageId(), pages_[frame_id].GetData());
  pages_[frame_id].is_dirty_ = false;
  return true;
}

void BufferPoolManagerInstance::FlushAllPgsImp() {
  const std::lock_guard<std::mutex> guard(latch_);

  for (size_t i = 0; i < pool_size_; i++) {
    if (pages_[i].is_dirty_ && pages_[i].page_id_ != INVALID_PAGE_ID) {
      disk_manager_->WritePage(pages_[i].GetPageId(), pages_[i].GetData());
      pages_[i].is_dirty_ = false;
    }
  }
}
/*newPage和fetchPage的区别：new是创建一个新页，在磁盘上新建的；而fetch是这个页本身都在磁盘上存在，只是去读*/
auto BufferPoolManagerInstance::NewPgImp(page_id_t *page_id) -> Page * {
  const std::lock_guard<std::mutex> guard(latch_);

  int new_page_id = AllocatePage();
  frame_id_t frame_id;
  // 1. 可用page

  if (!free_list_.empty()) {
    // 1. 先从空闲链表
    frame_id = free_list_.back();
    free_list_.pop_back();
  } else {
    // 2. 再从替换器replacer中找
    if (!replacer_->Evict(&frame_id)) {
      return nullptr;
    }

    if (pages_[frame_id].IsDirty()) {
      disk_manager_->WritePage(pages_[frame_id].GetPageId(), pages_[frame_id].GetData());
      pages_[frame_id].is_dirty_ = false;
    }
    page_table_->Remove(pages_[frame_id].GetPageId());
  }

  page_table_->Insert(new_page_id, frame_id);
  auto &current_page = pages_[frame_id];
  // metadata
  current_page.page_id_ = new_page_id;
  current_page.ResetMemory();
  current_page.is_dirty_ = false;
  current_page.pin_count_ = 1;

  replacer_->RecordAccess(frame_id);
  replacer_->SetEvictable(frame_id, false);
  *page_id = new_page_id;
  return &current_page;
}

auto BufferPoolManagerInstance::FetchPgImp(page_id_t page_id) -> Page * {
  /*按照.h中的文字描述，照着实现一遍*/
  const std::lock_guard<std::mutex> guard(latch_);

  frame_id_t frame_id;
  if (page_table_->Find(page_id, frame_id)) {
    pages_[frame_id].pin_count_++;
    // pin之后就不能换出
    replacer_->RecordAccess(frame_id);
    replacer_->SetEvictable(frame_id, false);
    return &pages_[frame_id];
  }
  // 1. 未从page_table中找到，先从空闲链表找，再从replacer中找

  if (!free_list_.empty()) {
    // 1. 先从空闲链表
    frame_id = free_list_.back();
    free_list_.pop_back();
  } else {
    // 2. 再从替换器replacer中找
    if (!replacer_->Evict(&frame_id)) {
      return nullptr;
    }
    if (pages_[frame_id].IsDirty()) {
      disk_manager_->WritePage(pages_[frame_id].GetPageId(), pages_[frame_id].GetData());
      pages_[frame_id].is_dirty_ = false;
    }
    page_table_->Remove(pages_[frame_id].GetPageId());
  }

  page_table_->Insert(page_id, frame_id);
  // metadata
  pages_[frame_id].page_id_ = page_id;
  pages_[frame_id].is_dirty_ = false;
  pages_[frame_id].pin_count_ = 1;
  // 要从磁盘读出数据呀！！！
  disk_manager_->ReadPage(page_id, pages_[frame_id].data_);

  replacer_->RecordAccess(frame_id);
  replacer_->SetEvictable(frame_id, false);
  return &pages_[frame_id];
}

auto BufferPoolManagerInstance::DeletePgImp(page_id_t page_id) -> bool {
  const std::lock_guard<std::mutex> guard(latch_);
  frame_id_t frame_id;
  if (!page_table_->Find(page_id, frame_id)) {
    return true;
  }
  if (pages_[frame_id].pin_count_ != 0) {
    return false;
  }
  if (pages_[frame_id].IsDirty()) {
    disk_manager_->WritePage(pages_[frame_id].GetPageId(), pages_[frame_id].GetData());
    pages_[frame_id].is_dirty_ = false;
  }
  page_table_->Remove(page_id);

  replacer_->Remove(frame_id);
  free_list_.push_back(frame_id);
  // reset metadata
  pages_[frame_id].page_id_ = INVALID_PAGE_ID;
  pages_[frame_id].is_dirty_ = false;
  pages_[frame_id].pin_count_ = 0;
  pages_[frame_id].ResetMemory();

  DeallocatePage(page_id);
  return true;
}

auto BufferPoolManagerInstance::UnpinPgImp(page_id_t page_id, bool is_dirty) -> bool {
  const std::lock_guard<std::mutex> guard(latch_);

  frame_id_t frame_id;
  if (!page_table_->Find(page_id, frame_id) || pages_[frame_id].pin_count_ <= 0) {
    return false;
  }
  auto &current_page = pages_[frame_id];
  current_page.pin_count_--;
  current_page.is_dirty_ |= is_dirty;
  if (current_page.pin_count_ == 0) {
    replacer_->SetEvictable(frame_id, true);
  }
  return true;
}

auto BufferPoolManagerInstance::AllocatePage() -> page_id_t { return next_page_id_++; }

}  // namespace bustub
