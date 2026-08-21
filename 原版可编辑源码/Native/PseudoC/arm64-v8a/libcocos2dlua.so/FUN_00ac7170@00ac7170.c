
undefined8 FUN_00ac7170(BIO *param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (BIO *)0x0) {
    ptr = (undefined8 *)BIO_get_data(param_1);
    if ((SSL *)*ptr != (SSL *)0x0) {
                    /* try { // try from 00ac7198 to 00bc7233 has its CatchHandler @ 00ac6f5c */
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
                    /* catch() { ... } // from try @ 00ac714c with catch @ 00ac71e4 */
    CRYPTO_free(ptr);
                    /* catch() { ... } // from try @ 00ac7164 with catch @ 00ac71e8 */
    uVar2 = 1;
  }
  return uVar2;
}

