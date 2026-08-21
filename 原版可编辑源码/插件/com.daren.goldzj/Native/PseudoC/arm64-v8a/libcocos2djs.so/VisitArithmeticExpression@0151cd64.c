
/* v8::internal::interpreter::BytecodeGenerator::VisitArithmeticExpression(v8::internal::BinaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitArithmeticExpression
          (BytecodeGenerator *this,BinaryOperation *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  AstNode *pAVar9;
  undefined8 local_98;
  AstNode *local_90;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar6 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
  local_98 = 0;
  uVar7 = BinaryOperation::IsSmiLiteralOperation(param_1,(Expression **)&local_90,(Smi *)&local_98);
  pBStack_80 = this;
  if ((uVar7 & 1) == 0) {
    local_88 = *(undefined8 *)(this + 0x300);
    pAVar9 = *(AstNode **)(param_1 + 8);
    local_78 = *(int *)(this + 0x118);
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar9);
      }
    }
    iVar4 = local_70._4_4_;
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar8 = *(long **)(pBStack_80 + 0x120);
    iVar1 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - local_78,local_78));
    }
    iVar2 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar8 = *(long **)(this + 0x120);
    if (iVar1 <= iVar2 + 1) {
      iVar1 = iVar2 + 1;
    }
    *(int *)(this + 0x118) = iVar2 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,iVar2);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    local_88 = *(undefined8 *)(this + 0x300);
    pAVar9 = *(AstNode **)(param_1 + 0x10);
    local_78 = *(int *)(this + 0x118);
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    pBStack_80 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar9);
      }
    }
    iVar5 = local_70._4_4_;
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar8 = *(long **)(pBStack_80 + 0x120);
    iVar1 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - local_78,local_78));
    }
    if (((*(uint *)(param_1 + 4) & 0x3f80) == 0x1600) && ((iVar4 == 2 || (iVar5 == 2)))) {
      *(undefined4 *)(*(long *)(this + 0x300) + 0x1c) = 2;
    }
    iVar1 = *(int *)param_1;
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    BytecodeArrayBuilder::BinaryOperation
              ((BytecodeArrayBuilder *)(this + 0x18),*(uint *)(param_1 + 4) >> 7 & 0x7f,iVar2,uVar6)
    ;
  }
  else {
    local_88 = *(undefined8 *)(this + 0x300);
    local_78 = *(int *)(this + 0x118);
    local_70 = 2;
    *(undefined8 **)(this + 0x300) = &local_88;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar7 = GetCurrentStackPosition();
      if (uVar7 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,local_90);
      }
    }
    iVar4 = local_70._4_4_;
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar8 = *(long **)(pBStack_80 + 0x120);
    iVar1 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar1 - local_78,local_78));
    }
    iVar1 = *(int *)param_1;
    if ((iVar1 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar1;
    }
    BytecodeArrayBuilder::BinaryOperationSmiLiteral
              ((BytecodeArrayBuilder *)(this + 0x18),*(uint *)(param_1 + 4) >> 7 & 0x7f,local_98,
               uVar6);
    if ((iVar4 == 2) && ((*(uint *)(param_1 + 4) & 0x3f80) == 0x1600)) {
      *(undefined4 *)(*(long *)(this + 0x300) + 0x1c) = 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

