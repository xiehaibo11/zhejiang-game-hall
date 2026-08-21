
undefined8 * CTLOG_new(EVP_PKEY *param_1,char *param_2)

{
  int iVar1;
  undefined8 *ptr;
  char *pcVar2;
  uchar *local_28;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x30,"crypto/ct/ct_log.c",0xed);
  if (ptr == (undefined8 *)0x0) {
    ERR_put_error(0x32,0x75,0x41,"crypto/ct/ct_log.c",0xf0);
  }
  else {
    pcVar2 = CRYPTO_strdup(param_2,"crypto/ct/ct_log.c",0xf4);
    *ptr = pcVar2;
    if (pcVar2 == (char *)0x0) {
      ERR_put_error(0x32,0x75,0x41,"crypto/ct/ct_log.c",0xf6);
    }
    else {
      local_28 = (uchar *)0x0;
      iVar1 = i2d_PUBKEY(param_1,&local_28);
      if (0 < iVar1) {
        SHA256(local_28,(long)iVar1,(uchar *)(ptr + 1));
        CRYPTO_free(local_28);
        ptr[5] = param_1;
        return ptr;
      }
      ERR_put_error(0x32,0x7d,0x71,"crypto/ct/ct_log.c",0x51);
      CRYPTO_free(local_28);
    }
    CRYPTO_free((void *)*ptr);
    EVP_PKEY_free((EVP_PKEY *)ptr[5]);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}

