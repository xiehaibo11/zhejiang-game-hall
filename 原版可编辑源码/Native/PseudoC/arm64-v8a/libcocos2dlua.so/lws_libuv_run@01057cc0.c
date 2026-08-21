
void lws_libuv_run(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + (long)param_2 * 0x6f8 + 0x130);
  if ((lVar1 != 0) && ((*(byte *)(param_1 + 0xc79) >> 2 & 1) != 0)) {
    uv_run(lVar1,0);
    return;
  }
  return;
}

