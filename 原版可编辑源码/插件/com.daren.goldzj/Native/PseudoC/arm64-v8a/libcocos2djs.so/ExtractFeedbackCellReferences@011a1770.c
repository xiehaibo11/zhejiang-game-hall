
/* v8::internal::V8HeapExplorer::ExtractFeedbackCellReferences(v8::internal::HeapEntry*,
   v8::internal::FeedbackCell) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractFeedbackCellReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  TagObject(this,param_3,"(feedback cell)");
  SetInternalReference
            (this,param_1,"value",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 3),4);
  return;
}

