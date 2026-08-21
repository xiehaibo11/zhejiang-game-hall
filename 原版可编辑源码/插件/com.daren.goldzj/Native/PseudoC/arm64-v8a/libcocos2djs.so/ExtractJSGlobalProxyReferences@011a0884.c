
/* v8::internal::V8HeapExplorer::ExtractJSGlobalProxyReferences(v8::internal::HeapEntry*,
   v8::internal::JSGlobalProxy) */

void __thiscall
v8::internal::V8HeapExplorer::ExtractJSGlobalProxyReferences
          (V8HeapExplorer *this,undefined8 param_1,ulong param_3)

{
  SetInternalReference
            (this,param_1,"native_context",
             param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb),0xc);
  return;
}

