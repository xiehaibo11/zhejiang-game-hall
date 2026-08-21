
void FUN_00b2b674(void)

{
  OPENSSL_init_crypto(0,0);
  DAT_01d3aaa8 = CRYPTO_THREAD_lock_new();
  DAT_01d3aaa4 = (uint)(DAT_01d3aaa8 != 0);
  return;
}

