
long * ssl_cert_new(void)

{
  long *ptr;
  long lVar1;
  
  ptr = (long *)CRYPTO_zalloc(0x1e8,"ssl/ssl_cert.c",0x3b);
  if (ptr == (long *)0x0) {
    ERR_put_error(0x14,0xa2,0x41,"ssl/ssl_cert.c",0x3e);
  }
  else {
    *ptr = (long)(ptr + 4);
    *(undefined4 *)(ptr + 0x3b) = 1;
    ptr[0x37] = (long)&LAB_00ac0930;
    *(undefined4 *)(ptr + 0x38) = 1;
    ptr[0x39] = 0;
    lVar1 = CRYPTO_THREAD_lock_new();
    ptr[0x3c] = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0x14,0xa2,0x41,"ssl/ssl_cert.c",0x49);
      CRYPTO_free(ptr);
      ptr = (long *)0x0;
    }
  }
  return ptr;
}

