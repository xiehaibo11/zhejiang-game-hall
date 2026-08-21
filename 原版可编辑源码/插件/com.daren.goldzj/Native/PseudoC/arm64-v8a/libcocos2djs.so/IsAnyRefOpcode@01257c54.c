
/* v8::internal::wasm::WasmOpcodes::IsAnyRefOpcode(v8::internal::wasm::WasmOpcode) */

bool v8::internal::wasm::WasmOpcodes::IsAnyRefOpcode(int param_1)

{
  return param_1 - 0xd0U < 3;
}

