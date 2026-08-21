
/* v8::internal::wasm::AsmJsParser::ConditionalExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::ConditionalExpression(AsmJsParser *this)

{
  long lVar1;
  ulong uVar2;
  AsmType *pAVar3;
  ulong uVar4;
  AsmType *this_00;
  long lVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  
  uVar2 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar2) {
    pAVar3 = (AsmType *)BitwiseORExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    if (*(int *)(this + 0x10) != 0x3f) {
      return pAVar3;
    }
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x301);
    if ((uVar2 & 1) == 0) {
      uVar8 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar6 = "Expected int in condition of ternary operator.";
      goto LAB_0148a988;
    }
    WasmFunctionBuilder::EmitWithU8(*(WasmFunctionBuilder **)(this + 0xf8),4,0x7f);
    uVar2 = *(ulong *)(*(long *)(this + 0xf8) + 0x48);
    lVar1 = *(long *)(*(long *)(this + 0xf8) + 0x50);
    uVar4 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar4) {
      pAVar3 = (AsmType *)AssignmentExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),5);
      if (*(int *)(this + 0x10) != 0x3a) {
        uVar8 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Unexpected token";
        goto LAB_0148a988;
      }
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar4 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar4) {
        this_00 = (AsmType *)AssignmentExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb);
        uVar4 = AsmType::IsA(pAVar3,(AsmType *)0x301);
        if (((uVar4 & 1) == 0) || (uVar4 = AsmType::IsA(this_00,(AsmType *)0x301), (uVar4 & 1) == 0)
           ) {
          uVar4 = AsmType::IsA(pAVar3,(AsmType *)0xed);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = AsmType::IsA(this_00,(AsmType *)0xed), (uVar4 & 1) == 0)) {
            uVar4 = AsmType::IsA(pAVar3,(AsmType *)0xe00d);
            if (((uVar4 & 1) == 0) ||
               (uVar4 = AsmType::IsA(this_00,(AsmType *)0xe00d), (uVar4 & 1) == 0)) {
              uVar8 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar6 = "Type mismatch in ternary operator.";
              goto LAB_0148a988;
            }
            lVar5 = *(long *)(this + 0xf8);
            uVar7 = 0x7d;
            pAVar3 = (AsmType *)0xe00d;
          }
          else {
            lVar5 = *(long *)(this + 0xf8);
            uVar7 = 0x7c;
            pAVar3 = (AsmType *)0xed;
          }
        }
        else {
          lVar5 = *(long *)(this + 0xf8);
          uVar7 = 0x7f;
          pAVar3 = (AsmType *)0x301;
        }
        *(undefined1 *)(*(long *)(lVar5 + 0x48) + lVar1 + ~uVar2) = uVar7;
        return pAVar3;
      }
    }
  }
  uVar8 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar6 = "Stack overflow while parsing asm.js module.";
LAB_0148a988:
  *(char **)(this + 0x1e8) = pcVar6;
  *(undefined4 *)(this + 0x1f0) = uVar8;
  return (AsmType *)0x0;
}

