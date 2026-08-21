
void FUN_009f77b8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x20) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x009f77e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f77d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

