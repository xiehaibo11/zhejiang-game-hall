
/* v8::internal::interpreter::BytecodeGenerator::VisitNullishSubExpression(v8::internal::Expression*,
   v8::internal::interpreter::BytecodeLabels*, int) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNullishSubExpression
          (BytecodeGenerator *this,Expression *param_1,BytecodeLabels *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  BytecodeArrayBuilder *this_00;
  BytecodeLabel *pBVar6;
  ulong local_68;
  BytecodeGenerator *local_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = Expression::IsLiteralButNotNullOrUndefined(param_1);
  if ((uVar3 & 1) == 0) {
    uVar3 = Expression::IsNullLiteral(param_1);
    if (((uVar3 & 1) == 0) && (uVar3 = Expression::IsUndefinedLiteral(param_1), (uVar3 & 1) == 0)) {
      local_68 = *(ulong *)(this + 0x300);
      local_58 = *(int *)(this + 0x118);
      local_50 = 2;
      *(ulong **)(this + 0x300) = &local_68;
      local_60 = this;
      if (this[8] == (BytecodeGenerator)0x0) {
        uVar3 = GetCurrentStackPosition();
        if (uVar3 < *(ulong *)this) {
          this[8] = (BytecodeGenerator)0x1;
        }
        else {
          VisitNoStackOverflowCheck(this,(AstNode *)param_1);
        }
      }
      *(ulong *)(local_60 + 0x300) = local_68;
      plVar4 = *(long **)(local_60 + 0x120);
      iVar1 = *(int *)(local_60 + 0x118);
      *(int *)(local_60 + 0x118) = local_58;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_58,local_58));
      }
      local_68 = local_68 & 0xffffffffffffff00;
      local_60 = (BytecodeGenerator *)0xffffffffffffffff;
      this_00 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::JumpIfUndefinedOrNull
                          ((BytecodeArrayBuilder *)(this + 0x18),(BytecodeLabel *)&local_68);
      pBVar6 = (BytecodeLabel *)BytecodeLabels::New(param_2);
      BytecodeArrayBuilder::Jump(this_00,pBVar6);
      BytecodeArrayBuilder::Bind((BytecodeArrayBuilder *)(this + 0x18),(BytecodeLabel *)&local_68);
    }
    uVar5 = 0;
    if ((param_3 != -1) && (*(long *)(this + 0x208) != 0)) {
      BytecodeArrayBuilder::IncBlockCounter
                (*(BytecodeArrayBuilder **)(*(long *)(this + 0x208) + 0x20),param_3);
      uVar5 = 0;
    }
  }
  else {
    local_68 = *(ulong *)(this + 0x300);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(ulong **)(this + 0x300) = &local_68;
    local_60 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)param_1);
      }
    }
    *(ulong *)(local_60 + 0x300) = local_68;
    plVar4 = *(long **)(local_60 + 0x120);
    iVar1 = *(int *)(local_60 + 0x118);
    *(int *)(local_60 + 0x118) = local_58;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_58,local_58));
    }
    BytecodeLabels::Bind(param_2,(BytecodeArrayBuilder *)(this + 0x18));
    uVar5 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

