//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// delete_executor.cpp
//
// Identification: src/execution/delete_executor.cpp
//
// Copyright (c) 2015-2021, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include <memory>

#include "execution/executors/delete_executor.h"

namespace bustub {

DeleteExecutor::DeleteExecutor(ExecutorContext *exec_ctx, const DeletePlanNode *plan,
                               std::unique_ptr<AbstractExecutor> &&child_executor)
    : AbstractExecutor(exec_ctx),plan_(plan), child_executor_(std::move(child_executor)) {
        tableInfo = exec_ctx->GetCatalog()->GetTable(plan_->TableOid());
    }

void DeleteExecutor::Init() { throw NotImplementedException("DeleteExecutor is not implemented"); }

auto DeleteExecutor::Next([[maybe_unused]] Tuple *tuple, RID *rid) -> bool { 
    if(is_success){
        return false;
    }
    int count = 0;
    while(child_executor_->Next(tuple, rid)){
        if(!tableInfo->table_->MarkDelete(*rid, exec_ctx_->GetTransaction())){
            continue;
        }
        count++;
        auto indexs = exec_ctx_->GetCatalog()->GetTableIndexes(tableInfo->name_);
        for(auto index_info: indexs){
            auto key = tuple->KeyFromTuple(child_executor_->GetOutputSchema(), index_info->key_schema_, index_info->index_->GetKeyAttrs());
            index_info->index_->DeleteEntry(key, *rid, exec_ctx_->GetTransaction());
        }
    }
    std::vector<Value> values;
    values.emplace_back(INTEGER, count);
    Schema schema(plan_->OutputSchema());
    Tuple temp_tuple(values, &schema);
    *tuple = temp_tuple;
    is_success = true;
    return true;
 }

}  // namespace bustub
