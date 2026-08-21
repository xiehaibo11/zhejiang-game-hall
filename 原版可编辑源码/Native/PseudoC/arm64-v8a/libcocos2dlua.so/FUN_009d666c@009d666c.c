
void FUN_009d666c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  *param_2 = &PTR_FUN_0169f980;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    param_2[8] = 0;
  }
  else {
    if ((long *)(param_1 + 0x20) == plVar2) {
      param_2[8] = param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x009d66e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[8] = uVar1;
  }
  return;
}

