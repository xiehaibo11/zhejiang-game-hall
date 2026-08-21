
void FUN_00def06c(long *param_1)

{
  *param_1 = (ulong)*(byte *)((long)param_1 + -1) * 0x101010101010101;
  param_1[4] = (ulong)*(byte *)((long)param_1 + 0x1f) * 0x101010101010101;
  param_1[8] = (ulong)*(byte *)((long)param_1 + 0x3f) * 0x101010101010101;
  param_1[0xc] = (ulong)*(byte *)((long)param_1 + 0x5f) * 0x101010101010101;
  param_1[0x10] = (ulong)*(byte *)((long)param_1 + 0x7f) * 0x101010101010101;
  param_1[0x14] = (ulong)*(byte *)((long)param_1 + 0x9f) * 0x101010101010101;
  param_1[0x18] = (ulong)*(byte *)((long)param_1 + 0xbf) * 0x101010101010101;
  param_1[0x1c] = (ulong)*(byte *)((long)param_1 + 0xdf) * 0x101010101010101;
  return;
}

