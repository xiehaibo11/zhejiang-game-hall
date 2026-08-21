
/* v8::internal::wasm::AsmJsParser::ContinueStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::ContinueStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  if (*(int *)(this + 0x10) == -0x26e5) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    iVar6 = *(int *)(this + 0x10);
    if (iVar6 + 9999U < 0x280f) {
      iVar6 = 0;
    }
    else {
      AsmJsScanner::Next(this_00);
    }
    if (*(int **)(this + 0x218) != *(int **)(this + 0x210)) {
      iVar1 = 0;
      piVar5 = *(int **)(this + 0x218);
      do {
        piVar4 = piVar5 + -2;
        if ((*piVar4 == 1) && ((iVar6 == 0 || (piVar5[-1] == iVar6)))) {
          WasmFunctionBuilder::EmitWithI32V(*(WasmFunctionBuilder **)(this + 0xf8),0xc,iVar1);
          if (*(int *)(this + 0x10) == 0x7d) {
            return;
          }
          if (*(int *)(this + 0x10) == 0x3b) {
            AsmJsScanner::Next(this_00);
            return;
          }
          if (this[0xec] != (AsmJsParser)0x0) {
            return;
          }
          uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar2 = "Expected ;";
          goto LAB_014875b8;
        }
        iVar1 = iVar1 + 1;
        piVar5 = piVar4;
      } while (*(int **)(this + 0x210) != piVar4);
    }
    uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar2 = "Illegal continue";
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar2 = "Unexpected token";
  }
LAB_014875b8:
  *(char **)(this + 0x1e8) = pcVar2;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return;
}

