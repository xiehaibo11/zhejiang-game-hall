
/* v8::internal::wasm::WasmOpcodes::IsUnconditionalJump(v8::internal::wasm::WasmOpcode) */

uint v8::internal::wasm::WasmOpcodes::IsUnconditionalJump(uint param_1)

{
  if (param_1 < 0x10) {
    return 0xd001U >> (ulong)(param_1 & 0x1f) & 1;
  }
  return 0;
}

