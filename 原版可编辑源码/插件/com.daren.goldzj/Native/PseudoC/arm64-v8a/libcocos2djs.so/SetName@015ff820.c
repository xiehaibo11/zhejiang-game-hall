
/* v8::internal::wasm::WasmFunctionBuilder::SetName(v8::internal::Vector<char const>) */

void v8::internal::wasm::WasmFunctionBuilder::SetName
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_3;
  return;
}

