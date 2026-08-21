
void FUN_00b39af4(void)

{
  OPENSSL_init_crypto(0,0);
  DAT_01784828 = CRYPTO_THREAD_lock_new();
  DAT_01784824 = (uint)(DAT_01784828 != 0);
  return;
}

