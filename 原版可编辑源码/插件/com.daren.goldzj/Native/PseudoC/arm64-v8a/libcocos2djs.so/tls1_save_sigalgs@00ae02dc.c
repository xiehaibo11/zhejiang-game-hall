
undefined8 tls1_save_sigalgs(long param_1,void *param_2,int param_3)

{
  void *__dest;
  long lVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1) != 0) {
    if (*(long *)(param_1 + 0x148) == 0) {
      return 0;
    }
                    /* try { // try from 00ae0310 to 00be0317 has its CatchHandler @ 00ae04c8 */
                    /* try { // try from 00ae0324 to 00be0333 has its CatchHandler @ 00ae04c4 */
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x2c0));
    __dest = CRYPTO_malloc(param_3,"ssl/t1_lib.c",0xdfb);
    lVar1 = *(long *)(param_1 + 0x90);
    *(void **)(lVar1 + 0x2c0) = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
                    /* try { // try from 00ae0350 to 00be0357 has its CatchHandler @ 00ae0490 */
    *(long *)(lVar1 + 0x2c8) = (long)param_3;
    memcpy(__dest,param_2,(long)param_3);
  }
  return 1;
}

