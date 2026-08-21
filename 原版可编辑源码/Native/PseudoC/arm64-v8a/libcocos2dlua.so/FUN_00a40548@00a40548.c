
undefined8 FUN_00a40548(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x400) + 0x38);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x00a4055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}

