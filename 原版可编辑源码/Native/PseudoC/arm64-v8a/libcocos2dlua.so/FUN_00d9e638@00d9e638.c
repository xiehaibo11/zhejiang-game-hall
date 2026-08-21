
void FUN_00d9e638(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if ((long *)(param_1 + 0x10) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x00d9e664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d9e658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00d9e658 to 00e9e6cf has its CatchHandler @ 00d9f35c */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

