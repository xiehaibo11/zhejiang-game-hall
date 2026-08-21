
/* v8::internal::interpreter::BytecodeGenerator::VisitPropertyLoad(v8::internal::interpreter::Register,
   v8::internal::Property*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitPropertyLoad
          (BytecodeGenerator *this,undefined4 param_2,Property *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  BytecodeArrayBuilder *this_00;
  BytecodeLabel *pBVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  AstRawString *pAVar9;
  AstNode *pAVar10;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((char)param_3[4] < '\0') {
    this_00 = (BytecodeArrayBuilder *)
              BytecodeArrayBuilder::LoadAccumulatorWithRegister
                        ((BytecodeArrayBuilder *)(this + 0x18),param_2);
    pBVar5 = (BytecodeLabel *)BytecodeLabels::New(*(BytecodeLabels **)(this + 0x310));
    BytecodeArrayBuilder::JumpIfUndefinedOrNull(this_00,pBVar5);
  }
  uVar4 = Property::GetAssignType(param_3);
  switch(uVar4) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    iVar2 = *(int *)param_3;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    lVar1 = *(long *)(param_3 + 0x10);
    if ((*(uint *)(lVar1 + 4) & 0x3f) != 0x29) {
      lVar1 = 0;
    }
    pAVar9 = *(AstRawString **)(lVar1 + 8);
    if (((FLAG_enable_one_shot_optimization == '\0') || (0 < *(int *)(this + 0x334))) ||
       ((*(int *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 0x1c) != 0 &&
        ((*(byte *)(*(long *)(*(long *)(this + 0x1d0) + 0x10) + 6) >> 6 & 1) == 0)))) {
      uVar7 = GetCachedLoadICSlot(this,*(Expression **)(param_3 + 8),pAVar9);
      BytecodeArrayBuilder::LoadNamedProperty
                ((BytecodeArrayBuilder *)(this + 0x18),param_2,pAVar9,uVar7);
    }
    else {
      BytecodeArrayBuilder::LoadNamedPropertyNoFeedback
                ((BytecodeArrayBuilder *)(this + 0x18),param_2,pAVar9);
    }
    break;
  case 2:
    local_68 = *(undefined8 *)(this + 0x300);
    pAVar10 = *(AstNode **)(param_3 + 0x10);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    pBStack_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar10);
      }
    }
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar8 = *(long **)(pBStack_60 + 0x120);
    iVar2 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar2 - local_58,local_58));
    }
    iVar2 = *(int *)param_3;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    uVar7 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),8);
    BytecodeArrayBuilder::LoadKeyedProperty((BytecodeArrayBuilder *)(this + 0x18),param_2,uVar7);
    break;
  case 3:
    VisitNamedSuperPropertyLoad(this,param_3,0x7fffffff);
    break;
  case 4:
    VisitKeyedSuperPropertyLoad(this,param_3,0x7fffffff);
    break;
  case 5:
    BuildPrivateBrandCheck(this,param_3,param_2,0x104);
    local_68 = *(undefined8 *)(this + 0x300);
    pAVar10 = *(AstNode **)(param_3 + 0x10);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    pBStack_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar6 = GetCurrentStackPosition();
      if (uVar6 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar10);
      }
    }
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar8 = *(long **)(pBStack_60 + 0x120);
    iVar2 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8,CONCAT44(iVar2 - local_58,local_58));
    }
    break;
  case 6:
  case 8:
    uVar4 = VisitForRegisterValue(this,*(Expression **)(param_3 + 0x10));
    BuildPrivateBrandCheck(this,param_3,param_2,0x104);
    BuildPrivateGetterAccess(this,param_2,uVar4);
    break;
  case 7:
    BuildInvalidPropertyAccess(this,0x107,param_3);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

