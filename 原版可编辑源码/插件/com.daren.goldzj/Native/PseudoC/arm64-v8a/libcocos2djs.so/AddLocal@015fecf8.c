
/* v8::internal::wasm::WasmFunctionBuilder::AddLocal(v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::AddLocal(WasmFunctionBuilder *this,undefined4 param_2)

{
  LocalDeclEncoder::AddLocals((LocalDeclEncoder *)(this + 8),1,param_2);
  return;
}

