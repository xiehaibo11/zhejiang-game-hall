
/* v8::internal::wasm::AsmJsParser::UnaryExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::UnaryExpression(AsmJsParser *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  AsmType *pAVar5;
  WasmFunctionBuilder *pWVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(this + 0x10);
  if (iVar1 < 0x2d) {
    if (iVar1 == 0x21) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar4 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar4) {
        pAVar5 = (AsmType *)UnaryExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
        if ((uVar4 & 1) != 0) {
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x45);
          return pAVar5;
        }
        uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar8 = "expected int";
        goto LAB_0148ade4;
      }
    }
    else if (iVar1 == 0x2b) {
      *(undefined8 *)(this + 0x270) = 0xed;
      *(undefined8 *)(this + 0x278) = *(undefined8 *)(this + 0x20);
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      uVar4 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar4) {
        pAVar5 = (AsmType *)UnaryExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x721);
        if ((uVar4 & 1) == 0) {
          uVar4 = AsmType::IsA(pAVar5,(AsmType *)0xb01);
          if ((uVar4 & 1) == 0) {
            uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x4d);
            if ((uVar4 & 1) != 0) {
              return (AsmType *)0xed;
            }
            uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x600d);
            if ((uVar4 & 1) == 0) {
              uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
              this[0x1e4] = (AsmJsParser)0x1;
              pcVar8 = "expected signed/unsigned/double?/float?";
              goto LAB_0148ade4;
            }
            pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
            uVar7 = 0xbb;
          }
          else {
            pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
            uVar7 = 0xb8;
          }
        }
        else {
          pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
          uVar7 = 0xb7;
        }
LAB_0148af5c:
        WasmFunctionBuilder::Emit(pWVar6,uVar7);
        return (AsmType *)0xed;
      }
    }
    else {
LAB_0148acb4:
      uVar4 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar4) {
        pAVar5 = (AsmType *)CallExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        return pAVar5;
      }
    }
  }
  else if (iVar1 == 0x7e) {
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    iVar1 = *(int *)(this + 0x10);
    if (iVar1 == 0x7e) {
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    }
    uVar4 = GetCurrentStackPosition();
    if (iVar1 != 0x7e) {
      if (*(ulong *)(this + 0x108) <= uVar4) {
        pAVar5 = (AsmType *)UnaryExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x101);
        if ((uVar4 & 1) == 0) {
          uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar8 = "operator ~ expects intish";
          goto LAB_0148ade4;
        }
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),-1);
        pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
        uVar7 = 0x73;
        goto LAB_0148aec4;
      }
    }
    else if (*(ulong *)(this + 0x108) <= uVar4) {
      pAVar5 = (AsmType *)UnaryExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      uVar4 = AsmType::IsA(pAVar5,(AsmType *)0xed);
      if ((uVar4 & 1) == 0) {
        uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x600d);
        if ((uVar4 & 1) == 0) {
          uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar8 = "expected double or float?";
          goto LAB_0148ade4;
        }
        pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
        uVar7 = 0xe3;
      }
      else {
        pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
        uVar7 = 0xe5;
      }
LAB_0148aec4:
      WasmFunctionBuilder::Emit(pWVar6,uVar7);
      return (AsmType *)0x721;
    }
  }
  else {
    if (iVar1 != 0x2d) goto LAB_0148acb4;
    AsmJsScanner::Next((AsmJsScanner *)(this + 8));
    if (*(int *)(this + 0x10) == -3) {
      uVar2 = *(uint *)(this + 0xe8);
      AsmJsScanner::Next((AsmJsScanner *)(this + 8));
      if (uVar2 < 0x80000001) {
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),-uVar2);
        return (AsmType *)0x721;
      }
      uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar8 = "Integer numeric literal out of range.";
      goto LAB_0148ade4;
    }
    uVar4 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar4) {
      pAVar5 = (AsmType *)UnaryExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x301);
      if ((uVar4 & 1) != 0) {
        iVar3 = *(int *)(this + 0x1e0);
        iVar1 = iVar3 + 1;
        *(int *)(this + 0x1e0) = iVar1;
        if (*(int *)(this + 0x1dc) <= iVar3) {
          *(int *)(this + 0x1dc) = iVar1;
        }
        WasmFunctionBuilder::EmitSetLocal
                  (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar3);
        WasmFunctionBuilder::EmitI32Const(*(WasmFunctionBuilder **)(this + 0xf8),0);
        if (*(int *)(this + 0x1dc) <= iVar3) {
          *(int *)(this + 0x1dc) = iVar1;
        }
        WasmFunctionBuilder::EmitGetLocal
                  (*(WasmFunctionBuilder **)(this + 0xf8),*(int *)(this + 0x1d8) + iVar3);
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x6b);
        *(int *)(this + 0x1e0) = *(int *)(this + 0x1e0) + -1;
        return (AsmType *)0x101;
      }
      uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x4d);
      if ((uVar4 & 1) != 0) {
        pWVar6 = *(WasmFunctionBuilder **)(this + 0xf8);
        uVar7 = 0x9a;
        goto LAB_0148af5c;
      }
      uVar4 = AsmType::IsA(pAVar5,(AsmType *)0x600d);
      if ((uVar4 & 1) != 0) {
        WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0x8c);
        return (AsmType *)0x2005;
      }
      uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
      this[0x1e4] = (AsmJsParser)0x1;
      pcVar8 = "expected int/double?/float?";
      goto LAB_0148ade4;
    }
  }
  uVar9 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar8 = "Stack overflow while parsing asm.js module.";
LAB_0148ade4:
  *(char **)(this + 0x1e8) = pcVar8;
  *(undefined4 *)(this + 0x1f0) = uVar9;
  return (AsmType *)0x0;
}

