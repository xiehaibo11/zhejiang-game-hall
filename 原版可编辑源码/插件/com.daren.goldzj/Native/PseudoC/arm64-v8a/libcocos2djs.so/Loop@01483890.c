
/* v8::internal::wasm::AsmJsParser::Loop(int) */

void __thiscall v8::internal::wasm::AsmJsParser::Loop(AsmJsParser *this,int param_1)

{
  BareBegin(this,1,param_1);
  WasmFunctionBuilder::AddAsmWasmOffset
            (*(WasmFunctionBuilder **)(this + 0xf8),*(ulong *)(this + 0x20),*(ulong *)(this + 0x20))
  ;
  WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),3,0x40);
  return;
}

