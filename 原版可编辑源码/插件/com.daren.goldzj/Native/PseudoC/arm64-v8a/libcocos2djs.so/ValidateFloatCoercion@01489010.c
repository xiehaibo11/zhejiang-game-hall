
/* v8::internal::wasm::AsmJsParser::ValidateFloatCoercion() */

void __thiscall v8::internal::wasm::AsmJsParser::ValidateFloatCoercion(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  AsmType *this_01;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (0xff < *(int *)(this + 0x10)) {
    puVar1 = (undefined8 *)GetVarInfo(this,*(int *)(this + 0x10));
    uVar2 = AsmType::IsA((AsmType *)*puVar1,*(AsmType **)(this + 0x268));
    if ((uVar2 & 1) != 0) {
      this_00 = (AsmJsScanner *)(this + 8);
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == 0x28) {
        AsmJsScanner::Next(this_00);
        *(undefined8 *)(this + 0x270) = 0xe00d;
        *(undefined8 *)(this + 0x278) = *(undefined8 *)(this + 0x20);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x108)) {
          uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar4 = "Stack overflow while parsing asm.js module.";
          goto LAB_014890b4;
        }
        this_01 = (AsmType *)AssignmentExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return;
        }
        uVar2 = AsmType::IsA(this_01,(AsmType *)0x2005);
        if ((uVar2 & 1) == 0) {
          uVar2 = AsmType::IsA(this_01,(AsmType *)0x4d);
          if ((uVar2 & 1) == 0) {
            uVar2 = AsmType::IsA(this_01,(AsmType *)0x721);
            if ((uVar2 & 1) == 0) {
              uVar2 = AsmType::IsA(this_01,(AsmType *)0xb01);
              if ((uVar2 & 1) == 0) {
                uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
                this[0x1e4] = (AsmJsParser)0x1;
                pcVar4 = "Illegal conversion to float";
                goto LAB_014890b4;
              }
              uVar3 = 0xb3;
            }
            else {
              uVar3 = 0xb2;
            }
          }
          else {
            uVar3 = 0xb6;
          }
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar3);
        }
        if (*(int *)(this + 0x10) == 0x29) {
          AsmJsScanner::Next(this_00);
          return;
        }
      }
      uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar4 = "Unexpected token";
      goto LAB_014890b4;
    }
  }
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Expected fround";
LAB_014890b4:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return;
}

