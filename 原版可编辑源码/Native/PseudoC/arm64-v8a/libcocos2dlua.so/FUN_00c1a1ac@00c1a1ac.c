
void FUN_00c1a1ac(long param_1,long param_2,undefined8 param_3)

{
  if (1 < (byte)(*(char *)(param_1 + 0x31) - 1U)) {
    *(byte *)(param_2 + 8) = *(byte *)(param_1 + 0x30) & 3 | *(byte *)(param_2 + 8) & 0xf8;
    return;
  }
  FUN_00c18e3c(param_1,param_3);
  return;
}

