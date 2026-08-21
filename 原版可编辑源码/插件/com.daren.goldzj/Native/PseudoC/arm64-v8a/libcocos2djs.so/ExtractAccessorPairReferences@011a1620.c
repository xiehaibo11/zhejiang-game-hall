
/* v8::internal::V8HeapExplorer::ExtractAccessorPairReferences(v8::internal::HeapEntry*,
   v8::internal::AccessorPair) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractAccessorPairReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"getter",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 3),4);
  SetInternalReference
            (this,param_1,"setter",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 7),8);
  return;
}

