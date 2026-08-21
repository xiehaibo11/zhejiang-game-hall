
int X509V3_EXT_add(X509V3_EXT_METHOD *ext)

{
  int iVar1;
  
  if ((DAT_01d3b220 == 0) && (DAT_01d3b220 = OPENSSL_sk_new(&LAB_00b7129c), DAT_01d3b220 == 0)) {
    iVar1 = 0x1d;
  }
  else {
    iVar1 = OPENSSL_sk_push(DAT_01d3b220,ext);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0x21;
  }
  ERR_put_error(0x22,0x68,0x41,"crypto/x509v3/v3_lib.c",iVar1);
  return 0;
}

