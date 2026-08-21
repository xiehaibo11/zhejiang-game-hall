
void FUN_00e6e0d0(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  plVar1 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x20) == plVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00e6e120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

