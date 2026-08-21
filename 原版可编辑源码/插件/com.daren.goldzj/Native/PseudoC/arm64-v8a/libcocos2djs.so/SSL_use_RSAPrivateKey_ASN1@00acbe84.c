
int SSL_use_RSAPrivateKey_ASN1(SSL *ssl,uchar *d,long len)

{
  int iVar1;
  RSA *rsa;
  uchar *local_28;
  
  local_28 = d;
                    /* catch() { ... } // from try @ 00acbe24 with catch @ 00acbe9c */
  rsa = d2i_RSAPrivateKey((RSA **)0x0,&local_28,len);
  if (rsa == (RSA *)0x0) {
    ERR_put_error(0x14,0xcd,0xd,"ssl/ssl_rsa.c",0xd8);
    iVar1 = 0;
  }
  else {
    iVar1 = SSL_use_RSAPrivateKey(ssl,rsa);
    RSA_free(rsa);
  }
  return iVar1;
}

