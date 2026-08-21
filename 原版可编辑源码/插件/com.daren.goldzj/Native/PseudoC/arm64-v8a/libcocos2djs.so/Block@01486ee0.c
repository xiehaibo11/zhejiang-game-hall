
/* v8::internal::wasm::AsmJsParser::Block() */

void __thiscall v8::internal::wasm::AsmJsParser::Block(AsmJsParser *this)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(this + 0x29c);
  if (iVar1 != 0) {
    BareBegin(this,2,iVar1);
    WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
  }
  *(undefined4 *)(this + 0x29c) = 0;
  if (*(int *)(this + 0x10) == 0x7b) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    bVar2 = this[0x1e4] == (AsmJsParser)0x0;
    do {
      if (!bVar2) {
        if (*(int *)(this + 0x10) == 0x7d) {
LAB_01486f80:
          AsmJsScanner::Next((AsmJsScanner *)(this + 8));
          if (iVar1 == 0) {
            return;
          }
          *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
          return;
        }
        goto LAB_01486fb0;
      }
      if (*(int *)(this + 0x10) == 0x7d) goto LAB_01486f80;
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x108)) {
        uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar4 = "Stack overflow while parsing asm.js module.";
        goto LAB_01486fc4;
      }
      ValidateStatement(this);
      bVar2 = true;
    } while (this[0x1e4] == (AsmJsParser)0x0);
  }
  else {
LAB_01486fb0:
    uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar4 = "Unexpected token";
LAB_01486fc4:
    *(char **)(this + 0x1e8) = pcVar4;
    *(undefined4 *)(this + 0x1f0) = uVar5;
  }
  return;
}

