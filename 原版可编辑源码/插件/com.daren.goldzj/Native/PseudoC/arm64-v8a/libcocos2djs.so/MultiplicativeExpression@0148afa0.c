
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::wasm::AsmJsParser::MultiplicativeExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::MultiplicativeExpression(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  int iVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  AsmType *pAVar5;
  WasmFunctionBuilder *this_01;
  AsmType *pAVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint unaff_w22;
  
  this_00 = (AsmJsScanner *)(this + 8);
  if (*(int *)(this + 0x10) == 0x2d) {
    AsmJsScanner::Next(this_00);
    if ((*(int *)(this + 0x10) != -3) || (uVar7 = *(uint *)(this + 0xe8), uVar7 >> 0x14 != 0)) {
LAB_0148b0c0:
      AsmJsScanner::Rewind(this_00);
      goto LAB_0148b0c8;
    }
    AsmJsScanner::Next(this_00);
    WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),-uVar7);
    if (*(int *)(this + 0x10) != 0x2a) {
      pAVar5 = (AsmType *)0x721;
      uVar7 = unaff_w22;
      goto LAB_0148b148;
    }
    AsmJsScanner::Next(this_00);
    uVar4 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar4) {
      pAVar5 = (AsmType *)UnaryExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
      if ((uVar4 & 1) != 0) {
LAB_0148b43c:
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x6c);
        return (AsmType *)0x101;
      }
LAB_0148b0a4:
      uVar10 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar9 = "Expected int";
      goto LAB_0148b0f0;
    }
  }
  else {
    if ((*(int *)(this + 0x10) == -3) && (uVar7 = *(uint *)(this + 0xe8), uVar7 >> 0x14 == 0)) {
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == 0x2a) {
        AsmJsScanner::Next(this_00);
        uVar4 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar4) {
          pAVar5 = (AsmType *)UnaryExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return (AsmType *)0x0;
          }
          uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
          if ((uVar4 & 1) != 0) {
            this_01 = *(WasmFunctionBuilder **)(this + 0xf8);
LAB_0148b438:
            WasmFunctionBuilder::EmitI32Const(this_01,uVar7);
            goto LAB_0148b43c;
          }
          goto LAB_0148b0a4;
        }
        goto LAB_0148b0d8;
      }
      goto LAB_0148b0c0;
    }
LAB_0148b0c8:
    uVar4 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar4) {
      pAVar5 = (AsmType *)UnaryExpression(this);
      uVar7 = unaff_w22;
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
LAB_0148b148:
      iVar1 = *(int *)(this + 0x10);
      if (iVar1 == 0x25) {
        AsmJsScanner::Next(this_00);
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_0148b0d8;
        pAVar6 = (AsmType *)UnaryExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x4d);
        if (((uVar4 & 1) != 0) && (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x4d), (uVar4 & 1) != 0))
        {
          uVar8 = 0xcf;
          pAVar5 = (AsmType *)0xed;
          goto LAB_0148b140;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x721);
        if (((uVar4 & 1) == 0) || (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x721), (uVar4 & 1) == 0))
        {
          uVar4 = AsmType::IsA(pAVar5,(AsmType *)0xb01);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0xb01), (uVar4 & 1) == 0)) goto LAB_0148b3bc;
          uVar8 = 0xd6;
        }
        else {
          uVar8 = 0xd5;
        }
      }
      else {
        if (iVar1 != 0x2f) {
          if (iVar1 != 0x2a) {
            return pAVar5;
          }
          AsmJsScanner::Next(this_00);
          if (*(int *)(this + 0x10) == 0x2d) {
            AsmJsScanner::Next(this_00);
            bVar2 = true;
            if (*(int *)(this + 0x10) == -3) goto LAB_0148b2f8;
LAB_0148b190:
            bVar3 = false;
            if (bVar2) goto LAB_0148b30c;
LAB_0148b198:
            if (!bVar3) {
LAB_0148b318:
              uVar4 = GetCurrentStackPosition();
              if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_0148b0d8;
              pAVar6 = (AsmType *)UnaryExpression(this);
              if (this[0x1e4] != (AsmJsParser)0x0) {
                return (AsmType *)0x0;
              }
              uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x4d);
              if (((uVar4 & 1) != 0) &&
                 (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x4d), (uVar4 & 1) != 0)) {
                uVar8 = 0xa2;
                pAVar5 = (AsmType *)0xed;
                goto LAB_0148b140;
              }
              uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x600d);
              if (((uVar4 & 1) == 0) ||
                 (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x600d), (uVar4 & 1) == 0))
              goto LAB_0148b3bc;
              uVar8 = 0x94;
              pAVar5 = (AsmType *)0x2005;
              goto LAB_0148b140;
            }
            if (0xfffff < uVar7) {
LAB_0148b404:
              uVar10 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar9 = "Constant multiple out of range";
              goto LAB_0148b0f0;
            }
            uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
            if ((uVar4 & 1) != 0) {
              this_01 = *(WasmFunctionBuilder **)(this + 0xf8);
              goto LAB_0148b438;
            }
          }
          else {
            bVar2 = false;
            if (*(int *)(this + 0x10) != -3) goto LAB_0148b190;
LAB_0148b2f8:
            uVar7 = *(uint *)(this + 0xe8);
            AsmJsScanner::Next(this_00);
            bVar3 = true;
            if (!bVar2) goto LAB_0148b198;
LAB_0148b30c:
            if (!bVar3) {
              AsmJsScanner::Rewind(this_00);
              goto LAB_0148b318;
            }
            if (0xfffff < uVar7) goto LAB_0148b404;
            uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
            if ((uVar4 & 1) != 0) {
              this_01 = *(WasmFunctionBuilder **)(this + 0xf8);
              uVar7 = -uVar7;
              goto LAB_0148b438;
            }
          }
          uVar10 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar9 = "Integer multiply of expects int";
          goto LAB_0148b0f0;
        }
        AsmJsScanner::Next(this_00);
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)(this + 0x108)) goto LAB_0148b0d8;
        pAVar6 = (AsmType *)UnaryExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x4d);
        if (((uVar4 & 1) != 0) && (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x4d), (uVar4 & 1) != 0))
        {
          uVar8 = 0xa3;
          pAVar5 = (AsmType *)0xed;
          goto LAB_0148b140;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x600d);
        if (((uVar4 & 1) != 0) && (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x600d), (uVar4 & 1) != 0)
           ) {
          uVar8 = 0x95;
          pAVar5 = (AsmType *)0x2005;
          goto LAB_0148b140;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x721);
        if (((uVar4 & 1) != 0) && (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0x721), (uVar4 & 1) != 0))
        {
          uVar8 = 0xd3;
          goto LAB_0148b13c;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0xb01);
        if (((uVar4 & 1) == 0) || (uVar4 = AsmType::IsA(pAVar6,(AsmType *)0xb01), (uVar4 & 1) == 0))
        goto LAB_0148b3bc;
        uVar8 = 0xd4;
      }
LAB_0148b13c:
      pAVar5 = (AsmType *)0x101;
LAB_0148b140:
      WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),uVar8);
      goto LAB_0148b148;
    }
  }
LAB_0148b0d8:
  uVar10 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar9 = "Stack overflow while parsing asm.js module.";
LAB_0148b0f0:
  *(char **)(this + 0x1e8) = pcVar9;
  *(undefined4 *)(this + 0x1f0) = uVar10;
  return (AsmType *)0x0;
LAB_0148b3bc:
  uVar10 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar9 = "expected doubles or floats";
  goto LAB_0148b0f0;
}

