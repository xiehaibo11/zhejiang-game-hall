
uint lws_is_first_fragment(long param_1)

{
  return *(uint *)(param_1 + 0x106) >> 0x11 & 1;
}

