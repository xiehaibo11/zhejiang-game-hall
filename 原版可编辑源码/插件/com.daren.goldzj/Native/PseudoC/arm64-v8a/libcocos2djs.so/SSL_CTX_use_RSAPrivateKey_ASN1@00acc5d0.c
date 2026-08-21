
int SSL_CTX_use_RSAPrivateKey_ASN1(SSL_CTX *ctx,uchar *d,long len)

{
  int iVar1;
  RSA *rsa;
  uchar *local_28;
  
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
  return iVar1;
}

