
/* v8::internal::wasm::AsmJsParser::ExpressionStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::ExpressionStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  ulong uVar2;
  AsmType *this_01;
  char *pcVar3;
  undefined4 uVar4;
  
  this_00 = (AsmJsScanner *)(this + 8);
  if (*(int *)(this + 0x10) + 9999U < 0x280f) {
LAB_01487a5c:
    uVar2 = GetCurrentStackPosition();
    if ((*(ulong *)(this + 0x108) <= uVar2) &&
       (uVar2 = GetCurrentStackPosition(), *(ulong *)(this + 0x108) <= uVar2)) {
      this_01 = (AsmType *)Expression(this,(AsmType *)0x0);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return;
      }
      uVar2 = AsmType::IsA(this_01,(AsmType *)0x11);
      if ((uVar2 & 1) == 0) {
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x1a);
      }
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
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Expected ;";
      goto LAB_01487a90;
    }
  }
  else {
    AsmJsScanner::Next(this_00);
    iVar1 = *(int *)(this + 0x10);
    AsmJsScanner::Rewind(this_00);
    if (iVar1 != 0x3a) goto LAB_01487a5c;
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      if (*(int *)(this + 0x29c) != 0) {
        uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar3 = "Double label unsupported";
        goto LAB_01487a90;
      }
      *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x10);
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) != 0x3a) {
        uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar3 = "Unexpected token";
        goto LAB_01487a90;
      }
      AsmJsScanner::Next(this_00);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar2) {
        ValidateStatement(this);
        return;
      }
    }
  }
  uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Stack overflow while parsing asm.js module.";
LAB_01487a90:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar4;
  return;
}

