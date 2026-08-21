
uint uv_is_readable(long param_1)

{
  return *(uint *)(param_1 + 0x58) >> 5 & 1;
}

