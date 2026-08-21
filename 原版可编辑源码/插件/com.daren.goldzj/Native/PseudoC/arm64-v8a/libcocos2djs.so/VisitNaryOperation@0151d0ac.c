
/* v8::internal::interpreter::BytecodeGenerator::VisitNaryOperation(v8::internal::NaryOperation*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNaryOperation
          (BytecodeGenerator *this,NaryOperation *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  AstNode *pAVar7;
  long lVar8;
  undefined8 local_88;
  BytecodeGenerator *pBStack_80;
  int local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  switch(*(uint *)(param_1 + 4) >> 7 & 0x7f) {
  case 0x1e:
    local_88 = *(undefined8 *)(this + 0x300);
    pAVar7 = *(AstNode **)(param_1 + 8);
    local_78 = *(int *)(this + 0x118);
    local_70 = 1;
    *(undefined8 **)(this + 0x300) = &local_88;
    pBStack_80 = this;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar7);
      }
    }
    *(undefined8 *)(pBStack_80 + 0x300) = local_88;
    plVar4 = *(long **)(pBStack_80 + 0x120);
    iVar1 = *(int *)(pBStack_80 + 0x118);
    *(int *)(pBStack_80 + 0x118) = local_78;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_78,local_78));
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) - lVar5 == 0x10) {
      uVar6 = 0;
    }
    else {
      lVar8 = 0;
      uVar3 = 0;
      do {
        local_88 = *(undefined8 *)(this + 0x300);
        pAVar7 = *(AstNode **)(lVar5 + lVar8);
        local_78 = *(int *)(this + 0x118);
        local_70 = 1;
        *(undefined8 **)(this + 0x300) = &local_88;
        pBStack_80 = this;
        if (this[8] == (BytecodeGenerator)0x0) {
          uVar6 = GetCurrentStackPosition();
          if (uVar6 < *(ulong *)this) {
            this[8] = (BytecodeGenerator)0x1;
          }
          else {
            VisitNoStackOverflowCheck(this,pAVar7);
          }
        }
        *(undefined8 *)(pBStack_80 + 0x300) = local_88;
        plVar4 = *(long **)(pBStack_80 + 0x120);
        iVar1 = *(int *)(pBStack_80 + 0x118);
        *(int *)(pBStack_80 + 0x118) = local_78;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x20))(plVar4,CONCAT44(iVar1 - local_78,local_78));
        }
        lVar5 = *(long *)(param_1 + 0x10);
        uVar3 = uVar3 + 1;
        lVar8 = lVar8 + 0x10;
        uVar6 = (*(long *)(param_1 + 0x18) - lVar5 >> 4) - 1;
      } while (uVar3 < uVar6);
    }
    if (this[8] == (BytecodeGenerator)0x0) {
      pAVar7 = *(AstNode **)(lVar5 + uVar6 * 0x10);
      uVar3 = GetCurrentStackPosition();
      if (uVar3 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,pAVar7);
      }
    }
    break;
  case 0x1f:
    VisitNaryNullishExpression(this,param_1);
    break;
  case 0x20:
    VisitNaryLogicalOrExpression(this,param_1);
    break;
  case 0x21:
    VisitNaryLogicalAndExpression(this,param_1);
    break;
  default:
    VisitNaryArithmeticExpression(this,param_1);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

