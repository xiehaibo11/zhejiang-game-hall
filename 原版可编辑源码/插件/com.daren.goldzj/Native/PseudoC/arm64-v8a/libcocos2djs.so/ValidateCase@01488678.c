
/* v8::internal::wasm::AsmJsParser::ValidateCase() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateCase(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  uint uVar2;
  AsmJsParser AVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  
  if (*(int *)(this + 0x10) == -0x26e7) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    iVar1 = *(int *)(this + 0x10);
    bVar4 = iVar1 == 0x2d;
    if (bVar4) {
      AsmJsScanner::Next(this_00);
      iVar1 = *(int *)(this + 0x10);
    }
    if (iVar1 != -3) {
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar6 = "Expected numeric literal";
      goto LAB_014887ac;
    }
    uVar2 = *(uint *)(this + 0xe8);
    AsmJsScanner::Next(this_00);
    if ((bVar4 && 0x80000000 < uVar2) || (((int)uVar2 < 0 && (!bVar4)))) {
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar6 = "Numeric literal out of range";
      goto LAB_014887ac;
    }
    if (*(int *)(this + 0x10) == 0x3a) {
      AsmJsScanner::Next(this_00);
      AVar3 = this[0x1e4];
      while( true ) {
        if (AVar3 != (AsmJsParser)0x0) {
          return;
        }
        iVar1 = *(int *)(this + 0x10);
        if (iVar1 == -0x26e7) {
          return;
        }
        if (iVar1 == -0x26e4) {
          return;
        }
        if (iVar1 == 0x7d) {
          return;
        }
        uVar5 = GetCurrentStackPosition();
        if (uVar5 < *(ulong *)(this + 0x108)) break;
        ValidateStatement(this);
        AVar3 = this[0x1e4];
      }
      uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar6 = "Stack overflow while parsing asm.js module.";
      goto LAB_014887ac;
    }
  }
  uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar6 = "Unexpected token";
LAB_014887ac:
  *(char **)(this + 0x1e8) = pcVar6;
  *(undefined4 *)(this + 0x1f0) = uVar7;
  return;
}

