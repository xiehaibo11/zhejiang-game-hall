
void FUN_00e67fdc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  *param_2 = &PTR_FUN_016f39f8;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if ((long *)(param_1 + 0x10) == plVar2) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00e6804c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}

