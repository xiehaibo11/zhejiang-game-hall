
/* v8::internal::wasm::GetWasmFunctionOffset(v8::internal::wasm::WasmModule const*, unsigned int) */

undefined4 v8::internal::wasm::GetWasmFunctionOffset(WasmModule *param_1,uint param_2)

{
  if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 5)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x88) + (ulong)param_2 * 0x20 + 0x10);
  }
  return 0xffffffff;
}

