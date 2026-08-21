
uint lws_frame_is_binary(long param_1)

{
  return *(uint *)(param_1 + 0x106) >> 1 & 1;
}

