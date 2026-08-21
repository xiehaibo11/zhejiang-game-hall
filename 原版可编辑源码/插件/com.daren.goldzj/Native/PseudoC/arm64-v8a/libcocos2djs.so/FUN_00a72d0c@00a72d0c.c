
void FUN_00a72d0c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[6];
                    /* try { // try from 00a72d14 to 00b72d23 has its CatchHandler @ 00a72e78 */
                    /* try { // try from 00a72d24 to 00b72ecf has its CatchHandler @ 00a72a70 */
  *param_1 = &PTR_FUN_01c6ed70;
  if (param_1 + 2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a72d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a72d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

