
/* v8::internal::interpreter::BytecodeGenerator::VisitCompoundAssignment(v8::internal::CompoundAssignment*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitCompoundAssignment
          (BytecodeGenerator *this,CompoundAssignment *param_1)

{
  CompoundAssignment *pCVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  BytecodeArrayBuilder *pBVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  AstNode *pAVar11;
  long lVar12;
  undefined4 local_a8 [4];
  uint local_98;
  undefined4 local_90;
  undefined4 local_8c;
  Expression *local_88;
  AstRawString *pAStack_80;
  undefined8 local_78;
  BytecodeGenerator *pBStack_70;
  int local_68;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  PrepareAssignmentLhs(local_a8,this,*(undefined8 *)(param_1 + 8),0);
  switch(local_a8[0]) {
  case 0:
    lVar12 = *(long *)(param_1 + 8);
    if ((*(uint *)(lVar12 + 4) & 0x3f) != 0x35) {
      lVar12 = 0;
    }
    BuildVariableLoad(this,*(undefined8 *)(lVar12 + 8),*(uint *)(lVar12 + 4) >> 0xb & 1,1);
    break;
  case 1:
    if (((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) ||
       ((*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) != 0 &&
        ((*(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1) == 0)))) {
      uVar9 = GetCachedLoadICSlot(this,local_88,pAStack_80);
      BytecodeArrayBuilder::LoadNamedProperty
                ((BytecodeArrayBuilder *)(this + 0x18),local_90,pAStack_80,uVar9);
    }
    else {
      BytecodeArrayBuilder::LoadNamedPropertyNoFeedback
                ((BytecodeArrayBuilder *)(this + 0x18),local_90,pAStack_80);
    }
    break;
  case 2:
    uVar5 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),8);
    pBVar6 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::LoadAccumulatorWithRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),local_8c);
    BytecodeArrayBuilder::LoadKeyedProperty(pBVar6,local_90,uVar5);
    break;
  case 3:
    uVar9 = 0x24;
    goto LAB_0151766c;
  case 4:
    uVar9 = 0x25;
LAB_0151766c:
    BytecodeArrayBuilder::CallRuntime
              ((BytecodeArrayBuilder *)(this + 0x18),uVar9,(ulong)local_98 | 0x300000000);
    break;
  case 5:
  case 6:
  case 7:
  case 8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  pCVar1 = param_1;
  if ((*(uint *)(param_1 + 4) & 0x3f) != 0x21) {
    pCVar1 = (CompoundAssignment *)0x0;
  }
  lVar12 = *(long *)(pCVar1 + 0x18);
  uVar5 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
  uVar7 = Expression::IsSmiLiteral(*(Expression **)(param_1 + 0x10));
  if ((uVar7 & 1) == 0) {
    iVar2 = *(int *)(this + 0x118);
    iVar3 = *(int *)(this + 0x11c);
    plVar8 = *(long **)(this + 0x120);
    if (iVar3 <= iVar2 + 1) {
      iVar3 = iVar2 + 1;
    }
    *(int *)(this + 0x118) = iVar2 + 1;
    *(int *)(this + 0x11c) = iVar3;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,iVar2);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
    local_78 = *(undefined8 *)(this + 0x300);
    pAVar11 = *(AstNode **)(param_1 + 0x10);
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
        VisitNoStackOverflowCheck(this,pAVar11);
      }
    }
    *(undefined8 *)(pBStack_70 + 0x300) = local_78;
    plVar8 = *(long **)(pBStack_70 + 0x120);
    iVar3 = *(int *)(pBStack_70 + 0x118);
    *(int *)(pBStack_70 + 0x118) = local_68;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar3 - local_68,local_68));
    }
    BytecodeArrayBuilder::BinaryOperation
              ((BytecodeArrayBuilder *)(this + 0x18),*(uint *)(lVar12 + 4) >> 7 & 0x7f,iVar2,uVar5);
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10);
    if ((*(uint *)(lVar10 + 4) & 0x3f) != 0x29) {
      lVar10 = 0;
    }
    BytecodeArrayBuilder::BinaryOperationSmiLiteral
              ((BytecodeArrayBuilder *)(this + 0x18),*(uint *)(lVar12 + 4) >> 7 & 0x7f,
               (long)*(int *)(lVar10 + 8) << 1,uVar5);
  }
  iVar3 = *(int *)param_1;
  if ((iVar3 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
    this[0x1c0] = (BytecodeGenerator)0x1;
    *(int *)(this + 0x1c4) = iVar3;
  }
  BuildAssignment(this,local_a8,*(uint *)(param_1 + 4) >> 7 & 0x7f,*(uint *)(param_1 + 4) >> 0xe & 1
                 );
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

