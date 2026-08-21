
uint uv_is_active(long param_1)

{
  return *(uint *)(param_1 + 0x58) >> 0xe & 1;
}

