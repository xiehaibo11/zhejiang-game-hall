
void FUN_0114a4b8(int *param_1)

{
  int iVar1;
  
  iVar1 = ((uint)*(byte *)(param_1 + -8) + (uint)*(byte *)((long)param_1 + -1) +
           (uint)*(byte *)((long)param_1 + -0x1f) + (uint)*(byte *)((long)param_1 + 0x1f) +
           (uint)*(byte *)((long)param_1 + -0x1e) + (uint)*(byte *)((long)param_1 + 0x3f) +
           (uint)*(byte *)((long)param_1 + -0x1d) + (uint)*(byte *)((long)param_1 + 0x5f) + 4 >> 3 &
          0xff) * 0x1010101;
  *param_1 = iVar1;
  param_1[8] = iVar1;
  param_1[0x10] = iVar1;
  param_1[0x18] = iVar1;
  return;
}

