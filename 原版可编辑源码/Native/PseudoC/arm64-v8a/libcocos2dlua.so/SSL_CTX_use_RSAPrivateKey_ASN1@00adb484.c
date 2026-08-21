
int SSL_CTX_use_RSAPrivateKey_ASN1(SSL_CTX *ctx,uchar *d,long len)

{
  int iVar1;
  RSA *rsa;
  uchar *local_28;
  
                    /* try { // try from 00adb494 to 00bdb4f7 has its CatchHandler @ 00adb494
                       catch() { ... } // from try @ 00adb494 with catch @ 00adb494
                       catch() { ... } // from try @ 00adb530 with catch @ 00adb494 */
  local_28 = d;
  rsa = d2i_RSAPrivateKey((RSA **)0x0,&local_28,len);
  if (rsa == (RSA *)0x0) {
    ERR_put_error(0x14,0xb2,0xd,"ssl/ssl_rsa.c",0x1f8);
    iVar1 = 0;
  }
  else {
    iVar1 = SSL_CTX_use_RSAPrivateKey(ctx,rsa);
    RSA_free(rsa);
  }
                    /* try { // try from 00adb4f8 to 00bdb507 has its CatchHandler @ 00adb600 */
  return iVar1;
}

