
void FUN_009f7738(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* try { // try from 009f7748 to 00af774f has its CatchHandler @ 009f7824 */
  *param_2 = &PTR_FUN_01c6c478;
                    /* try { // try from 009f7750 to 00af781b has its CatchHandler @ 009f73bc */
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    param_2[8] = 0;
  }
  else {
    if ((long *)(param_1 + 0x20) == plVar2) {
      param_2[8] = param_2 + 4;
                    /* WARNING: Could not recover jumptable at 0x009f77b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[8] = uVar1;
  }
  return;
}

