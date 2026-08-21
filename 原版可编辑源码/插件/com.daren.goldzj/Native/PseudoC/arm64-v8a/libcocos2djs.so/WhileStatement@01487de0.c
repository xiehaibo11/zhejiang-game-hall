
/* v8::internal::wasm::AsmJsParser::WhileStatement() */

void __thiscall v8::internal::wasm::AsmJsParser::WhileStatement(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  ulong uVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  BareBegin(this,0,*(undefined4 *)(this + 0x29c));
  WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),2,0x40);
  BareBegin(this,1,*(undefined4 *)(this + 0x29c));
  WasmFunctionBuilder::AddAsmWasmOffset
            (*(WasmFunctionBuilder **)(this + 0xf8),*(ulong *)(this + 0x20),*(ulong *)(this + 0x20))
  ;
  WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),3,0x40);
  *(undefined4 *)(this + 0x29c) = 0;
  if (*(int *)(this + 0x10) != -0x26d9) {
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    pcVar3 = "Unexpected token";
    this[0x1e4] = (AsmJsParser)0x1;
LAB_01487eac:
    *(char **)(this + 0x1e8) = pcVar3;
    *(undefined4 *)(this + 0x1f0) = uVar2;
    return;
  }
  this_00 = (AsmJsScanner *)(this + 8);
  AsmJsScanner::Next(this_00);
  if (*(int *)(this + 0x10) == 0x28) {
    AsmJsScanner::Next(this_00);
    uVar1 = GetCurrentStackPosition();
    if (uVar1 < *(ulong *)(this + 0x108)) {
      uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Stack overflow while parsing asm.js module.";
      goto LAB_01487f38;
    }
    Expression(this,(AsmType *)0x301);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return;
    }
    if (*(int *)(this + 0x10) == 0x29) {
      AsmJsScanner::Next(this_00);
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x45);
      WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),0xd,1);
      uVar1 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar1) {
        ValidateStatement(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return;
        }
        WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),0xc,0);
        *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
        *(long *)(this + 0x218) = *(long *)(this + 0x218) + -8;
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
        return;
      }
      uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar3 = "Stack overflow while parsing asm.js module.";
      goto LAB_01487eac;
    }
  }
  uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar3 = "Unexpected token";
LAB_01487f38:
  *(char **)(this + 0x1e8) = pcVar3;
  *(undefined4 *)(this + 0x1f0) = uVar2;
  return;
}

