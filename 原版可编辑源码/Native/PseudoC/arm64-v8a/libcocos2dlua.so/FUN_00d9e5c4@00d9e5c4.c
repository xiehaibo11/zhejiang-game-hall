
void FUN_00d9e5c4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* try { // try from 00d9e5d4 to 00e9e5db has its CatchHandler @ 00d9f300 */
                    /* try { // try from 00d9e5dc to 00e9e607 has its CatchHandler @ 00d9d944 */
  *param_2 = &PTR_FUN_016d7d20;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if ((long *)(param_1 + 0x10) == plVar2) {
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00d9e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
                    /* try { // try from 00d9e608 to 00e9e613 has its CatchHandler @ 00d9f304 */
  }
  return;
}

