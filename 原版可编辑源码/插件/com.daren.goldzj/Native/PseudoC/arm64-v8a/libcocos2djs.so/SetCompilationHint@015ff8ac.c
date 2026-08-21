
/* v8::internal::wasm::WasmFunctionBuilder::SetCompilationHint(v8::internal::wasm::WasmCompilationHintStrategy,
   v8::internal::wasm::WasmCompilationHintTier, v8::internal::wasm::WasmCompilationHintTier) */

void __thiscall
v8::internal::wasm::WasmFunctionBuilder::SetCompilationHint
          (WasmFunctionBuilder *this,byte param_2,char param_3,char param_4)

{
  this[0x13c] = (WasmFunctionBuilder)(param_2 | param_3 << 2 | param_4 << 4);
  return;
}

