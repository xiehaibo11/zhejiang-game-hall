
/* v8::internal::V8HeapExplorer::ExtractJSWeakCollectionReferences(v8::internal::HeapEntry*,
   v8::internal::JSWeakCollection) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSWeakCollectionReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"table",param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb),0xc
            );
  return;
}

