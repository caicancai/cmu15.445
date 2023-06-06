#include "execution/executors/index_scan_executor.h"

namespace bustub {
IndexScanExecutor::IndexScanExecutor(ExecutorContext *exec_ctx, const IndexScanPlanNode *plan)
    : AbstractExecutor(exec_ctx), plan_(plan) {
  index_info_ = exec_ctx->GetCatalog()->GetIndex(plan->GetIndexOid());
  index_ = dynamic_cast<BPlusTreeIndexForOneIntegerColumn *>(index_info_->index_.get());
  table_info_ = exec_ctx->GetCatalog()->GetTable(index_info_->table_name_);
  iterator_ = index_->GetBeginIterator();
}

void IndexScanExecutor::Init() { }

auto IndexScanExecutor::Next(Tuple *tuple, RID *rid) -> bool {
  if(iterator_ != index_->GetEndIterator()) {
    *rid = (*iterator_).second;
    if(table_info_->table_->GetTuple(*rid, tuple, exec_ctx_->GetTransaction())){
      ++iterator_;
      return true;
    }
  }
  return false;
}

}  // namespace bustub