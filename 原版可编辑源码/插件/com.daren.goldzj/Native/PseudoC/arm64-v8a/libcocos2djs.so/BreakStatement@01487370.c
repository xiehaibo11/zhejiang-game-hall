
/* v8::internal::wasm::AsmJsParser::BreakStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::BreakStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(this + 0x10) == -0x26e8) {
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
      iVar5 = 0;
      piVar4 = *(int **)(this + 0x218);
      do {
        piVar3 = piVar4 + -2;
        if (*piVar3 == 2) {
LAB_014873fc:
          if (piVar4[-1] == iVar6) {
LAB_0148742c:
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xc);
            WasmFunctionBuilder::EmitI32V(*(WasmFunctionBuilder **)(this + 0xf8),iVar5);
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
            uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar1 = "Expected ;";
            goto LAB_01487480;
          }
        }
        else if (*piVar3 == 0) {
          if (iVar6 != 0) goto LAB_014873fc;
          goto LAB_0148742c;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar3;
      } while (*(int **)(this + 0x210) != piVar3);
    }
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar1 = "Illegal break";
  }
  else {
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar1 = "Unexpected token";
  }
LAB_01487480:
  *(char **)(this + 0x1e8) = pcVar1;
  *(undefined4 *)(this + 0x1f0) = uVar2;
  return;
}

