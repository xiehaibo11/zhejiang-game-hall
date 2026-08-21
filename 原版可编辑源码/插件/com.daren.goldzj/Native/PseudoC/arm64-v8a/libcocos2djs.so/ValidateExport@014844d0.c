
/* v8::internal::wasm::AsmJsParser::ValidateExport() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateExport(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  if (*(int *)(this + 0x10) == -0x26dc) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 0x7b) {
      AsmJsScanner::Next(this_00);
      while( true ) {
        auVar7 = CopyCurrentIdentifierString(this);
        if (*(int *)(this + 0x10) + 9999U < 0x280f) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Illegal export name";
          goto LAB_014846f0;
        }
        AsmJsScanner::Next(this_00);
        if (*(int *)(this + 0x10) != 0x3a) goto LAB_014846dc;
        AsmJsScanner::Next(this_00);
        iVar1 = *(int *)(this + 0x10);
        if (iVar1 < 0x100) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Expected function name";
          goto LAB_014846f0;
        }
        AsmJsScanner::Next(this_00);
        lVar2 = GetVarInfo(this,iVar1);
        if (*(int *)(lVar2 + 0x20) != 4) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Expected function";
          goto LAB_014846f0;
        }
        WasmModuleBuilder::AddExport
                  (*(undefined8 *)(this + 0xf0),auVar7._0_8_,auVar7._8_8_,0,
                   *(undefined4 *)(*(long *)(lVar2 + 8) + 0x3c));
        if (*(int *)(this + 0x10) != 0x2c) break;
        AsmJsScanner::Next(this_00);
        if (*(int *)(this + 0x10) == 0x7d) {
LAB_014846c0:
          AsmJsScanner::Next(this_00);
          return;
        }
      }
      if (*(int *)(this + 0x10) != 0x7d) goto LAB_014846dc;
      goto LAB_014846c0;
    }
    if (iVar1 < 0x100) {
      uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar4 = "Single function export must be a function name";
    }
    else {
      AsmJsScanner::Next(this_00);
      lVar2 = GetVarInfo(this,iVar1);
      if (*(int *)(lVar2 + 0x20) == 4) {
        uVar6 = *(undefined8 *)(this + 0xf0);
        sVar3 = strlen("__single_function__");
        WasmModuleBuilder::AddExport
                  (uVar6,"__single_function__",sVar3,0,*(undefined4 *)(*(long *)(lVar2 + 8) + 0x3c))
        ;
        return;
      }
      uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar4 = "Single function export must be a function";
    }
  }
  else {
LAB_014846dc:
    uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar4 = "Unexpected token";
  }
LAB_014846f0:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return;
}

