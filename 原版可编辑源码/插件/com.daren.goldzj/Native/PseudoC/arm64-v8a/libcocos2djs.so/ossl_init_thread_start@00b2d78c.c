
undefined8 ossl_init_thread_start(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_THREAD_get_local(&DAT_01d3abb0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)CRYPTO_zalloc(8,"crypto/init.c",0x2d);
    CRYPTO_THREAD_set_local(&DAT_01d3abb0,puVar1);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  if ((param_1 & 1) != 0) {
    *puVar1 = 1;
  }
  if ((param_1 >> 1 & 1) != 0) {
    puVar1[1] = 1;
  }
  return 1;
}

