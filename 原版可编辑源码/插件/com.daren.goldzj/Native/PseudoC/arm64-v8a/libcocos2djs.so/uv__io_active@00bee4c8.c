
bool uv__io_active(long param_1,uint param_2)

{
  return (param_2 & *(uint *)(param_1 + 0x28)) != 0;
}

