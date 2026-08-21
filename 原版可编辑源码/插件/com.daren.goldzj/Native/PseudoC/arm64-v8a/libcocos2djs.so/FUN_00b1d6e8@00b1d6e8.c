
void FUN_00b1d6e8(void)

{
  OPENSSL_init_crypto(0,0);
  DAT_01d39298 = CRYPTO_THREAD_lock_new();
  DAT_01d39284 = (uint)(DAT_01d39298 != 0);
  return;
}

