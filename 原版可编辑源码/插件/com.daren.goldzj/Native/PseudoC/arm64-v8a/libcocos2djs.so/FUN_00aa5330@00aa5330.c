
uint FUN_00aa5330(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if (*(short *)(lVar1 + 0xb5c) == *(short *)(lVar1 + 0xb5e)) {
    return *(uint *)((long)param_1 + 0x2f4) & 1;
  }
  return 0;
}

