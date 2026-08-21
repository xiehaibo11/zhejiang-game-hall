
void FUN_0097de28(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
  *param_2 = &PTR_FUN_01c69fd8;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
                    /* try { // try from 0097de4c to 00a7de53 has its CatchHandler @ 0097de84 */
                    /* try { // try from 0097de54 to 00a7de5b has its CatchHandler @ 0097de5c */
    if ((long *)(param_1 + 0x10) == plVar2) {
      param_2[6] = param_2 + 2;
                    /* catch() { ... } // from try @ 0097dd80 with catch @ 0097de84
                       catch() { ... } // from try @ 0097de4c with catch @ 0097de84 */
                    /* WARNING: Could not recover jumptable at 0x0097de98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
                    /* catch() { ... } // from try @ 0097ddf0 with catch @ 0097de5c
                       catch() { ... } // from try @ 0097de54 with catch @ 0097de5c
                       try { // try from 0097de5c to 00a7dea3 has its CatchHandler @ 0097dd20 */
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}

