
undefined8 FUN_00a29b38(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* catch() { ... } // from try @ 00a29970 with catch @ 00a29b38 */
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00a29950 with catch @ 00a29b3c */
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x400) + 0x30);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x00a29b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00a29988 with catch @ 00a29b4c */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}

