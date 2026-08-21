
void FUN_00af18f4(long *param_1)

{
  int iVar1;
  void *pvVar2;
  
                    /* try { // try from 00af1908 to 00bf190f has its CatchHandler @ 00af1978 */
  if (param_1 != (long *)0x0) {
                    /* try { // try from 00af1910 to 00bf196b has its CatchHandler @ 00af17f8 */
    if (*param_1 != 0) {
      pvVar2 = (void *)OPENSSL_sk_pop();
      while (pvVar2 != (void *)0x0) {
        CRYPTO_free(*(void **)((long)pvVar2 + 0x10));
        CRYPTO_free(pvVar2);
        pvVar2 = (void *)OPENSSL_sk_pop(*param_1);
      }
    }
    OPENSSL_sk_free(*param_1);
                    /* try { // try from 00af196c to 00bf1973 has its CatchHandler @ 00af1974 */
    CRYPTO_free(param_1);
                    /* catch() { ... } // from try @ 00af196c with catch @ 00af1974
                       try { // try from 00af1974 to 00bf1993 has its CatchHandler @ 00af17f8 */
                    /* catch() { ... } // from try @ 00af1908 with catch @ 00af1978 */
    CRYPTO_THREAD_set_local(&DAT_01d39054,0);
    async_local_cleanup();
    iVar1 = OPENSSL_init_crypto(0x100,0);
    if (iVar1 == 0) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)CRYPTO_THREAD_get_local(&DAT_01d39050);
    }
    iVar1 = CRYPTO_THREAD_set_local(&DAT_01d39050,0);
    if (iVar1 != 0) {
      CRYPTO_free(pvVar2);
      return;
    }
  }
  return;
}

