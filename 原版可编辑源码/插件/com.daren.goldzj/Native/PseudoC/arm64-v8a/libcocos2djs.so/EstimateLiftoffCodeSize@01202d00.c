
/* v8::internal::wasm::WasmCodeManager::EstimateLiftoffCodeSize(int) */

long v8::internal::wasm::WasmCodeManager::EstimateLiftoffCodeSize(int param_1)

{
  return ((-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uint)param_1 << 3) -
         (long)param_1) + 0x60;
}

