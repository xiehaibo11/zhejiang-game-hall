
void FUN_00c1a1e4(long param_1,ulong *param_2)

{
  if (1 < (byte)(*(char *)(param_1 + 0x31) - 1U)) {
    *(byte *)(param_2 + -1) = (byte)param_2[-1] & 0xf8 | *(byte *)(param_1 + 0x30) & 3;
    return;
  }
  FUN_00c18e3c(param_1,*param_2 & 0x7fffffffffff);
  return;
}

