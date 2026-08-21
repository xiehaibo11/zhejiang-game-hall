
void FUN_0099f284(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if ((long *)(param_1 + 0x10) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0099f2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0099f2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

