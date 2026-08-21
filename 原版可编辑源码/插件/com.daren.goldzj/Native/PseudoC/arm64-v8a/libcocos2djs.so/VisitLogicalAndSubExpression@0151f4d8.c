
/* v8::internal::interpreter::BytecodeGenerator::VisitLogicalAndSubExpression(v8::internal::Expression*,
   v8::internal::interpreter::BytecodeLabels*, int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitLogicalAndSubExpression
          (BytecodeGenerator *this,Expression *param_1,BytecodeLabels *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar4 = Expression::ToBooleanIsFalse(param_1);
  if ((uVar4 & 1) == 0) {
    uVar4 = Expression::ToBooleanIsTrue(param_1);
    if ((uVar4 & 1) == 0) {
      local_68 = *(undefined8 *)(this + 0x300);
      local_58 = *(int *)(this + 0x118);
      local_50 = 2;
      *(undefined8 **)(this + 0x300) = &local_68;
      pBStack_60 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar4 = GetCurrentStackPosition();
        if (uVar4 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,(AstNode *)param_1);
        }
      }
      iVar3 = local_50._4_4_;
      *(undefined8 *)(pBStack_60 + 0x300) = local_68;
      plVar5 = *(long **)(pBStack_60 + 0x120);
      iVar1 = *(int *)(pBStack_60 + 0x118);
      *(int *)(pBStack_60 + 0x118) = local_58;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_58,local_58));
      }
      uVar6 = BytecodeLabels::New(param_2);
      BytecodeArrayBuilder::JumpIfFalse((BytecodeArrayBuilder *)(this + 0x18),iVar3 == 1,uVar6);
    }
    uVar6 = 0;
    if ((param_3 != -1) && (*(long *)(this + 0x208) != 0)) {
      BytecodeArrayBuilder::IncBlockCounter
                (*(BytecodeArrayBuilder **)(*(long *)(this + 0x208) + 0x20),param_3);
      uVar6 = 0;
    }
  }
  else {
    local_68 = *(undefined8 *)(this + 0x300);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(undefined8 **)(this + 0x300) = &local_68;
    pBStack_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)param_1);
      }
    }
    *(undefined8 *)(pBStack_60 + 0x300) = local_68;
    plVar5 = *(long **)(pBStack_60 + 0x120);
    iVar1 = *(int *)(pBStack_60 + 0x118);
    *(int *)(pBStack_60 + 0x118) = local_58;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_58,local_58));
    }
    BytecodeLabels::Bind(param_2,(BytecodeArrayBuilder *)(this + 0x18));
    uVar6 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

