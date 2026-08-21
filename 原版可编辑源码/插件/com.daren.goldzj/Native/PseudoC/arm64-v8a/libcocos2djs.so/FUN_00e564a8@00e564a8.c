
undefined8 FUN_00e564a8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = *param_1;
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + 0x378) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00e564d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(lVar2 + 0xb8),param_1,*(undefined4 *)(lVar2 + 0x20),
                       FUN_00e5f1f0,0);
    return uVar1;
  }
  return 7;
}

