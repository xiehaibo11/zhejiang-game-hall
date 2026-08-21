
/* v8::internal::wasm::AsmJsParser::BitwiseORExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::BitwiseORExpression(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  bool bVar1;
  ulong uVar2;
  AsmType *pAVar3;
  ulong uVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong unaff_x22;
  AsmType *this_01;
  long unaff_x26;
  
  *(undefined8 *)(this + 0x288) = *(undefined8 *)(this + 0x20);
  uVar2 = GetCurrentStackPosition();
  if (uVar2 < *(ulong *)(this + 0x108)) {
LAB_0148c308:
    uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar5 = "Stack overflow while parsing asm.js module.";
LAB_0148c320:
    *(char **)(this + 0x1e8) = pcVar5;
    *(undefined4 *)(this + 0x1f0) = uVar6;
    pAVar3 = (AsmType *)0x0;
  }
  else {
    pAVar3 = (AsmType *)BitwiseXORExpression(this);
    if (this[0x1e4] == (AsmJsParser)0x0) {
      if (*(int *)(this + 0x10) == 0x7c) {
        this_00 = (AsmJsScanner *)(this + 8);
        this_01 = pAVar3;
        do {
          AsmJsScanner::Next(this_00);
          uVar2 = AsmType::IsExactly(*(AsmType **)(this + 0x280),(AsmType *)0x721);
          *(undefined8 *)(this + 0x280) = 0;
          uVar4 = AsmType::IsA(this_01,(AsmType *)0x101);
          if ((((uVar4 & 1) == 0) || (*(int *)(this + 0x10) != -3)) || (*(int *)(this + 0xe8) != 0))
          {
            bVar1 = false;
          }
          else {
            AsmJsScanner::Next(this_00);
            unaff_x26 = *(long *)(this + 0x20);
            unaff_x22 = *(long *)(*(long *)(this + 0xf8) + 0x50) -
                        *(long *)(*(long *)(this + 0xf8) + 0x48);
            AsmJsScanner::Rewind(this_00);
            bVar1 = true;
          }
          uVar4 = GetCurrentStackPosition();
          if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_0148c308;
          pAVar3 = (AsmType *)BitwiseXORExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) goto LAB_0148c33c;
          if ((bVar1) && (unaff_x26 == *(long *)(this + 0x20))) {
            WasmFunctionBuilder::DeleteCodeAfter(*(WasmFunctionBuilder **)(this + 0xf8),unaff_x22);
          }
          else {
            if ((uVar2 & 1) != 0) {
              uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar5 = "Expected |0 type annotation for call";
              goto LAB_0148c320;
            }
            uVar2 = AsmType::IsA(this_01,(AsmType *)0x101);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = AsmType::IsA(pAVar3,(AsmType *)0x101), (uVar2 & 1) == 0)) {
              uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar5 = "Expected intish for operator |.";
              goto LAB_0148c320;
            }
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x72);
          }
          this_01 = (AsmType *)0x721;
          pAVar3 = (AsmType *)0x721;
        } while (*(int *)(this + 0x10) == 0x7c);
      }
    }
    else {
LAB_0148c33c:
      pAVar3 = (AsmType *)0x0;
    }
  }
  return pAVar3;
}

