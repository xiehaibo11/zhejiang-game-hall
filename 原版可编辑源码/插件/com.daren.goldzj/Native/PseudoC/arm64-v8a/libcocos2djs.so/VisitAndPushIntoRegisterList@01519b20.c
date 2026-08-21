
/* v8::internal::interpreter::BytecodeGenerator::VisitAndPushIntoRegisterList(v8::internal::Expression*,
   v8::internal::interpreter::RegisterList*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitAndPushIntoRegisterList
          (BytecodeGenerator *this,Expression *param_1,RegisterList *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 local_58;
  BytecodeGenerator *pBStack_50;
  int local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
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
  *(undefined8 *)(pBStack_50 + 0x300) = local_58;
  plVar5 = *(long **)(pBStack_50 + 0x120);
  iVar1 = *(int *)(pBStack_50 + 0x118);
  *(int *)(pBStack_50 + 0x118) = local_48;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar1 - local_48,local_48));
  }
  iVar2 = *(int *)(this + 0x118);
  iVar1 = *(int *)(this + 0x11c);
  plVar5 = *(long **)(this + 0x120);
  if (iVar1 <= iVar2 + 1) {
    iVar1 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,iVar2);
  }
  iVar1 = *(int *)(param_2 + 4);
  *(int *)(param_2 + 4) = iVar1 + 1;
  if (iVar1 == -1) {
    if (iVar2 == 0) {
LAB_01519c34:
      BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar2);
      if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  else if (iVar2 == *(int *)param_2 + iVar1) goto LAB_01519c34;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","reg.index() == reg_list->last_register().index()");
}

