
void * CRYPTO_clear_realloc
                 (void *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    if ((PTR_CRYPTO_malloc_01d20820 != (undefined *)0x0) &&
       ((code *)PTR_CRYPTO_malloc_01d20820 != CRYPTO_malloc)) {
                    /* WARNING: Could not recover jumptable at 0x00b30b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_01d20820)(param_3,param_4,param_5);
      return pvVar1;
    }
    if (param_3 != 0) {
      DAT_01d3ac08 = 1;
      pvVar1 = malloc(param_3);
      return pvVar1;
    }
    pvVar1 = (void *)0x0;
  }
  else if (param_3 == 0) {
    if (param_2 != 0) {
      OPENSSL_cleanse(param_1,param_2);
    }
    if ((PTR_CRYPTO_free_01d20830 == (undefined *)0x0) ||
       ((code *)PTR_CRYPTO_free_01d20830 == CRYPTO_free)) {
      free(param_1);
      pvVar1 = (void *)0x0;
    }
    else {
      (*(code *)PTR_CRYPTO_free_01d20830)(param_1,param_4,param_5);
      pvVar1 = (void *)0x0;
    }
  }
  else if (param_2 < param_3 || param_2 - param_3 == 0) {
    if ((PTR_CRYPTO_malloc_01d20820 == (undefined *)0x0) ||
       ((code *)PTR_CRYPTO_malloc_01d20820 == CRYPTO_malloc)) {
      DAT_01d3ac08 = 1;
      pvVar1 = malloc(param_3);
    }
    else {
      pvVar1 = (void *)(*(code *)PTR_CRYPTO_malloc_01d20820)(param_3,param_4,param_5);
    }
    if (pvVar1 != (void *)0x0) {
      memcpy(pvVar1,param_1,param_2);
      if (param_2 != 0) {
        OPENSSL_cleanse(param_1,param_2);
      }
      if ((PTR_CRYPTO_free_01d20830 == (undefined *)0x0) ||
         ((code *)PTR_CRYPTO_free_01d20830 == CRYPTO_free)) {
        free(param_1);
      }
      else {
        (*(code *)PTR_CRYPTO_free_01d20830)(param_1,param_4,param_5);
      }
    }
  }
  else {
    OPENSSL_cleanse((void *)((long)param_1 + param_3),param_2 - param_3);
    pvVar1 = param_1;
  }
  return pvVar1;
}

