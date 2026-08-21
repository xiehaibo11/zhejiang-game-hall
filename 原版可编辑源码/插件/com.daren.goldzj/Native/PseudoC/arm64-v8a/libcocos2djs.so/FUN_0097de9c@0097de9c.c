
void FUN_0097de9c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
                    /* try { // try from 0097dea4 to 00a7df03 has its CatchHandler @ 0097dea4
                       catch() { ... } // from try @ 0097dea4 with catch @ 0097dea4
                       catch() { ... } // from try @ 0097df4c with catch @ 0097dea4 */
  if ((long *)(param_1 + 0x10) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0097dec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0097debc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

