
/* v8::internal::interpreter::BytecodeGenerator::VisitCompareOperation(v8::internal::CompareOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCompareOperation
          (BytecodeGenerator *this,CompareOperation *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  FeedbackVectorSpec *pFVar7;
  undefined8 uVar8;
  AstNode *pAVar9;
  Literal *local_78;
  Expression *local_70;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = CompareOperation::IsLiteralCompareTypeof(param_1,&local_70,&local_78);
  if ((uVar5 & 1) != 0) {
    VisitForTypeOfValue(this,local_70);
    iVar1 = *(int *)param_1;
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    uVar3 = TestTypeOfFlags::GetFlagForLiteral(*(AstStringConstants **)(this + 0x1d8),local_78);
    if ((uVar3 & 0xff) == 8) {
      BytecodeArrayBuilder::LoadFalse((BytecodeArrayBuilder *)(this + 0x18));
    }
    else {
      BytecodeArrayBuilder::CompareTypeOf((BytecodeArrayBuilder *)(this + 0x18),uVar3);
    }
    goto LAB_0151e628;
  }
  uVar5 = CompareOperation::IsLiteralCompareUndefined(param_1,&local_70);
  pBStack_60 = this;
  if ((uVar5 & 1) == 0) {
    uVar5 = CompareOperation::IsLiteralCompareNull(param_1,&local_70);
    if ((uVar5 & 1) == 0) {
      uVar4 = VisitForRegisterValue(this,*(Expression **)(param_1 + 8));
      local_68 = *(undefined8 *)(this + 0x300);
      pAVar9 = *(AstNode **)(param_1 + 0x10);
      local_58 = *(int *)(this + 0x118);
      local_50 = 2;
      *(undefined8 **)(this + 0x300) = &local_68;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar5 = GetCurrentStackPosition();
        if (uVar5 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,pAVar9);
        }
      }
      *(undefined8 *)(pBStack_60 + 0x300) = local_68;
      plVar6 = *(long **)(pBStack_60 + 0x120);
      iVar1 = *(int *)(pBStack_60 + 0x118);
      *(int *)(pBStack_60 + 0x118) = local_58;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_58,local_58));
      }
      iVar1 = *(int *)param_1;
      if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
        this[0x1c0] = (BytecodeGenerator)0x1;
        *(int *)(this + 0x1c4) = iVar1;
      }
      uVar3 = *(uint *)(param_1 + 4) >> 7 & 0x7f;
      if (uVar3 == 0x3e) {
        uVar8 = 9;
        pFVar7 = (FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38);
LAB_0151e5fc:
        uVar5 = FeedbackVectorSpec::AddSlot(pFVar7,uVar8);
        uVar5 = uVar5 & 0xffffffff;
      }
      else {
        pFVar7 = (FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38);
        if (uVar3 == 0x3d) {
          uVar8 = 0x15;
          goto LAB_0151e5fc;
        }
        uVar5 = FeedbackVectorSpec::AddSlot(pFVar7,0x10);
      }
      BytecodeArrayBuilder::CompareOperation
                ((BytecodeArrayBuilder *)(this + 0x18),*(uint *)(param_1 + 4) >> 7 & 0x7f,uVar4,
                 uVar5);
      goto LAB_0151e628;
    }
    local_68 = *(undefined8 *)(this + 0x300);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar5 = GetCurrentStackPosition();
      if (uVar5 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)local_70);
      }
    }
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar6 = *(long **)(pBStack_60 + 0x120);
    iVar1 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_58,local_58));
    }
    iVar1 = *(int *)param_1;
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    uVar3 = *(uint *)(param_1 + 4);
    uVar8 = 0;
  }
  else {
    local_68 = *(undefined8 *)(this + 0x300);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar5 = GetCurrentStackPosition();
      if (uVar5 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)local_70);
      }
    }
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar6 = *(long **)(pBStack_60 + 0x120);
    iVar1 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar1 - local_58,local_58));
    }
    iVar1 = *(int *)param_1;
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    uVar3 = *(uint *)(param_1 + 4);
    uVar8 = 1;
  }
  BuildLiteralCompareNil(this,uVar3 >> 7 & 0x7f,uVar8);
LAB_0151e628:
  *(undefined4 *)(*(long *)(this + 0x300) + 0x1c) = 1;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

