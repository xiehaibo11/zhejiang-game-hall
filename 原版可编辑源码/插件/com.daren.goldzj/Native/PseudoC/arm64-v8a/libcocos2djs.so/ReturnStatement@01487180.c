
/* v8::internal::wasm::AsmJsParser::ReturnStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::ReturnStatement(AsmJsParser *this)

{
  ulong uVar1;
  AsmType *this_00;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)(this + 0x10) != -0x26dc) {
    uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar3 = "Unexpected token";
    goto LAB_01487204;
  }
  AsmJsScanner::Next((AsmJsScanner *)(this + 8));
  if ((*(int *)(this + 0x10) == 0x3b) || (*(int *)(this + 0x10) == 0x7d)) {
    if (*(AsmType **)(this + 0x100) == (AsmType *)0x0) {
      uVar2 = 0x11;
      goto LAB_01487248;
    }
    uVar1 = AsmType::IsA(*(AsmType **)(this + 0x100),(AsmType *)0x11);
    if ((uVar1 & 1) == 0) {
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Invalid void return type";
      goto LAB_01487204;
    }
  }
  else {
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)(this + 0x108)) {
      uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Stack overflow while parsing asm.js module.";
      goto LAB_01487204;
    }
    this_00 = (AsmType *)Expression(this,*(AsmType **)(this + 0x100));
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return;
    }
    uVar1 = AsmType::IsA(this_00,(AsmType *)0xed);
    if ((uVar1 & 1) == 0) {
      uVar1 = AsmType::IsA(this_00,(AsmType *)0xe00d);
      if ((uVar1 & 1) == 0) {
        uVar1 = AsmType::IsA(this_00,(AsmType *)0x721);
        if ((uVar1 & 1) == 0) {
          uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar3 = "Invalid return type";
          goto LAB_01487204;
        }
        uVar2 = 0x721;
      }
      else {
        uVar2 = 0xe00d;
      }
    }
    else {
      uVar2 = 0xed;
    }
LAB_01487248:
    *(undefined8 *)(this + 0x100) = uVar2;
  }
  WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xf);
  if (*(int *)(this + 0x10) == 0x7d) {
    return;
  }
  if (*(int *)(this + 0x10) == 0x3b) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    return;
  }
  if (this[0xec] != (AsmJsParser)0x0) {
    return;
  }
  uVar4 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Expected ;";
LAB_01487204:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar4;
  return;
}

