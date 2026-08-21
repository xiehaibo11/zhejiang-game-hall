
void FUN_009d66ec(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if ((long *)(param_1 + 0x20) == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x009d6718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 009d6704 to 00ad676f has its CatchHandler @ 009d80a8 */
                    /* WARNING: Could not recover jumptable at 0x009d670c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

