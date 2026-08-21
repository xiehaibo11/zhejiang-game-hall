
/* v8::internal::interpreter::BytecodeGenerator::VisitDelete(v8::internal::UnaryOperation*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitDelete
          (BytecodeGenerator *this,UnaryOperation *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  BytecodeArrayBuilder *pBVar8;
  long *plVar9;
  BytecodeLabel *pBVar10;
  BytecodeLabels *pBVar11;
  AstNode *pAVar12;
  long lVar13;
  BytecodeLabel local_c0 [8];
  undefined8 local_b8;
  BytecodeGenerator *local_b0;
  BytecodeLabels *local_a8;
  BytecodeLabels *local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pAVar12 = *(AstNode **)(param_1 + 8);
  uVar1 = *(uint *)(pAVar12 + 4) & 0x3f;
  if (uVar1 == 0x2b) {
    lVar13 = *(long *)(pAVar12 + 8);
    if ((*(uint *)(lVar13 + 4) & 0x3f) == 0x2c) {
      local_c0[0] = (BytecodeLabel)0x0;
      local_b8 = 0xffffffffffffffff;
      uStack_90 = *(undefined8 *)(this + 0x10);
      local_88 = 0;
      local_98 = 0;
      local_80 = *(undefined8 *)(this + 0x310);
      local_78 = *(undefined8 *)(this + 0x300);
      *(BytecodeLabels **)(this + 0x310) = (BytecodeLabels *)&local_a8;
      pAVar12 = *(AstNode **)(lVar13 + 8);
      local_68 = *(int *)(this + 0x118);
      local_60 = 2;
      *(undefined8 **)(this + 0x300) = &local_78;
      local_b0 = this;
      local_a8 = (BytecodeLabels *)&local_a8;
      local_a0 = (BytecodeLabels *)&local_a8;
      pBStack_70 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar7 = GetCurrentStackPosition();
        if (uVar7 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar12);
        }
      }
      *(undefined8 *)(pBStack_70 + 0x300) = local_78;
      plVar9 = *(long **)(pBStack_70 + 0x120);
      iVar3 = *(int *)(pBStack_70 + 0x118);
      *(int *)(pBStack_70 + 0x118) = local_68;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_68,local_68));
      }
      if (*(char *)(lVar13 + 4) < '\0') {
        pBVar10 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)&local_a8);
        BytecodeArrayBuilder::JumpIfUndefinedOrNull((BytecodeArrayBuilder *)(this + 0x18),pBVar10);
      }
      iVar2 = *(int *)(this + 0x118);
      iVar3 = *(int *)(this + 0x11c);
      plVar9 = *(long **)(this + 0x120);
      if (iVar3 <= iVar2 + 1) {
        iVar3 = iVar2 + 1;
      }
      *(int *)(this + 0x118) = iVar2 + 1;
      *(int *)(this + 0x11c) = iVar3;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,iVar2);
      }
      pBVar8 = (BytecodeArrayBuilder *)(this + 0x18);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar2);
      local_78 = *(undefined8 *)(this + 0x300);
      pAVar12 = *(AstNode **)(lVar13 + 0x10);
      local_68 = *(int *)(this + 0x118);
      local_60 = 2;
      *(undefined8 **)(this + 0x300) = &local_78;
      pBStack_70 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar7 = GetCurrentStackPosition();
        if (uVar7 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar12);
        }
      }
      *(undefined8 *)(pBStack_70 + 0x300) = local_78;
      plVar9 = *(long **)(pBStack_70 + 0x120);
      iVar3 = *(int *)(pBStack_70 + 0x118);
      *(int *)(pBStack_70 + 0x118) = local_68;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - local_68,local_68));
      }
      BytecodeArrayBuilder::Delete(pBVar8,iVar2,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
      BytecodeArrayBuilder::Jump(pBVar8,local_c0);
      BytecodeLabels::Bind((BytecodeLabels *)&local_a8,pBVar8);
      BytecodeArrayBuilder::LoadTrue(pBVar8);
      BytecodeArrayBuilder::Bind(pBVar8,local_c0);
      *(undefined8 *)(local_b0 + 0x310) = local_80;
      if (local_98 != 0) {
        *(undefined8 *)(*(long *)local_a0 + 8) = *(undefined8 *)(local_a8 + 8);
        **(undefined8 **)(local_a8 + 8) = *(undefined8 *)local_a0;
        local_98 = 0;
        for (pBVar11 = local_a0; pBVar11 != (BytecodeLabels *)&local_a8;
            pBVar11 = *(BytecodeLabels **)(pBVar11 + 8)) {
        }
      }
      goto LAB_0151b77c;
    }
  }
  else if (uVar1 == 0x35) {
    if ((*(uint *)(pAVar12 + 4) >> 10 & 1) == 0) {
      lVar13 = *(long *)(pAVar12 + 8);
      uVar5 = *(ushort *)(lVar13 + 0x28) >> 7;
      uVar1 = uVar5 & 7;
      if (uVar1 - 1 < 3) {
        BytecodeArrayBuilder::LoadFalse((BytecodeArrayBuilder *)(this + 0x18));
      }
      else {
        if (((uVar5 & 7) != 0) && (uVar1 != 4)) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        iVar2 = *(int *)(this + 0x118);
        iVar3 = *(int *)(this + 0x11c);
        plVar9 = *(long **)(this + 0x120);
        if (iVar3 <= iVar2 + 1) {
          iVar3 = iVar2 + 1;
        }
        *(int *)(this + 0x118) = iVar2 + 1;
        *(int *)(this + 0x11c) = iVar3;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,iVar2);
        }
        pBVar8 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::LoadLiteral
                           ((BytecodeArrayBuilder *)(this + 0x18),*(AstRawString **)(lVar13 + 8));
        pBVar8 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar8,iVar2);
        BytecodeArrayBuilder::CallRuntime(pBVar8,0x12f,iVar2);
      }
      goto LAB_0151b77c;
    }
  }
  else if (uVar1 == 0x2c) {
    uVar6 = VisitForRegisterValue(this,*(Expression **)(pAVar12 + 8));
    local_b0 = *(BytecodeGenerator **)(this + 0x300);
    pAVar12 = *(AstNode **)(pAVar12 + 0x10);
    local_98 = 2;
    local_a0 = (BytecodeLabels *)CONCAT44(local_a0._4_4_,*(undefined4 *)(this + 0x118));
    *(BytecodeGenerator ***)(this + 0x300) = &local_b0;
    local_a8 = (BytecodeLabels *)this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar12);
      }
    }
    *(BytecodeGenerator **)(local_a8 + 0x300) = local_b0;
    plVar9 = *(long **)(local_a8 + 0x120);
    iVar3 = *(int *)(local_a8 + 0x118);
    *(int *)(local_a8 + 0x118) = (int)local_a0;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - (int)local_a0,(int)local_a0));
    }
    BytecodeArrayBuilder::Delete
              ((BytecodeArrayBuilder *)(this + 0x18),uVar6,
               *(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
    goto LAB_0151b77c;
  }
  local_b0 = *(BytecodeGenerator **)(this + 0x300);
  local_98 = 1;
  local_a0 = (BytecodeLabels *)CONCAT44(local_a0._4_4_,*(undefined4 *)(this + 0x118));
  *(BytecodeGenerator ***)(this + 0x300) = &local_b0;
  local_a8 = (BytecodeLabels *)this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar7 = GetCurrentStackPosition();
    if (uVar7 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar12);
    }
  }
  *(BytecodeGenerator **)(local_a8 + 0x300) = local_b0;
  plVar9 = *(long **)(local_a8 + 0x120);
  iVar3 = *(int *)(local_a8 + 0x118);
  *(int *)(local_a8 + 0x118) = (int)local_a0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - (int)local_a0,(int)local_a0));
  }
  BytecodeArrayBuilder::LoadTrue((BytecodeArrayBuilder *)(this + 0x18));
LAB_0151b77c:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

