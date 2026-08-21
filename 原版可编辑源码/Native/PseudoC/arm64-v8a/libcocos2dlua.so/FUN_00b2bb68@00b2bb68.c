
void FUN_00b2bb68(void)

{
  OPENSSL_init_crypto(0,0);
  DAT_01783018 = CRYPTO_THREAD_lock_new();
  DAT_01783004 = (uint)(DAT_01783018 != 0);
  return;
}

