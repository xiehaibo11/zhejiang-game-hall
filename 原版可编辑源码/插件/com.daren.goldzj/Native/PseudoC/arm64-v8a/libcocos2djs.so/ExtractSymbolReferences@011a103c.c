
/* v8::internal::V8HeapExplorer::ExtractSymbolReferences(v8::internal::HeapEntry*,
   v8::internal::Symbol) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractSymbolReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"name",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb),0xc)
  ;
  return;
}

