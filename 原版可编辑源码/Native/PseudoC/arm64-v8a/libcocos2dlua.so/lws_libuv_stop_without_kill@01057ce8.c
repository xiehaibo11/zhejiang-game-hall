
void lws_libuv_stop_without_kill(long param_1,int param_2)

{
                    /* try { // try from 01057cf8 to 01157d0f has its CatchHandler @ 01057da0 */
  if ((*(long *)(param_1 + (long)param_2 * 0x6f8 + 0x130) != 0) &&
     ((*(byte *)(param_1 + 0xc79) >> 2 & 1) != 0)) {
    uv_stop();
    return;
  }
  return;
}

