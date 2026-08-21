
/* v8::internal::wasm::AsmJsParser::End() */

void __thiscall v8::internal::wasm::AsmJsParser::End(AsmJsParser *this)

{
  *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
  WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
  return;
}

