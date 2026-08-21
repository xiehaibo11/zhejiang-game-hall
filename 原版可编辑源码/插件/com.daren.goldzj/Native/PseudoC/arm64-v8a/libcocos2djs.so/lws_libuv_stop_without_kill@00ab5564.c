
void lws_libuv_stop_without_kill(long param_1,int param_2)

{
  if ((*(long *)(param_1 + (long)param_2 * 0x6f8 + 0x130) != 0) &&
     ((*(byte *)(param_1 + 0xc79) >> 2 & 1) != 0)) {
    uv_stop();
    return;
  }
  return;
}

