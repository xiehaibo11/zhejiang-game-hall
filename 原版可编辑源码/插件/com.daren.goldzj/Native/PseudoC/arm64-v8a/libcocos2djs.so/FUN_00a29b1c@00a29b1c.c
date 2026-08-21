
undefined8 FUN_00a29b1c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x400) + 0x48);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a29b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
                    /* catch() { ... } // from try @ 00a2997c with catch @ 00a29b34 */
  return 0;
}

