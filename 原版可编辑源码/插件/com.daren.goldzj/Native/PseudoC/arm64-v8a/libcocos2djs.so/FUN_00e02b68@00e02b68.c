
void FUN_00e02b68(ulong *param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)param_1[2];
  if (pbVar1 < (byte *)param_1[3]) {
    param_1[2] = (ulong)(pbVar1 + 1);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
    *param_1 = (ulong)*pbVar1 | *param_1 << 8;
    return;
  }
  if ((int)param_1[5] != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 5) = 1;
  *param_1 = *param_1 << 8;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 8;
  return;
}

