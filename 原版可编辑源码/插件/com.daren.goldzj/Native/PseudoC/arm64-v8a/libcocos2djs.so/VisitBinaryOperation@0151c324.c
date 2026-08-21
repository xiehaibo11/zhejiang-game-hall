
/* v8::internal::interpreter::BytecodeGenerator::VisitBinaryOperation(v8::internal::BinaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitBinaryOperation
          (BytecodeGenerator *this,BinaryOperation *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  AstNode *pAVar5;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  switch(*(uint *)(param_1 + 4) >> 7 & 0x7f) {
  case 0x1e:
    local_58 = *(undefined8 *)(this + 0x300);
    pAVar5 = *(AstNode **)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 1;
    *(undefined8 **)(this + 0x300) = &local_58;
    pBStack_50 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar5);
      }
    }
    *(undefined8 *)(pBStack_50 + 0x300) = local_58;
    plVar4 = *(long **)(pBStack_50 + 0x120);
    iVar1 = *(int *)(pBStack_50 + 0x118);
    *(int *)(pBStack_50 + 0x118) = local_48;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_48,local_48));
    }
    if (this[8] == (BytecodeGenerator)0x0) {
      pAVar5 = *(AstNode **)(param_1 + 0x10);
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar5);
      }
    }
    break;
  case 0x1f:
    VisitNullishExpression(this,param_1);
    break;
  case 0x20:
    VisitLogicalOrExpression(this,param_1);
    break;
  case 0x21:
    VisitLogicalAndExpression(this,param_1);
    break;
  default:
    VisitArithmeticExpression(this,param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

