
uint uv_is_writable(long param_1)

{
  return *(uint *)(param_1 + 0x58) >> 0xf & 1;
}

