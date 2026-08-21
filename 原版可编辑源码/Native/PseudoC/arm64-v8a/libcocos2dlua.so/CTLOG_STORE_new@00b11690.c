
long * CTLOG_STORE_new(void)

{
  long *ptr;
  long lVar1;
  
  ptr = (long *)CRYPTO_zalloc(8,"crypto/ct/ct_log.c",0x5e);
  if (ptr == (long *)0x0) {
    ERR_put_error(0x32,0x83,0x41,"crypto/ct/ct_log.c",0x61);
  }
  else {
    lVar1 = OPENSSL_sk_new_null();
    *ptr = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
      ptr = (long *)0x0;
    }
  }
  return ptr;
}

