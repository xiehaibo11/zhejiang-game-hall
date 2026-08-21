
/* v8::internal::wasm::AsmJsParser::BitwiseANDExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::BitwiseANDExpression(AsmJsParser *this)

{
  ulong uVar1;
  AsmType *this_00;
  AsmType *this_01;
  char *pcVar2;
  undefined4 uVar3;
  AsmType *pAVar4;
  
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(this + 0x108)) {
LAB_0148c0b8:
    uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar2 = "Stack overflow while parsing asm.js module.";
LAB_0148c0d0:
    *(char **)(this + 0x1e8) = pcVar2;
    *(undefined4 *)(this + 0x1f0) = uVar3;
    pAVar4 = (AsmType *)0x0;
  }
  else {
    this_00 = (AsmType *)EqualityExpression(this);
    if (this[0x1e4] == (AsmJsParser)0x0) {
      pAVar4 = this_00;
      if (*(int *)(this + 0x10) == 0x26) {
        pAVar4 = (AsmType *)0x721;
        do {
          AsmJsScanner::Next((AsmJsScanner *)(this + 8));
          uVar1 = GetCurrentStackPosition();
          if (uVar1 < *(ulong *)(this + 0x108)) goto LAB_0148c0b8;
          this_01 = (AsmType *)EqualityExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) goto LAB_0148c0ec;
          uVar1 = AsmType::IsA(this_00,(AsmType *)0x101);
          if (((uVar1 & 1) == 0) ||
             (uVar1 = AsmType::IsA(this_01,(AsmType *)0x101), (uVar1 & 1) == 0)) {
            uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
            this[0x1e4] = (AsmJsParser)0x1;
            pcVar2 = "Expected intish for operator &.";
            goto LAB_0148c0d0;
          }
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x71);
          this_00 = (AsmType *)0x721;
        } while (*(int *)(this + 0x10) == 0x26);
      }
    }
    else {
LAB_0148c0ec:
      pAVar4 = (AsmType *)0x0;
    }
  }
  return pAVar4;
}

