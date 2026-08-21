
/* v8::internal::WasmCapiFunction::GetHostCallTarget() const */

undefined8 __thiscall v8::internal::WasmCapiFunction::GetHostCallTarget(WasmCapiFunction *this)

{
  long lVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  lVar1 = SharedFunctionInfo::wasm_capi_function_data((SharedFunctionInfo *)&local_18);
  return *(undefined8 *)(lVar1 + 3);
}

