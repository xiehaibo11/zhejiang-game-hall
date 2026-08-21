
/* v8::internal::wasm::AsmJsParser::LabelledStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::LabelledStatement(AsmJsParser *this)

{
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x29c) == 0) {
    *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x10);
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    if (*(int *)(this + 0x10) == 0x3a) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar1) {
        ValidateStatement(this);
        return;
      }
      uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar2 = "Stack overflow while parsing asm.js module.";
    }
    else {
      uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar2 = "Unexpected token";
    }
  }
  else {
    uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar2 = "Double label unsupported";
  }
  *(char **)(this + 0x1e8) = pcVar2;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return;
}

