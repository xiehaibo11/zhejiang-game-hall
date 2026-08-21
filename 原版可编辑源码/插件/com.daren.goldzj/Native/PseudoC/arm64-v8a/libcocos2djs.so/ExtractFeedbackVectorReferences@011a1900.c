
/* v8::internal::V8HeapExplorer::ExtractFeedbackVectorReferences(v8::internal::HeapEntry*,
   v8::internal::FeedbackVector) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractFeedbackVectorReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_3 + 7);
  if ((uVar1 != 3) && (((ulong)uVar1 & 3) == 3)) {
    SetWeakReference(this,param_1,"optimized code",
                     (ulong)uVar1 & 0xfffffffffffffffd | param_3 & 0xffffffff00000000,8);
    return;
  }
  return;
}

