
/* v8::internal::WasmExportedFunction::function_index() */

int __thiscall v8::internal::WasmExportedFunction::function_index(WasmExportedFunction *this)

{
  long lVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  lVar1 = SharedFunctionInfo::wasm_exported_function_data((SharedFunctionInfo *)&local_18);
  return *(int *)(lVar1 + 0xf) >> 1;
}

