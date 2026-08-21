
void FUN_0099f210(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 0099f050 with catch @ 0099f214 */
  *param_2 = &PTR_FUN_01c6a6c0;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
    param_2[6] = 0;
  }
  else {
    if ((long *)(param_1 + 0x10) == plVar2) {
      param_2[6] = param_2 + 2;
                    /* try { // try from 0099f26c to 00a9f2cb has its CatchHandler @ 0099f26c
                       catch() { ... } // from try @ 0099f26c with catch @ 0099f26c
                       catch() { ... } // from try @ 0099f4c4 with catch @ 0099f26c */
                    /* WARNING: Could not recover jumptable at 0x0099f280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    param_2[6] = uVar1;
  }
  return;
}

