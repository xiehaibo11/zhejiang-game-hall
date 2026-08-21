
undefined8 FUN_00e3b7c8(long *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 0x490);
  if (*(long *)(lVar2 + 0x520) == 0) {
    return 0xa3;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + 0x1360) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e3b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(*param_1 + 0xb8),param_1,*(undefined4 *)(lVar2 + 0x24),
                       FUN_00e3e6a4,0);
    return uVar1;
  }
  return 7;
}

