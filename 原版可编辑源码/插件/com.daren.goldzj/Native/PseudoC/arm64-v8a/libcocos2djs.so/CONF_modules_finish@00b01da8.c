
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CONF_modules_finish(void)

{
  int iVar1;
  long *ptr;
  long lVar2;
  
  iVar1 = OPENSSL_sk_num(DAT_01d390a8);
  while (0 < iVar1) {
    ptr = (long *)OPENSSL_sk_pop(DAT_01d390a8);
    if (ptr != (long *)0x0) {
      lVar2 = *ptr;
      if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(ptr);
        lVar2 = *ptr;
      }
      *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free((void *)ptr[2]);
      CRYPTO_free(ptr);
    }
    iVar1 = OPENSSL_sk_num(DAT_01d390a8);
  }
  OPENSSL_sk_free(DAT_01d390a8);
  DAT_01d390a8 = 0;
  return;
}

