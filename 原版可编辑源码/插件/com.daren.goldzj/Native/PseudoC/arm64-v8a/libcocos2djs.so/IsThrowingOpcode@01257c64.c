
/* v8::internal::wasm::WasmOpcodes::IsThrowingOpcode(v8::internal::wasm::WasmOpcode) */

uint v8::internal::wasm::WasmOpcodes::IsThrowingOpcode(int param_1)

{
  if (param_1 - 8U < 10) {
    return 0x303U >> (ulong)(param_1 - 8U & 0x1f) & 1;
  }
  return 0;
}

