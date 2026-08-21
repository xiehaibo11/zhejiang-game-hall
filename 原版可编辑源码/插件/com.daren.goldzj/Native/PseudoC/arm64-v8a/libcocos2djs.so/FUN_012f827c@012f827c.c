
bool FUN_012f827c(long param_1,long param_2)

{
  if (*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10)) {
    return (int)*(ulong *)(param_1 + 0x2c) == (int)*(ulong *)(param_2 + 0x2c) &&
           ((*(ulong *)(param_2 + 0x2c) ^ *(ulong *)(param_1 + 0x2c)) & 0x100000000) == 0;
  }
  return false;
}

