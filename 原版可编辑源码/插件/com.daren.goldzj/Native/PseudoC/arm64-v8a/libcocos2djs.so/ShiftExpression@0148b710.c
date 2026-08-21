
/* v8::internal::wasm::AsmJsParser::ShiftExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::ShiftExpression(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  bool bVar2;
  ulong uVar3;
  AsmType *this_01;
  AsmType *pAVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  long unaff_x28;
  long local_70;
  undefined4 local_64;
  
  uVar3 = GetCurrentStackPosition();
  if (*(ulong *)(this + 0x108) <= uVar3) {
    this_01 = (AsmType *)AdditiveExpression(this);
    if (this[0x1e4] != (AsmJsParser)0x0) {
      return (AsmType *)0x0;
    }
    this_00 = (AsmJsScanner *)(this + 8);
    *(undefined8 *)(this + 0x290) = 0xffffffffffffffff;
    do {
      while (iVar1 = *(int *)(this + 0x10), iVar1 == -0x26d4) {
        AsmJsScanner::Next(this_00);
        *(undefined8 *)(this + 0x290) = 0xffffffffffffffff;
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x108)) goto LAB_0148b744;
        pAVar4 = (AsmType *)AdditiveExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar3 = AsmType::IsA(this_01,(AsmType *)0x101);
        if (((uVar3 & 1) == 0) || (uVar3 = AsmType::IsA(pAVar4,(AsmType *)0x101), (uVar3 & 1) == 0))
        {
          uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar6 = "Expected intish for operator \"<<\".";
          goto LAB_0148b75c;
        }
        uVar5 = 0x74;
        this_01 = (AsmType *)0x721;
LAB_0148b7c8:
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar5);
      }
      if (iVar1 == -0x26d2) {
        AsmJsScanner::Next(this_00);
        *(undefined8 *)(this + 0x290) = 0xffffffffffffffff;
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)(this + 0x108)) break;
        pAVar4 = (AsmType *)AdditiveExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar3 = AsmType::IsA(this_01,(AsmType *)0x101);
        if (((uVar3 & 1) != 0) && (uVar3 = AsmType::IsA(pAVar4,(AsmType *)0x101), (uVar3 & 1) != 0))
        {
          uVar5 = 0x76;
          this_01 = (AsmType *)0xb01;
          goto LAB_0148b7c8;
        }
        uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar6 = "Expected intish for operator \">>>\".";
        goto LAB_0148b75c;
      }
      if (iVar1 != -0x26d3) {
        return this_01;
      }
      AsmJsScanner::Next(this_00);
      *(undefined8 *)(this + 0x290) = 0xffffffffffffffff;
      uVar3 = AsmType::IsA(this_01,(AsmType *)0x101);
      if (((uVar3 & 1) == 0) || (*(int *)(this + 0x10) != -3)) {
        bVar2 = false;
      }
      else {
        local_64 = *(undefined4 *)(this + 0xe8);
        AsmJsScanner::Next(this_00);
        unaff_x28 = *(long *)(this + 0x20);
        local_70 = *(long *)(*(long *)(this + 0xf8) + 0x50) -
                   *(long *)(*(long *)(this + 0xf8) + 0x48);
        AsmJsScanner::Rewind(this_00);
        bVar2 = true;
      }
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)(this + 0x108)) break;
      pAVar4 = (AsmType *)AdditiveExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      if ((bVar2) && (unaff_x28 == *(long *)(this + 0x20))) {
        *(long *)(this + 0x290) = local_70;
        *(undefined4 *)(this + 0x298) = local_64;
      }
      uVar3 = AsmType::IsA(this_01,(AsmType *)0x101);
      if (((uVar3 & 1) == 0) || (uVar3 = AsmType::IsA(pAVar4,(AsmType *)0x101), (uVar3 & 1) == 0))
      goto LAB_0148b9ac;
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x75);
      this_01 = (AsmType *)0x721;
    } while( true );
  }
LAB_0148b744:
  uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar6 = "Stack overflow while parsing asm.js module.";
LAB_0148b75c:
  *(char **)(this + 0x1e8) = pcVar6;
  *(undefined4 *)(this + 0x1f0) = uVar7;
  return (AsmType *)0x0;
LAB_0148b9ac:
  uVar7 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar6 = "Expected intish for operator >>.";
  goto LAB_0148b75c;
}

