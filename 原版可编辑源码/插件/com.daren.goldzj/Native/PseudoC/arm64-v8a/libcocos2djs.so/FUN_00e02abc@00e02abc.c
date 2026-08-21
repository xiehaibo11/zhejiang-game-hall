
void FUN_00e02abc(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  
  *param_1 = 0;
  param_1[1] = 0xfffffff8000000fe;
  puVar1 = (ulong *)((byte *)((long)param_2 + param_3) + -7);
  if (param_3 < 8) {
    puVar1 = param_2;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = (ulong)param_2;
  param_1[3] = (long)param_2 + param_3;
  param_1[4] = (ulong)puVar1;
  if (param_2 < puVar1) {
    uVar2 = *param_2;
    *(undefined4 *)((long)param_1 + 0xc) = 0x30;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    param_1[2] = (ulong)((long)param_2 + 7);
    *param_1 = (uVar2 >> 0x20 | uVar2 << 0x20) >> 8;
    return;
  }
  if (0 < (long)param_3) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    param_1[2] = (ulong)((long)param_2 + 1);
    *param_1 = (ulong)(byte)*param_2;
    return;
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  return;
}

