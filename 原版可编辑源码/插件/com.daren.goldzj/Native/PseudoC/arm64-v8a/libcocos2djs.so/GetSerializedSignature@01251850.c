
/* v8::internal::WasmCapiFunction::GetSerializedSignature() const */

ulong __thiscall v8::internal::WasmCapiFunction::GetSerializedSignature(WasmCapiFunction *this)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  uVar1 = SharedFunctionInfo::wasm_capi_function_data((SharedFunctionInfo *)&local_18);
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x13);
}

