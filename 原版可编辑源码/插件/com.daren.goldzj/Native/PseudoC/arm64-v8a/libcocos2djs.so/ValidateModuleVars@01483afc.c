
/* v8::internal::wasm::AsmJsParser::ValidateModuleVars() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateModuleVars(AsmJsParser *this)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  
  do {
    if (*(int *)(this + 0x10) == -0x26da) {
      bVar3 = true;
    }
    else {
      if (*(int *)(this + 0x10) != -0x26e6) {
        return;
      }
      bVar3 = false;
    }
    do {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar2 = GetCurrentStackPosition();
      if (uVar2 < *(ulong *)(this + 0x108)) {
        this[0x1e4] = (AsmJsParser)0x1;
        *(char **)(this + 0x1e8) = "Stack overflow while parsing asm.js module.";
        *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
        return;
      }
      ValidateModuleVar(this,bVar3);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return;
      }
      iVar1 = *(int *)(this + 0x10);
    } while (iVar1 == 0x2c);
    if (iVar1 == 0x3b) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    }
    else if ((iVar1 != 0x7d) && (this[0xec] == (AsmJsParser)0x0)) {
      this[0x1e4] = (AsmJsParser)0x1;
      *(char **)(this + 0x1e8) = "Expected ;";
      *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
    }
  } while( true );
}

