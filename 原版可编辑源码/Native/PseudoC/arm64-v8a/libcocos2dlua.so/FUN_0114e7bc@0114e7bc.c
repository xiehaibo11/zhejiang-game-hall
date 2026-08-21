
void FUN_0114e7bc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = NEON_uhadd(*(undefined8 *)(param_1 + -8),
                     CONCAT17((char)((ulong)*(undefined8 *)((long)param_1 + -0x1e) >> 0x38),
                              CONCAT16(*(undefined1 *)((long)param_1 + -0x19),
                                       (int6)*(undefined8 *)((long)param_1 + -0x1e))),1);
  uVar1 = NEON_urhadd(uVar1,*(undefined8 *)((long)param_1 + -0x1f),1);
  *param_1 = (int)uVar1;
  param_1[8] = (int)((ulong)uVar1 >> 8);
  param_1[0x10] = (int)((ulong)uVar1 >> 0x10);
  param_1[0x18] = (int)((ulong)uVar1 >> 0x18);
  return;
}

