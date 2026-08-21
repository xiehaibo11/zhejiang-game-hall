
/* v8::internal::wasm::WasmOpcodes::IsControlOpcode(v8::internal::wasm::WasmOpcode) */

bool v8::internal::wasm::WasmOpcodes::IsControlOpcode(uint param_1)

{
  return param_1 < 0x10;
}

