
undefined8 FUN_00b2b844(long param_1)

{
  void *ptr;
  long lVar1;
  undefined8 uVar2;
  
  ptr = (void *)CRYPTO_zalloc(0x28,"crypto/hmac/hm_pmeth.c",0x1e);
  uVar2 = 0;
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0xc) = 4;
    lVar1 = HMAC_CTX_new();
    *(long *)((long)ptr + 0x20) = lVar1;
    if (lVar1 == 0) {
      CRYPTO_free(ptr);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
      *(void **)(param_1 + 0x28) = ptr;
      *(undefined4 *)(param_1 + 0x48) = 0;
    }
  }
  return uVar2;
}

