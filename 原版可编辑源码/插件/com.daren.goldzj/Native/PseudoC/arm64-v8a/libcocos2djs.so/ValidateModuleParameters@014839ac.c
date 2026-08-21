
/* v8::internal::wasm::AsmJsParser::ValidateModuleParameters() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateModuleParameters(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x10) == 0x28) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    iVar1 = *(int *)(this + 0x10);
    *(undefined8 *)(this + 0x1f8) = 0;
    *(undefined4 *)(this + 500) = 0;
    if (iVar1 == 0x29) {
LAB_014839ec:
      AsmJsScanner::Next(this_00);
      return;
    }
    if (iVar1 < 0x100) {
      uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar2 = "Expected stdlib parameter";
      goto LAB_01483a9c;
    }
    AsmJsScanner::Next(this_00);
    *(int *)(this + 500) = iVar1;
    if (*(int *)(this + 0x10) == 0x29) goto LAB_014839ec;
    if (*(int *)(this + 0x10) == 0x2c) {
      AsmJsScanner::Next(this_00);
      iVar1 = *(int *)(this + 0x10);
      if (iVar1 < 0x100) {
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar2 = "Expected foreign parameter";
        goto LAB_01483a9c;
      }
      AsmJsScanner::Next(this_00);
      *(int *)(this + 0x1f8) = iVar1;
      if (*(int *)(this + 0x10) == 0x29) goto LAB_014839ec;
      if (*(int *)(this + 0x10) == 0x2c) {
        AsmJsScanner::Next(this_00);
        iVar1 = *(int *)(this + 0x10);
        if (iVar1 < 0x100) {
          uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar2 = "Expected heap parameter";
          goto LAB_01483a9c;
        }
        AsmJsScanner::Next(this_00);
        *(int *)(this + 0x1fc) = iVar1;
        if (*(int *)(this + 0x10) == 0x29) goto LAB_014839ec;
      }
    }
  }
  uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar2 = "Unexpected token";
LAB_01483a9c:
  *(char **)(this + 0x1e8) = pcVar2;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return;
}

