
long oggpack_bits(int *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 6) + 0x10) + *(long *)(param_1 + 10);
  if (-1 < *(long *)(param_1 + 4)) {
    return (long)*param_1 + (lVar1 - *(long *)(param_1 + 4)) * 8;
  }
  return lVar1 * 8;
}

