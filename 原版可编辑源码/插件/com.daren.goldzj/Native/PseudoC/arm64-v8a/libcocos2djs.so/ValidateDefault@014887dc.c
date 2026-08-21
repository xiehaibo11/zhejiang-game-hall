
/* v8::internal::wasm::AsmJsParser::ValidateDefault() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateDefault(AsmJsParser *this)

{
  AsmJsParser AVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)(this + 0x10) == -0x26e4) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    if (*(int *)(this + 0x10) == 0x3a) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      AVar1 = this[0x1e4];
      while( true ) {
        if (AVar1 != (AsmJsParser)0x0) {
          return;
        }
        if (*(int *)(this + 0x10) == 0x7d) {
          return;
        }
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x108)) break;
        ValidateStatement(this);
        AVar1 = this[0x1e4];
      }
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Stack overflow while parsing asm.js module.";
      goto LAB_01488868;
    }
  }
  uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Unexpected token";
LAB_01488868:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar4;
  return;
}

