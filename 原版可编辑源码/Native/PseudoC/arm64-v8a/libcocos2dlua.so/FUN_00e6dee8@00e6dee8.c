
void FUN_00e6dee8(undefined8 *param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_FUN_016f3bd8;
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
    operator_delete((void *)param_1[0xc]);
  }
  plVar1 = (long *)param_1[8];
  if (param_1 + 4 == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00e6df44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

