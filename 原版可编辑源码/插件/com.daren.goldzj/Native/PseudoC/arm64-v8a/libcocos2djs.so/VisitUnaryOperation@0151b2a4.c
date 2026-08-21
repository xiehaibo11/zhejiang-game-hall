
/* v8::internal::interpreter::BytecodeGenerator::VisitUnaryOperation(v8::internal::UnaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitUnaryOperation
          (BytecodeGenerator *this,UnaryOperation *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  AstNode *pAVar7;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  switch(*(uint *)(param_1 + 4) >> 7 & 0x7f) {
  case 0x2c:
  case 0x2d:
  case 0x2f:
    local_58 = *(undefined8 *)(this + 0x300);
    pAVar7 = *(AstNode **)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 2;
    *(undefined8 **)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar7);
      }
    }
    *(undefined8 *)(pBStack_50 + 0x300) = local_58;
    plVar6 = *(long **)(pBStack_50 + 0x120);
    iVar2 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar2 - local_48,local_48));
    }
    iVar2 = *(int *)param_1;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    uVar1 = *(uint *)(param_1 + 4);
    uVar5 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),0xf);
    BytecodeArrayBuilder::UnaryOperation
              ((BytecodeArrayBuilder *)(this + 0x18),uVar1 >> 7 & 0x7f,uVar5);
    break;
  case 0x2e:
    VisitNot((UnaryOperation *)this);
    break;
  case 0x30:
    VisitDelete(this,param_1);
    break;
  case 0x31:
    VisitForTypeOfValue(this,*(Expression **)(param_1 + 8));
    BytecodeArrayBuilder::TypeOf((BytecodeArrayBuilder *)(this + 0x18));
    break;
  case 0x32:
    local_58 = *(undefined8 *)(this + 0x300);
    pAVar7 = *(AstNode **)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 1;
    *(undefined8 **)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar7);
      }
    }
    *(undefined8 *)(pBStack_50 + 0x300) = local_58;
    plVar6 = *(long **)(pBStack_50 + 0x120);
    iVar2 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar2 - local_48,local_48));
    }
    BytecodeArrayBuilder::LoadUndefined((BytecodeArrayBuilder *)(this + 0x18));
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

