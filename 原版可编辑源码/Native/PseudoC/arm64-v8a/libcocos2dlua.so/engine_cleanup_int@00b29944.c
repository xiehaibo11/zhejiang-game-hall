
void engine_cleanup_int(void)

{
  if (DAT_01782e88 != 0) {
    OPENSSL_sk_pop_free(DAT_01782e88,&LAB_00b2998c);
    DAT_01782e88 = 0;
  }
  RAND_set_rand_method((RAND_METHOD *)0x0);
  CRYPTO_THREAD_lock_free(global_engine_lock);
  return;
}

