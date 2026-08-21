
/* v8::internal::interpreter::BytecodeGenerator::VisitForTypeOfValue(v8::internal::Expression*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForTypeOfValue
          (BytecodeGenerator *this,Expression *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar1 = *(uint *)(param_1 + 4);
  pBStack_50 = this;
  if ((uVar1 & 0x3f) == 0x35) {
    local_58 = *(undefined8 *)(this + 0x300);
    uVar6 = *(undefined8 *)(param_1 + 8);
    local_48 = *(int *)(this + 0x118);
    local_40 = 2;
    *(undefined8 **)(this + 0x300) = &local_58;
    BuildVariableLoad(this,uVar6,uVar1 >> 0xb & 1,0);
  }
  else {
    local_58 = *(undefined8 *)(this + 0x300);
    local_48 = *(int *)(this + 0x118);
    local_40 = 2;
    *(undefined8 **)(this + 0x300) = &local_58;
    if (this[8] == (BytecodeGenerator)0x0) {
      uVar4 = GetCurrentStackPosition();
      if (uVar4 < *(ulong *)this) {
        this[8] = (BytecodeGenerator)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)param_1);
      }
    }
  }
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar5 = *(long **)(pBStack_50 + 0x120);
  iVar2 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - local_48,local_48));
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

