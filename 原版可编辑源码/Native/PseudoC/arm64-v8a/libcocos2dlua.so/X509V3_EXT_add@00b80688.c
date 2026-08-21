
int X509V3_EXT_add(X509V3_EXT_METHOD *ext)

{
  int iVar1;
  
                    /* try { // try from 00b806b0 to 00c806b7 has its CatchHandler @ 00b808f0 */
  if ((DAT_01784fa0 == 0) && (DAT_01784fa0 = OPENSSL_sk_new(&LAB_00b8071c), DAT_01784fa0 == 0)) {
    iVar1 = 0x1d;
  }
  else {
    iVar1 = OPENSSL_sk_push(DAT_01784fa0,ext);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = 0x21;
  }
  ERR_put_error(0x22,0x68,0x41,"crypto/x509v3/v3_lib.c",iVar1);
  return 0;
}

