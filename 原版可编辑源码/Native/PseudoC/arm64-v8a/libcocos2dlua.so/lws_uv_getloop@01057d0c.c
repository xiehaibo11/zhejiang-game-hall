
long lws_uv_getloop(long param_1,int param_2)

{
  long lVar1;
  
                    /* try { // try from 01057d10 to 01157deb has its CatchHandler @ 01057c04 */
  lVar1 = *(long *)(param_1 + (long)param_2 * 0x6f8 + 0x130);
  if ((lVar1 == 0) || ((*(byte *)(param_1 + 0xc79) >> 2 & 1) == 0)) {
    lVar1 = 0;
  }
  return lVar1;
}

