
void CONF_modules_unload(int all)

{
  int iVar1;
  undefined8 *ptr;
  long *ptr_00;
  
  CONF_modules_finish();
  iVar1 = OPENSSL_sk_num(DAT_01d390a0);
  if (0 < iVar1) {
    if (all == 0) {
      do {
        iVar1 = iVar1 + -1;
        ptr_00 = (long *)OPENSSL_sk_value(DAT_01d390a0,iVar1);
        if (((int)ptr_00[4] < 1) && (*ptr_00 != 0)) {
          OPENSSL_sk_delete(DAT_01d390a0,iVar1);
          DSO_free((DSO *)*ptr_00);
          CRYPTO_free((void *)ptr_00[1]);
          CRYPTO_free(ptr_00);
        }
      } while (0 < iVar1);
    }
    else {
      do {
        iVar1 = iVar1 + -1;
        ptr = (undefined8 *)OPENSSL_sk_value(DAT_01d390a0,iVar1);
        OPENSSL_sk_delete(DAT_01d390a0,iVar1);
        DSO_free((DSO *)*ptr);
        CRYPTO_free((void *)ptr[1]);
        CRYPTO_free(ptr);
      } while (0 < iVar1);
    }
  }
  iVar1 = OPENSSL_sk_num(DAT_01d390a0);
  if (iVar1 == 0) {
    OPENSSL_sk_free(DAT_01d390a0);
    DAT_01d390a0 = 0;
  }
  return;
}

