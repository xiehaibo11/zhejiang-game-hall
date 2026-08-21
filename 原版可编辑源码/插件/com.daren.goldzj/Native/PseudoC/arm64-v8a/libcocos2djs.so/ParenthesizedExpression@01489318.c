
/* v8::internal::wasm::AsmJsParser::ParenthesizedExpression() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::ParenthesizedExpression(AsmJsParser *this)

{
  ulong uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(this + 0x270) = 0;
  if (*(int *)(this + 0x10) == 0x28) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)(this + 0x108)) {
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Stack overflow while parsing asm.js module.";
      goto LAB_014893c4;
    }
    uVar2 = Expression(this,(AsmType *)0x0);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x10) == 0x29) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      return uVar2;
    }
  }
  uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Unexpected token";
LAB_014893c4:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar4;
  return 0;
}

