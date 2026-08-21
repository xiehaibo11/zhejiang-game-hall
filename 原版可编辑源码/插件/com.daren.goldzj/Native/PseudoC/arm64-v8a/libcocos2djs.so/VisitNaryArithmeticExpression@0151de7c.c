
/* v8::internal::interpreter::BytecodeGenerator::VisitNaryArithmeticExpression(v8::internal::NaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNaryArithmeticExpression
          (BytecodeGenerator *this,NaryOperation *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  AstNode *pAVar13;
  int iVar14;
  long lVar15;
  undefined8 local_98;
  BytecodeGenerator *pBStack_90;
  int local_88;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  local_98 = *(undefined8 *)(this + 0x300);
  pAVar13 = *(AstNode **)(param_1 + 8);
  local_88 = *(int *)(this + 0x118);
  local_80 = 2;
  *(undefined8 **)(this + 0x300) = &local_98;
  pBStack_90 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar8 = GetCurrentStackPosition();
    if (uVar8 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar13);
    }
  }
  iVar14 = local_80._4_4_;
  *(undefined8 *)(pBStack_90 + 0x300) = local_98;
  plVar9 = *(long **)(pBStack_90 + 0x120);
  iVar2 = *(int *)(pBStack_90 + 0x118);
  *(int *)(pBStack_90 + 0x118) = local_88;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar2 - local_88,local_88));
  }
  lVar12 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != lVar12) {
    lVar15 = 0;
    uVar8 = 0;
    pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
    do {
      iVar2 = *(int *)(this + 0x118);
      uVar10 = Expression::IsSmiLiteral(*(Expression **)(lVar12 + lVar15));
      if ((uVar10 & 1) == 0) {
        iVar5 = *(int *)(this + 0x118);
        iVar3 = *(int *)(this + 0x11c);
        plVar9 = *(long **)(this + 0x120);
        if (iVar3 <= iVar5 + 1) {
          iVar3 = iVar5 + 1;
        }
        *(int *)(this + 0x118) = iVar5 + 1;
        *(int *)(this + 0x11c) = iVar3;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,iVar5);
        }
        BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar5);
        local_98 = *(undefined8 *)(this + 0x300);
        pAVar13 = *(AstNode **)(*(long *)(param_1 + 0x10) + lVar15);
        local_88 = *(int *)(this + 0x118);
        local_80 = 2;
        *(undefined8 **)(this + 0x300) = &local_98;
        pBStack_90 = this;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar10 = GetCurrentStackPosition();
          if (uVar10 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar13);
          }
        }
        iVar3 = local_80._4_4_;
        *(undefined8 *)(pBStack_90 + 0x300) = local_98;
        plVar9 = *(long **)(pBStack_90 + 0x120);
        iVar6 = *(int *)(pBStack_90 + 0x118);
        *(int *)(pBStack_90 + 0x118) = local_88;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar6 - local_88,local_88));
        }
        if (iVar3 != 2) {
          iVar3 = iVar14;
        }
        iVar14 = *(int *)(*(long *)(param_1 + 0x10) + lVar15 + 8);
        if ((iVar14 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
          this[0x1c0] = (BytecodeGenerator)0x1;
          *(int *)(this + 0x1c4) = iVar14;
        }
        uVar4 = *(uint *)(param_1 + 4);
        uVar11 = FeedbackVectorSpec::AddSlot
                           ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
        BytecodeArrayBuilder::BinaryOperation(pBVar1,uVar4 >> 7 & 0x7f,iVar5,uVar11);
        iVar14 = iVar3;
      }
      else {
        lVar12 = *(long *)(param_1 + 0x10);
        iVar3 = *(int *)(lVar12 + lVar15 + 8);
        if ((iVar3 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
          this[0x1c0] = (BytecodeGenerator)0x1;
          *(int *)(this + 0x1c4) = iVar3;
          lVar12 = *(long *)(param_1 + 0x10);
        }
        lVar12 = *(long *)(lVar12 + lVar15);
        uVar4 = *(uint *)(param_1 + 4);
        if ((*(uint *)(lVar12 + 4) & 0x3f) != 0x29) {
          lVar12 = 0;
        }
        iVar3 = *(int *)(lVar12 + 8);
        uVar11 = FeedbackVectorSpec::AddSlot
                           ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
        BytecodeArrayBuilder::BinaryOperationSmiLiteral
                  (pBVar1,uVar4 >> 7 & 0x7f,(long)iVar3 << 1,uVar11);
      }
      plVar9 = *(long **)(this + 0x120);
      iVar3 = *(int *)(this + 0x118);
      *(int *)(this + 0x118) = iVar2;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x20))(plVar9,CONCAT44(iVar3 - iVar2,iVar2));
      }
      lVar12 = *(long *)(param_1 + 0x10);
      uVar8 = uVar8 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar8 < (ulong)(*(long *)(param_1 + 0x18) - lVar12 >> 4));
  }
  if ((iVar14 == 2) && ((*(uint *)(param_1 + 4) & 0x3f80) == 0x1600)) {
    *(undefined4 *)(*(long *)(this + 0x300) + 0x1c) = 2;
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

