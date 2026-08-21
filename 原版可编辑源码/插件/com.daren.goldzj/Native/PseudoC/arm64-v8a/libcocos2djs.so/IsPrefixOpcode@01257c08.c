
/* v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(v8::internal::wasm::WasmOpcode) */

bool v8::internal::wasm::WasmOpcodes::IsPrefixOpcode(int param_1)

{
  return param_1 - 0xfcU < 3;
}

