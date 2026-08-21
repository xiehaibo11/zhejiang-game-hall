
undefined8 tls1_save_sigalgs(long param_1,void *param_2,int param_3)

{
  void *__dest;
  long lVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 1 & 1) != 0) {
    if (*(long *)(param_1 + 0x148) == 0) {
      return 0;
    }
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x90) + 0x2c0));
    __dest = CRYPTO_malloc(param_3,"ssl/t1_lib.c",0xdfb);
    lVar1 = *(long *)(param_1 + 0x90);
    *(void **)(lVar1 + 0x2c0) = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    *(long *)(lVar1 + 0x2c8) = (long)param_3;
                    /* try { // try from 00aef20c to 00bef2e3 has its CatchHandler @ 00aef00c */
    memcpy(__dest,param_2,(long)param_3);
  }
  return 1;
}

