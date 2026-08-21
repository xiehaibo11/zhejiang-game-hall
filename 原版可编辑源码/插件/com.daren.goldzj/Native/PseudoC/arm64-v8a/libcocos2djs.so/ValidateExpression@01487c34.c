
/* v8::internal::wasm::AsmJsParser::ValidateExpression() */

undefined8 __thiscall v8::internal::wasm::AsmJsParser::ValidateExpression(AsmJsParser *this)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = GetCurrentStackPosition();
  if (uVar1 < *(ulong *)(this + 0x108)) {
    this[0x1e4] = (AsmJsParser)0x1;
    uVar2 = 0;
    *(char **)(this + 0x1e8) = "Stack overflow while parsing asm.js module.";
    *(int *)(this + 0x1f0) = (int)*(undefined8 *)(this + 0x20);
  }
  else {
    uVar2 = Expression(this,(AsmType *)0x0);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

