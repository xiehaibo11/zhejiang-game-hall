
/* v8::internal::wasm::AsmJsParser::Begin(int) */

void __thiscall v8::internal::wasm::AsmJsParser::Begin(AsmJsParser *this,int param_1)

{
  BareBegin(this,0,param_1);
  WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
  return;
}

