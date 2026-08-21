
/* v8::internal::wasm::AsmJsParser::AssignmentExpression() */

AsmType * __thiscall v8::internal::wasm::AsmJsParser::AssignmentExpression(AsmJsParser *this)

{
  AsmJsScanner *this_00;
  undefined8 *puVar1;
  ulong uVar2;
  AsmType *pAVar3;
  AsmType *this_01;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  AsmType *pAVar7;
  
  iVar4 = *(int *)(this + 0x10);
  this_00 = (AsmJsScanner *)(this + 8);
  if (iVar4 < 0x100) {
LAB_014889f4:
    if (0x280e < iVar4 + 9999U) {
      puVar1 = (undefined8 *)GetVarInfo(this,iVar4);
      pAVar3 = (AsmType *)*puVar1;
      AsmJsScanner::Next(this_00);
      if (*(int *)(this + 0x10) == 0x3d) {
        AsmJsScanner::Next(this_00);
        if (*(int *)(puVar1 + 4) == 0) {
          uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar5 = "Undeclared assignment target";
          goto LAB_01488ac0;
        }
        if (*(char *)((long)puVar1 + 0x24) == '\0') {
          uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar5 = "Expected mutable variable in assignment";
          goto LAB_01488ac0;
        }
        uVar2 = GetCurrentStackPosition();
        if (*(ulong *)(this + 0x108) <= uVar2) {
          pAVar7 = (AsmType *)AssignmentExpression(this);
          if (this[0x1e4] != (AsmJsParser)0x0) {
            return (AsmType *)0x0;
          }
          uVar2 = AsmType::IsA(pAVar7,pAVar3);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(puVar1 + 4) == 2) {
              WasmFunctionBuilder::EmitWithU32V
                        (*(WasmFunctionBuilder **)(this + 0xf8),0x24,
                         *(int *)((long)puVar1 + 0x1c) + *(int *)(this + 0x2b0));
              WasmFunctionBuilder::EmitWithU32V
                        (*(WasmFunctionBuilder **)(this + 0xf8),0x23,
                         *(int *)((long)puVar1 + 0x1c) + *(int *)(this + 0x2b0));
              return pAVar3;
            }
            if (*(int *)(puVar1 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("unreachable code");
            }
            WasmFunctionBuilder::EmitTeeLocal
                      (*(WasmFunctionBuilder **)(this + 0xf8),*(uint *)((long)puVar1 + 0x1c));
            return pAVar3;
          }
          uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
          this[0x1e4] = (AsmJsParser)0x1;
          pcVar5 = "Type mismatch in assignment";
          goto LAB_01488ac0;
        }
        goto LAB_01488aa8;
      }
      AsmJsScanner::Rewind(this_00);
    }
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      pAVar3 = (AsmType *)ConditionalExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      return pAVar3;
    }
  }
  else {
    puVar1 = (undefined8 *)GetVarInfo(this,iVar4);
    uVar2 = AsmType::IsA((AsmType *)*puVar1,(AsmType *)0x3);
    if ((uVar2 & 1) == 0) {
      iVar4 = *(int *)(this + 0x10);
      goto LAB_014889f4;
    }
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(this + 0x108) <= uVar2) {
      pAVar3 = (AsmType *)ConditionalExpression(this);
      if (this[0x1e4] != (AsmJsParser)0x0) {
        return (AsmType *)0x0;
      }
      if (*(int *)(this + 0x10) != 0x3d) {
        return pAVar3;
      }
      if (this[0x200] == (AsmJsParser)0x0) {
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Invalid assignment target";
        goto LAB_01488ac0;
      }
      pAVar7 = *(AsmType **)(this + 0x208);
      this[0x200] = (AsmJsParser)0x0;
      AsmJsScanner::Next(this_00);
      uVar2 = GetCurrentStackPosition();
      if (*(ulong *)(this + 0x108) <= uVar2) {
        this_01 = (AsmType *)AssignmentExpression(this);
        if (this[0x1e4] != (AsmJsParser)0x0) {
          return (AsmType *)0x0;
        }
        uVar2 = AsmType::IsA(this_01,pAVar3);
        if ((uVar2 & 1) != 0) {
          uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x400003);
          pAVar3 = this_01;
          if (((uVar2 & 1) != 0) &&
             (uVar2 = AsmType::IsA(this_01,(AsmType *)0x4d), (uVar2 & 1) != 0)) {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xb6);
            pAVar3 = (AsmType *)0x600d;
          }
          uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x800003);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = AsmType::IsA(this_01,(AsmType *)0x600d), (uVar2 & 1) != 0)) {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xbb);
            pAVar3 = (AsmType *)0x4d;
          }
          uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x20003);
          if (((uVar2 & 1) != 0) ||
             (uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x10003), (uVar2 & 1) != 0)) {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xde);
            return pAVar3;
          }
          uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x80003);
          if (((uVar2 & 1) != 0) ||
             (uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x40003), (uVar2 & 1) != 0)) {
            WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xdf);
            return pAVar3;
          }
          uVar2 = AsmType::IsA(pAVar7,(AsmType *)((long)&__DT_SYMTAB[0x3a3b].st_size + 3));
          if (((uVar2 & 1) == 0) &&
             (uVar2 = AsmType::IsA(pAVar7,(AsmType *)(Elf64_Ehdr_00100000.e_ident_magic_str + 2)),
             (uVar2 & 1) == 0)) {
            uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x400003);
            if ((uVar2 & 1) != 0) {
              WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xe1);
              return pAVar3;
            }
            uVar2 = AsmType::IsA(pAVar7,(AsmType *)0x800003);
            if ((uVar2 & 1) != 0) {
              WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xe2);
              return pAVar3;
            }
            return pAVar3;
          }
          WasmFunctionBuilder::Emit(*(WasmFunctionBuilder **)(this + 0xf8),0xe0);
          return pAVar3;
        }
        uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
        this[0x1e4] = (AsmJsParser)0x1;
        pcVar5 = "Illegal type stored to heap view";
        goto LAB_01488ac0;
      }
    }
  }
LAB_01488aa8:
  uVar6 = (undefined4)*(undefined8 *)(this + 0x20);
  this[0x1e4] = (AsmJsParser)0x1;
  pcVar5 = "Stack overflow while parsing asm.js module.";
LAB_01488ac0:
  *(char **)(this + 0x1e8) = pcVar5;
  *(undefined4 *)(this + 0x1f0) = uVar6;
  return (AsmType *)0x0;
}

