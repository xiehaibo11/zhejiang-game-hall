
void FUN_009d653c(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[8];
  *param_1 = &PTR_FUN_0169f980;
  if (param_1 + 4 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x009d6574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009d6568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 009d6568 to 00ad657b has its CatchHandler @ 009d7fe4 */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

