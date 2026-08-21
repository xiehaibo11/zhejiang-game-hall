
/* v8::internal::interpreter::BytecodeGenerator::VisitForAccumulatorValue(v8::internal::Expression*)
    */

undefined4 __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitForAccumulatorValue
          (BytecodeGenerator *this,Expression *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_58 = *(undefined8 *)(this + 0x300);
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
      VisitNoStackOverflowCheck(this,(AstNode *)param_1);
    }
  }
  uVar3 = local_40._4_4_;
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar5 = *(long **)(pBStack_50 + 0x120);
  iVar1 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_48,local_48));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

