
/* v8::internal::wasm::AsmJsParser::NumericLiteral() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::NumericLiteral(AsmJsParser *this)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  *(undefined8 *)(this + 0x270) = 0;
  if (*(int *)(this + 0x10) == -3) {
    iVar1 = *(int *)(this + 0xe8);
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),iVar1);
    uVar2 = 0x1f21;
    if (iVar1 < 0) {
      uVar2 = 0xb01;
    }
  }
  else if (*(int *)(this + 0x10) == -4) {
    dVar3 = *(double *)(this + 0xe0);
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    WasmFunctionBuilder::EmitF64Const(*(WasmFunctionBuilder **)(this + 0xf8),dVar3);
    uVar2 = 0xed;
  }
  else {
    this[0x1e4] = (AsmJsParser)0x1;
    uVar2 = 0;
    *(char **)(this + 0x1e8) = "Expected numeric literal.";
    *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
  }
  return uVar2;
}

