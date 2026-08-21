
void FUN_0099f0e8(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01c6a6c0;
  if (param_1 + 2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0099f120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0099f114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

