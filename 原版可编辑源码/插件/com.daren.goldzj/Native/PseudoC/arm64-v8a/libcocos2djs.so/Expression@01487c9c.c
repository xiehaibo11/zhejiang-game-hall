
/* v8::internal::wasm::AsmJsParser::Expression(v8::internal::wasm::AsmType*) */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::Expression(AsmJsParser *this,AsmType *param_1)

{
  ulong uVar1;
  AsmType *this_00;
  char *pcVar2;
  undefined4 uVar3;
  
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar1) {
    do {
      this_00 = (AsmType *)AssignmentExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      if (*(int *)(this + 0x10) != 0x2c) {
        if (param_1 == (AsmType *)0x0) {
          return this_00;
        }
        uVar1 = AsmType::IsA(this_00,param_1);
        if ((uVar1 & 1) != 0) {
          return this_00;
        }
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar2 = "Unexpected type";
        goto LAB_01487cdc;
      }
      uVar1 = AsmType::IsA(this_00,(AsmType *)0x80000001);
      if ((uVar1 & 1) != 0) {
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar2 = "Expected actual type";
        goto LAB_01487cdc;
      }
      uVar1 = AsmType::IsA(this_00,(AsmType *)0x11);
      if ((uVar1 & 1) == 0) {
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x1a);
      }
      if (*(int *)(this + 0x10) != 0x2c) {
        uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar2 = "Unexpected token";
        goto LAB_01487cdc;
      }
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar1 = GetCurrentStackPosition();
    } while (*(ulong *)(this + 0x108) <= uVar1);
  }
  uVar3 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar2 = "Stack overflow while parsing asm.js module.";
LAB_01487cdc:
  *(char **)(this + 0x1e8) = pcVar2;
  *(undefined4 *)(this + 0x1f0) = uVar3;
  return (AsmType *)0x0;
}

