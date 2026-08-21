
uint FUN_00a41854(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x3c0) != '\0') {
    return 1;
  }
  return (*(uint *)(param_1 + 0xc) & *(uint *)(param_1 + 0x10)) >> 5 & 1;
}

