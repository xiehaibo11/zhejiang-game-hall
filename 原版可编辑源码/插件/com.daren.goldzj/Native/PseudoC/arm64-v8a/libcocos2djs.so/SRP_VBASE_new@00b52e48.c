
long * SRP_VBASE_new(char *param_1)

{
  long *ptr;
  long lVar1;
  char *pcVar2;
  
  ptr = CRYPTO_malloc(0x28,"crypto/srp/srp_vfy.c",0xeb);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar1 = OPENSSL_sk_new_null();
  *ptr = lVar1;
  if (lVar1 != 0) {
    lVar1 = OPENSSL_sk_new_null();
    ptr[1] = lVar1;
    if (lVar1 != 0) {
      ptr[3] = 0;
      ptr[4] = 0;
      ptr[2] = 0;
      if (param_1 == (char *)0x0) {
        return ptr;
      }
      pcVar2 = CRYPTO_strdup(param_1,"crypto/srp/srp_vfy.c",0xf7);
      ptr[2] = (long)pcVar2;
      if (pcVar2 != (char *)0x0) {
        return ptr;
      }
      OPENSSL_sk_free(*ptr);
      OPENSSL_sk_free(ptr[1]);
    }
  }
  CRYPTO_free(ptr);
  return (long *)0x0;
}

