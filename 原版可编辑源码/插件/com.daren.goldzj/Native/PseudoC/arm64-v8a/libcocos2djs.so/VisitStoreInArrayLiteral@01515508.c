
/* v8::internal::interpreter::BytecodeGenerator::VisitStoreInArrayLiteral(v8::internal::StoreInArrayLiteral*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitStoreInArrayLiteral
          (BytecodeGenerator *this,StoreInArrayLiteral *param_1)

{
  BytecodeArrayBuilder *pBVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  AstNode *pAVar10;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar8 = *(int *)param_1;
  if (iVar8 != -1) {
    this[0x1c0] = (BytecodeGenerator)0x2;
    *(int *)(this + 0x1c4) = iVar8;
  }
  iVar2 = *(int *)(this + 0x118);
  iVar9 = *(int *)(this + 0x11c);
  plVar4 = *(long **)(this + 0x120);
  iVar8 = iVar2 + 1;
  if (iVar9 <= iVar8) {
    iVar9 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar8;
  *(int *)(this + 0x11c) = iVar9;
  plVar5 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,iVar2);
    iVar8 = *(int *)(this + 0x118);
    iVar9 = *(int *)(this + 0x11c);
    plVar5 = *(long **)(this + 0x120);
  }
  local_68 = iVar8 + 1;
  pBVar1 = (BytecodeArrayBuilder *)(this + 0x18);
  if (iVar9 <= local_68) {
    iVar9 = iVar8 + 1;
  }
  *(int *)(this + 0x118) = local_68;
  *(int *)(this + 0x11c) = iVar9;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,iVar8);
    local_68 = *(int *)(this + 0x118);
  }
  local_78 = *(undefined8 *)(this + 0x300);
  pAVar10 = *(AstNode **)(param_1 + 8);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar10);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar2);
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar4 = *(long **)(pBStack_70 + 0x120);
  iVar9 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar9 - local_68,local_68));
  }
  local_78 = *(undefined8 *)(this + 0x300);
  pAVar10 = *(AstNode **)(param_1 + 0x10);
  local_68 = *(int *)(this + 0x118);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar10);
    }
  }
  BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar1,iVar8);
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar4 = *(long **)(pBStack_70 + 0x120);
  iVar9 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar9 - local_68,local_68));
  }
  local_78 = *(undefined8 *)(this + 0x300);
  pAVar10 = *(AstNode **)(param_1 + 0x18);
  local_68 = *(int *)(this + 0x118);
  local_60 = 2;
  *(undefined8 **)(this + 0x300) = &local_78;
  pBStack_70 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar10);
    }
  }
  *(undefined8 *)(pBStack_70 + 0x300) = local_78;
  plVar4 = *(long **)(pBStack_70 + 0x120);
  iVar9 = *(int *)(pBStack_70 + 0x118);
  *(int *)(pBStack_70 + 0x118) = local_68;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar9 - local_68,local_68));
  }
  uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xe);
  BytecodeArrayBuilder::StoreInArrayLiteral(pBVar1,iVar2,iVar8,uVar7);
  plVar4 = *(long **)(this + 0x120);
  iVar8 = *(int *)(this + 0x118);
  *(int *)(this + 0x118) = iVar2;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar8 - iVar2,iVar2));
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

