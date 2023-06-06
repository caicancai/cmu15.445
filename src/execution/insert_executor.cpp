//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// insert_executor.cpp
//
// Identification: src/execution/insert_executor.cpp
//
// Copyright (c) 2015-2021, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include <memory>

#include "execution/executors/insert_executor.h"

namespace bustub {

InsertExecutor::InsertExecutor(ExecutorContext *exec_ctx, const InsertPlanNode *plan,
                               std::unique_ptr<AbstractExecutor> &&child_executor)
    : AbstractExecutor(exec_ctx), plan_(plan), childeren_(std::move(child_executor)) {
        tableInfo_ = exec_ctx_->GetCatalog()->GetTable(plan->TableOid());
    }

void InsertExecutor::Init() { throw NotImplementedException("InsertExecutor is not implemented"); }

auto InsertExecutor::Next([[maybe_unused]] Tuple *tuple, RID *rid) -> bool { 
    if(is_success){
        return false;
    }
    int count = 0;
    while(childeren_->Next(tuple, rid)){
        if(tableInfo_->table_->InsertTuple(*tuple, rid, exec_ctx_->GetTransaction())){
            count++;
            auto indexs = exec_ctx_->GetCatalog()->GetTableIndexes(tableInfo_->name_);
            for(auto index_info: indexs){
                auto key = tuple->KeyFromTuple(plan_->OutputSchema(), index_info->key_schema_, index_info->index_->GetKeyAttrs());
                index_info->index_->InsertEntry(key, *rid, exec_ctx_->GetTransaction());
            }
        }
    }
    std::vector<Value> value;
    value.emplace_back(INTEGER, count);

    Schema schema(plan_->OutputSchema());
    *tuple = Tuple(value, &schema);
    is_success = true;
    return true;
 }

}  // namespace bustub
