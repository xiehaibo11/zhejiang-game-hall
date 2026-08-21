
undefined4 * X509_OBJECT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    return puVar1;
  }
  ERR_put_error(0xb,0x96,0x41,"crypto/x509/x509_lu.c",0x19e);
  return (undefined4 *)0x0;
}

