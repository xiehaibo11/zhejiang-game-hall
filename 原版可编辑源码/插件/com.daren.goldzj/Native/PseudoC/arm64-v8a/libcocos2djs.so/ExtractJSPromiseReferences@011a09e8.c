
/* v8::internal::V8HeapExplorer::ExtractJSPromiseReferences(v8::internal::HeapEntry*,
   v8::internal::JSPromise) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSPromiseReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"reactions_or_result",
             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb),0xc);
  return;
}

