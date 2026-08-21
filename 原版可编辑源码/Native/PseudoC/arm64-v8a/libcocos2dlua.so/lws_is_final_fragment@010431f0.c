
uint lws_is_final_fragment(long param_1)

{
  if ((*(uint *)(param_1 + 0x106) & 1) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    return 0;
  }
  return (*(uint *)(param_1 + 0x106) >> 0xe ^ 0xffffffff) & 1;
}

