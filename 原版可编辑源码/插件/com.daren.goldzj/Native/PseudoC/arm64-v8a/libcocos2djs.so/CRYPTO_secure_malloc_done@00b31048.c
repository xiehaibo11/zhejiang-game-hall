
undefined8 CRYPTO_secure_malloc_done(void)

{
  undefined8 uVar1;
  
  if (DAT_01d3ac28 == 0) {
    CRYPTO_free(DAT_01d3ac50);
    CRYPTO_free(DAT_01d3ac68);
    CRYPTO_free(DAT_01d3ac70);
    if ((DAT_01d3ac30 != (void *)0x0) && (DAT_01d3ac38 != 0)) {
      munmap(DAT_01d3ac30,DAT_01d3ac38);
    }
    memset(&DAT_01d3ac30,0,0x50);
    DAT_01d3ac10 = 0;
    CRYPTO_THREAD_lock_free(DAT_01d3ac20);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

