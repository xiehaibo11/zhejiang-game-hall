
long oggpack_eop(long param_1)

{
  return *(long *)(param_1 + 0x10) >> 0x3f;
}

