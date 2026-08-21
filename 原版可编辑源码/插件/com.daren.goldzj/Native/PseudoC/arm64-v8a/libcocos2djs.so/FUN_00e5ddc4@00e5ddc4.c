
uint FUN_00e5ddc4(uint param_1)

{
  if (0x7f < param_1) {
    return 0;
  }
  return 1 << (ulong)(param_1 & 7) & (uint)(byte)"0123456789ABCDEF"[(ulong)(param_1 >> 3) + 0x10];
}

