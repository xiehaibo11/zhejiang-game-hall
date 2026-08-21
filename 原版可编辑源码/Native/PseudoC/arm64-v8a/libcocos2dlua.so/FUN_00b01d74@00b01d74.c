
void FUN_00b01d74(long *param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      pvVar2 = (void *)OPENSSL_sk_pop();
      while (pvVar2 != (void *)0x0) {
        CRYPTO_free(*(void **)((long)pvVar2 + 0x10));
        CRYPTO_free(pvVar2);
        pvVar2 = (void *)OPENSSL_sk_pop(*param_1);
      }
    }
    OPENSSL_sk_free(*param_1);
    CRYPTO_free(param_1);
    CRYPTO_THREAD_set_local(&DAT_01782dd4,0);
    async_local_cleanup();
    iVar1 = OPENSSL_init_crypto(0x100,0);
    if (iVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
                    /* try { // try from 00b01e20 to 00c01e2b has its CatchHandler @ 00b01e98 */
      pvVar2 = (void *)CRYPTO_THREAD_get_local(&DAT_01782dd0);
                    /* try { // try from 00b01e2c to 00c01ecf has its CatchHandler @ 00b01d70 */
    }
    iVar1 = CRYPTO_THREAD_set_local(&DAT_01782dd0,0);
    if (iVar1 != 0) {
      CRYPTO_free(pvVar2);
      return;
    }
  }
  return;
}

