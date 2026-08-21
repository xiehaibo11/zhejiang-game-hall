
undefined8 CRYPTO_secure_malloc_done(void)

{
  undefined8 uVar1;
  
  if (DAT_017849a8 == 0) {
    CRYPTO_free(DAT_017849d0);
    CRYPTO_free(DAT_017849e8);
    CRYPTO_free(DAT_017849f0);
    if ((DAT_017849b0 != (void *)0x0) && (DAT_017849b8 != 0)) {
      munmap(DAT_017849b0,DAT_017849b8);
    }
    memset(&DAT_017849b0,0,0x50);
    DAT_01784990 = 0;
    CRYPTO_THREAD_lock_free(DAT_017849a0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

