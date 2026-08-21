
uint uv_has_ref(long param_1)

{
  return *(uint *)(param_1 + 0x58) >> 3 & 1;
}

