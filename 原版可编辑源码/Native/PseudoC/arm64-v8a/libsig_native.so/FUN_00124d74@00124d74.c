
void FUN_00124d74(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  if (*(char *)((long)plVar1 + 9) != '\x01') {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  FUN_0011bcc0(param_2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  plVar1 = *(long **)(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  if (*(char *)((long)plVar1 + 9) == '\x01') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00124e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return;
}

