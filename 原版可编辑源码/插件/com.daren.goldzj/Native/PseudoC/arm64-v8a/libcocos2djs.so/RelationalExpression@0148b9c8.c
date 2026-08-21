
/* v8::internal::wasm::AsmJsParser::RelationalExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::RelationalExpression(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  ulong uVar2;
  AsmType *this_01;
  AsmType *pAVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  uVar2 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar2) {
    this_01 = (AsmType *)ShiftExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    this_00 = (AsmJsScanner *)(this + 8);
    do {
      iVar1 = *(int *)(this + 0x10);
      if (iVar1 < 0x3c) {
        if (iVar1 == -0x26d8) {
          AsmJsScanner::Next(this_00);
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)(this + 0x108)) break;
          pAVar3 = (AsmType *)ShiftExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return (AsmType *)0x0;
          }
          uVar2 = AsmType::IsA(this_01,(AsmType *)0x721);
          if (((uVar2 & 1) == 0) ||
             (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x721), (uVar2 & 1) == 0)) {
            uVar2 = AsmType::IsA(this_01,(AsmType *)0xb01);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xb01), (uVar2 & 1) == 0)) {
              uVar2 = AsmType::IsA(this_01,(AsmType *)0xed);
              if (((uVar2 & 1) == 0) ||
                 (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xed), (uVar2 & 1) == 0)) {
                uVar2 = AsmType::IsA(this_01,(AsmType *)0xe00d);
                if (((uVar2 & 1) == 0) ||
                   (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xe00d), (uVar2 & 1) == 0)) {
                  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
                  this[0x1e4] = (AsmJsParser)0x1;
                  pcVar5 = "Expected signed, unsigned, double, or float for operator \"<=\".";
                  goto LAB_0148ba08;
                }
                uVar4 = 0x5f;
              }
              else {
                uVar4 = 0x65;
              }
            }
            else {
              uVar4 = 0x4d;
            }
          }
          else {
            uVar4 = 0x4c;
          }
        }
        else {
          if (iVar1 != -0x26d7) {
            return this_01;
          }
          AsmJsScanner::Next(this_00);
          uVar2 = GetCurrentStackPosition();
          if (uVar2 < *(ulong *)(this + 0x108)) break;
          pAVar3 = (AsmType *)ShiftExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return (AsmType *)0x0;
          }
          uVar2 = AsmType::IsA(this_01,(AsmType *)0x721);
          if (((uVar2 & 1) == 0) ||
             (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x721), (uVar2 & 1) == 0)) {
            uVar2 = AsmType::IsA(this_01,(AsmType *)0xb01);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xb01), (uVar2 & 1) == 0)) {
              uVar2 = AsmType::IsA(this_01,(AsmType *)0xed);
              if (((uVar2 & 1) == 0) ||
                 (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xed), (uVar2 & 1) == 0)) {
                uVar2 = AsmType::IsA(this_01,(AsmType *)0xe00d);
                if (((uVar2 & 1) == 0) ||
                   (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xe00d), (uVar2 & 1) == 0))
                goto LAB_0148bdd4;
                uVar4 = 0x60;
              }
              else {
                uVar4 = 0x66;
              }
            }
            else {
              uVar4 = 0x4f;
            }
          }
          else {
            uVar4 = 0x4e;
          }
        }
      }
      else if (iVar1 == 0x3e) {
        AsmJsScanner::Next(this_00);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x108)) break;
        pAVar3 = (AsmType *)ShiftExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar2 = AsmType::IsA(this_01,(AsmType *)0x721);
        if (((uVar2 & 1) == 0) || (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x721), (uVar2 & 1) == 0))
        {
          uVar2 = AsmType::IsA(this_01,(AsmType *)0xb01);
          if (((uVar2 & 1) == 0) ||
             (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xb01), (uVar2 & 1) == 0)) {
            uVar2 = AsmType::IsA(this_01,(AsmType *)0xed);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xed), (uVar2 & 1) == 0)) {
              uVar2 = AsmType::IsA(this_01,(AsmType *)0xe00d);
              if (((uVar2 & 1) == 0) ||
                 (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xe00d), (uVar2 & 1) == 0)) {
                uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
                this[0x1e4] = (AsmJsParser)0x1;
                pcVar5 = "Expected signed, unsigned, double, or float for operator \">\".";
                goto LAB_0148ba08;
              }
              uVar4 = 0x5e;
            }
            else {
              uVar4 = 100;
            }
          }
          else {
            uVar4 = 0x4b;
          }
        }
        else {
          uVar4 = 0x4a;
        }
      }
      else {
        if (iVar1 != 0x3c) {
          return this_01;
        }
        AsmJsScanner::Next(this_00);
        uVar2 = GetCurrentStackPosition();
        if (uVar2 < *(ulong *)(this + 0x108)) break;
        pAVar3 = (AsmType *)ShiftExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar2 = AsmType::IsA(this_01,(AsmType *)0x721);
        if (((uVar2 & 1) == 0) || (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x721), (uVar2 & 1) == 0))
        {
          uVar2 = AsmType::IsA(this_01,(AsmType *)0xb01);
          if (((uVar2 & 1) == 0) ||
             (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xb01), (uVar2 & 1) == 0)) {
            uVar2 = AsmType::IsA(this_01,(AsmType *)0xed);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xed), (uVar2 & 1) == 0)) {
              uVar2 = AsmType::IsA(this_01,(AsmType *)0xe00d);
              if (((uVar2 & 1) == 0) ||
                 (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0xe00d), (uVar2 & 1) == 0)) {
                uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
                this[0x1e4] = (AsmJsParser)0x1;
                pcVar5 = "Expected signed, unsigned, double, or float for operator \"<\".";
                goto LAB_0148ba08;
              }
              uVar4 = 0x5d;
            }
            else {
              uVar4 = 99;
            }
          }
          else {
            uVar4 = 0x49;
          }
        }
        else {
          uVar4 = 0x48;
        }
      }
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar4);
      this_01 = (AsmType *)0x301;
    } while( true );
  }
  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar5 = "Stack overflow while parsing asm.js module.";
LAB_0148ba08:
  *(char **)(this + 0x1e8) = pcVar5;
  *(undefined4 *)(this + 0x1f0) = uVar6;
  return (AsmType *)0x0;
LAB_0148bdd4:
  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar5 = "Expected signed, unsigned, double, or float for operator \">=\".";
  goto LAB_0148ba08;
}

