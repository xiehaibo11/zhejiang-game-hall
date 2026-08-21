
/* v8::internal::wasm::AsmJsParser::EqualityExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::EqualityExpression(AsmJsParser *this)

{
  ulong uVar1;
  AsmType *this_00;
  AsmType *pAVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar1) {
    this_00 = (AsmType *)RelationalExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    do {
      if (*(int *)(this + 0x10) == -0x26d5) {
        AsmJsScanner::Next((AsmJsScanner *)(this + 8));
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x108)) break;
        pAVar2 = (AsmType *)RelationalExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar1 = AsmType::IsA(this_00,(AsmType *)0x721);
        if ((((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x721), (uVar1 & 1) == 0)
            ) && ((uVar1 = AsmType::IsA(this_00,(AsmType *)0xb01), (uVar1 & 1) == 0 ||
                  (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xb01), (uVar1 & 1) == 0)))) {
          uVar1 = AsmType::IsA(this_00,(AsmType *)0xed);
          if (((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xed), (uVar1 & 1) == 0)
             ) {
            uVar1 = AsmType::IsA(this_00,(AsmType *)0xe00d);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xe00d), (uVar1 & 1) == 0)) {
              uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar4 = "Expected signed, unsigned, double, or float for operator \"!=\".";
              goto LAB_0148be68;
            }
            uVar3 = 0x5c;
          }
          else {
            uVar3 = 0x62;
          }
        }
        else {
          uVar3 = 0x47;
        }
      }
      else {
        if (*(int *)(this + 0x10) != -0x26d6) {
          return this_00;
        }
        AsmJsScanner::Next((AsmJsScanner *)(this + 8));
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x108)) break;
        pAVar2 = (AsmType *)RelationalExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar1 = AsmType::IsA(this_00,(AsmType *)0x721);
        if ((((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x721), (uVar1 & 1) == 0)
            ) && ((uVar1 = AsmType::IsA(this_00,(AsmType *)0xb01), (uVar1 & 1) == 0 ||
                  (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xb01), (uVar1 & 1) == 0)))) {
          uVar1 = AsmType::IsA(this_00,(AsmType *)0xed);
          if (((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xed), (uVar1 & 1) == 0)
             ) {
            uVar1 = AsmType::IsA(this_00,(AsmType *)0xe00d);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xe00d), (uVar1 & 1) == 0))
            goto LAB_0148c058;
            uVar3 = 0x5b;
          }
          else {
            uVar3 = 0x61;
          }
        }
        else {
          uVar3 = 0x46;
        }
      }
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar3);
      this_00 = (AsmType *)0x301;
    } while( true );
  }
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Stack overflow while parsing asm.js module.";
LAB_0148be68:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return (AsmType *)0x0;
LAB_0148c058:
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Expected signed, unsigned, double, or float for operator \"==\".";
  goto LAB_0148be68;
}

