
bool uv_is_closing(long param_1)

{
  return (*(uint *)(param_1 + 0x58) & 3) != 0;
}

