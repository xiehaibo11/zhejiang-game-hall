
void FUN_0114b5ec(long *param_1)

{
  long lVar1;
  
  lVar1 = (ulong)((uint)*(byte *)(param_1 + -4) + (uint)*(byte *)((long)param_1 + -0x1f) +
                  (uint)*(byte *)((long)param_1 + -0x1e) + (uint)*(byte *)((long)param_1 + -0x1d) +
                  (uint)*(byte *)((long)param_1 + -0x1c) + (uint)*(byte *)((long)param_1 + -0x1b) +
                  (uint)*(byte *)((long)param_1 + -0x1a) + (uint)*(byte *)((long)param_1 + -0x19) +
                  4 >> 3 & 0xff) * 0x101010101010101;
  *param_1 = lVar1;
  param_1[4] = lVar1;
  param_1[8] = lVar1;
  param_1[0xc] = lVar1;
  param_1[0x10] = lVar1;
  param_1[0x14] = lVar1;
  param_1[0x18] = lVar1;
  param_1[0x1c] = lVar1;
  return;
}

