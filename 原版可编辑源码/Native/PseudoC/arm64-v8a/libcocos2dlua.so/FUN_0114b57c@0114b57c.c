
void FUN_0114b57c(long *param_1)

{
  long lVar1;
  
  lVar1 = (ulong)((uint)*(byte *)((long)param_1 + -1) + (uint)*(byte *)((long)param_1 + 0x1f) +
                  (uint)*(byte *)((long)param_1 + 0x3f) + (uint)*(byte *)((long)param_1 + 0x5f) +
                  (uint)*(byte *)((long)param_1 + 0x7f) + (uint)*(byte *)((long)param_1 + 0x9f) +
                  (uint)*(byte *)((long)param_1 + 0xbf) + (uint)*(byte *)((long)param_1 + 0xdf) + 4
                  >> 3 & 0xff) * 0x101010101010101;
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

