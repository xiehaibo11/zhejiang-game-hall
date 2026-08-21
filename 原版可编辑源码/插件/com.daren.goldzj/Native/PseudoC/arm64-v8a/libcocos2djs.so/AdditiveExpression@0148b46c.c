
/* v8::internal::wasm::AsmJsParser::AdditiveExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::AdditiveExpression(AsmJsParser *this)

{
  ulong uVar1;
  AsmType *this_00;
  AsmType *pAVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar1 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar1) {
    this_00 = (AsmType *)MultiplicativeExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    iVar6 = 0;
    do {
      if (*(int *)(this + 0x10) == 0x2d) {
        AsmJsScanner::Next((AsmJsScanner *)(this + 8));
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x108)) break;
        pAVar2 = (AsmType *)MultiplicativeExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar1 = AsmType::IsA(this_00,(AsmType *)0xed);
        if (((uVar1 & 1) != 0) && (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xed), (uVar1 & 1) != 0))
        {
          uVar3 = 0xa1;
          goto LAB_0148b4f8;
        }
        uVar1 = AsmType::IsA(this_00,(AsmType *)0x600d);
        if (((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x600d), (uVar1 & 1) == 0)
           ) {
          uVar1 = AsmType::IsA(this_00,(AsmType *)0x301);
          if (((uVar1 & 1) == 0) ||
             (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x301), (uVar1 & 1) == 0)) {
            uVar1 = AsmType::IsA(this_00,(AsmType *)0x101);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x101), (uVar1 & 1) == 0)) goto LAB_0148b6d8;
            if (0xfffff < iVar6) goto LAB_0148b6f4;
            iVar6 = iVar6 + 1;
            uVar3 = 0x6b;
          }
          else {
            iVar6 = 2;
            uVar3 = 0x6b;
            this_00 = (AsmType *)0x101;
          }
        }
        else {
          uVar3 = 0x93;
          this_00 = (AsmType *)0x2005;
        }
      }
      else {
        if (*(int *)(this + 0x10) != 0x2b) {
          return this_00;
        }
        AsmJsScanner::Next((AsmJsScanner *)(this + 8));
        uVar1 = GetCurrentStackPosition();
        if (uVar1 < *(ulong *)(this + 0x108)) break;
        pAVar2 = (AsmType *)MultiplicativeExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar1 = AsmType::IsA(this_00,(AsmType *)0xed);
        if (((uVar1 & 1) == 0) || (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0xed), (uVar1 & 1) == 0))
        {
          uVar1 = AsmType::IsA(this_00,(AsmType *)0x600d);
          if (((uVar1 & 1) == 0) ||
             (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x600d), (uVar1 & 1) == 0)) {
            uVar1 = AsmType::IsA(this_00,(AsmType *)0x301);
            if (((uVar1 & 1) == 0) ||
               (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x301), (uVar1 & 1) == 0)) {
              uVar1 = AsmType::IsA(this_00,(AsmType *)0x101);
              if (((uVar1 & 1) == 0) ||
                 (uVar1 = AsmType::IsA(pAVar2,(AsmType *)0x101), (uVar1 & 1) == 0)) {
LAB_0148b6d8:
                uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
                this[0x1e4] = (AsmJsParser)0x1;
                pcVar4 = "illegal types for +";
                goto LAB_0148b4ac;
              }
              if (0xfffff < iVar6) goto LAB_0148b6f4;
              iVar6 = iVar6 + 1;
              uVar3 = 0x6a;
            }
            else {
              iVar6 = 2;
              uVar3 = 0x6a;
              this_00 = (AsmType *)0x101;
            }
          }
          else {
            uVar3 = 0x92;
            this_00 = (AsmType *)0x2005;
          }
        }
        else {
          uVar3 = 0xa0;
LAB_0148b4f8:
          this_00 = (AsmType *)0xed;
        }
      }
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar3);
    } while( true );
  }
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "Stack overflow while parsing asm.js module.";
LAB_0148b4ac:
  *(char **)(this + 0x1e8) = pcVar4;
  *(undefined4 *)(this + 0x1f0) = uVar5;
  return (AsmType *)0x0;
LAB_0148b6f4:
  uVar5 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar4 = "more than 2^20 additive values";
  goto LAB_0148b4ac;
}

