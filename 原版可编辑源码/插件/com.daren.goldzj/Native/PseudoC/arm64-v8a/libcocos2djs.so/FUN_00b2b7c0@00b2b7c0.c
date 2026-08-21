
int FUN_00b2b7c0(EVP_PKEY *param_1,long *param_2)

{
  int *piVar1;
  void *__dest;
  
  piVar1 = EVP_PKEY_get0(param_1);
  if (param_2 != (long *)0x0) {
    if ((void *)*param_2 == (void *)0x0) {
      __dest = CRYPTO_malloc(*piVar1,"crypto/hmac/hm_ameth.c",0x53);
      *param_2 = (long)__dest;
      if (__dest == (void *)0x0) {
        return -1;
      }
      memcpy(__dest,*(void **)(piVar1 + 2),(long)*piVar1);
    }
    else {
      memcpy((void *)*param_2,*(void **)(piVar1 + 2),(long)*piVar1);
      *param_2 = *param_2 + (long)*piVar1;
    }
  }
  return *piVar1;
}

