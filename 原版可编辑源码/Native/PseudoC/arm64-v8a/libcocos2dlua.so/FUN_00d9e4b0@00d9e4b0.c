
void FUN_00d9e4b0(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_016d7d20;
  if (param_1 + 2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d9e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d9e4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

