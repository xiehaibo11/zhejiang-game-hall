
void FUN_009f7608(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[8];
  *param_1 = &PTR_FUN_01c6c478;
  if (param_1 + 4 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x009f7640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009f7634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

