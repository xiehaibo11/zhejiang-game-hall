
/* v8::internal::wasm::WasmOpcodes::IsSignExtensionOpcode(v8::internal::wasm::WasmOpcode) */

bool v8::internal::wasm::WasmOpcodes::IsSignExtensionOpcode(int param_1)

{
  return param_1 - 0xc0U < 5;
}

