
/* v8::internal::interpreter::BytecodeGenerator::BuildVariableLoadForAccumulatorValue(v8::internal::Variable*,
   v8::internal::HoleCheckMode, v8::internal::TypeofMode) */

void v8::internal::interpreter::BytecodeGenerator::BuildVariableLoadForAccumulatorValue
               (long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_48;
  long lStack_40;
  int local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x300);
  local_38 = *(int *)(param_1 + 0x118);
  local_30 = 2;
  *(undefined8 **)(param_1 + 0x300) = &local_48;
  lStack_40 = param_1;
  BuildVariableLoad();
  *(undefined8 *)(lStack_40 + 0x300) = local_48;
  plVar3 = *(long **)(lStack_40 + 0x120);
  iVar1 = *(int *)(lStack_40 + 0x118);
  *(int *)(lStack_40 + 0x118) = local_38;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,CONCAT44(iVar1 - local_38,local_38));
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

