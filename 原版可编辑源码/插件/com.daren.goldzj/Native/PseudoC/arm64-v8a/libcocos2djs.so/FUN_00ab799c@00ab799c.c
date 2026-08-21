
undefined8 FUN_00ab799c(BIO *param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (BIO *)0x0) {
    ptr = (undefined8 *)BIO_get_data(param_1);
    if ((SSL *)*ptr != (SSL *)0x0) {
      SSL_shutdown((SSL *)*ptr);
    }
    iVar1 = BIO_get_shutdown(param_1);
    if (iVar1 != 0) {
      iVar1 = BIO_get_init(param_1);
      if (iVar1 != 0) {
        SSL_free((SSL *)*ptr);
      }
      BIO_clear_flags(param_1,-1);
      BIO_set_init(param_1,0);
    }
    CRYPTO_free(ptr);
    uVar2 = 1;
  }
  return uVar2;
}

