
undefined8 FT_Select_Size(long param_1,int param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if ((*(byte *)(param_1 + 0x10) >> 1 & 1) == 0) {
    return 0x23;
  }
  if (param_2 < 0) {
    return 6;
  }
  if (param_2 < *(int *)(param_1 + 0x38)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x18) + 0xb8);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e172bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0xa0),(long)param_2);
      return uVar1;
    }
    FUN_00e16df4(param_1,(long)param_2);
    return 0;
  }
  return 6;
}

