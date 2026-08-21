
undefined8 FUN_00b66304(long param_1)

{
  undefined8 *ptr;
  BUF_MEM *pBVar1;
  long lVar2;
  
  ptr = CRYPTO_malloc(0x18,"crypto/x509/by_dir.c",0x67);
  if (ptr != (undefined8 *)0x0) {
    pBVar1 = BUF_MEM_new();
    *ptr = pBVar1;
    if (pBVar1 != (BUF_MEM *)0x0) {
      ptr[1] = 0;
      lVar2 = CRYPTO_THREAD_lock_new();
      ptr[2] = lVar2;
      if (lVar2 != 0) {
        *(undefined8 **)(param_1 + 0x10) = ptr;
        return 1;
      }
      BUF_MEM_free((BUF_MEM *)*ptr);
    }
    CRYPTO_free(ptr);
  }
  return 0;
}

