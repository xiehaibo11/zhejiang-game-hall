
/* v8::internal::V8HeapExplorer::ExtractCellReferences(v8::internal::HeapEntry*, v8::internal::Cell)
    */

void __thiscall
v8::internal::V8HeapExplorer::ExtractCellReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"value",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 3),4);
  return;
}

