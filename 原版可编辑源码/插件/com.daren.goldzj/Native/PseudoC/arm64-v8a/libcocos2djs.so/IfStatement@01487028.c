
/* v8::internal::wasm::AsmJsParser::IfStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::IfStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  ulong uVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0x10) == -0x26de) {
    this_00 = (AsmJsScanner *)(this + 8);
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) == 0x28) {
      AsmJsScanner::Next(this_00);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar1) {
        Expression(this,(AsmType *)0x301);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return;
        }
        if (*(int *)(this + 0x10) != 0x29) goto LAB_01487158;
        AsmJsScanner::Next(this_00);
        BareBegin(this,3,0);
        WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),4,0x40);
        uVar1 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar1) {
          ValidateStatement(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return;
          }
          if (*(int *)(this + 0x10) != -0x26e2) {
LAB_0148713c:
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
            *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
            return;
          }
          AsmJsScanner::Next(this_00);
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),5);
          uVar1 = GetCurrentStackPosition();
          if (*(ulong *)(this + 0x108) <= uVar1) {
            ValidateStatement(this);
            if (this[0x1e4] != (AsmJsParser)0x0) {
              return;
            }
            goto LAB_0148713c;
          }
        }
      }
      uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar2 = "Stack overflow while parsing asm.js module.";
      goto LAB_0148716c;
    }
  }
LAB_01487158:
  uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar2 = "Unexpected token";
LAB_0148716c:
  *(char **)(this + 0x1e8) = pcVar2;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return;
}

