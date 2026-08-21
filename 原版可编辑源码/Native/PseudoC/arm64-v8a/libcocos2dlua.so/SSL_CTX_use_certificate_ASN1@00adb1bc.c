
int SSL_CTX_use_certificate_ASN1(SSL_CTX *ctx,int len,uchar *d)

{
  int iVar1;
  X509 *a;
  uchar *local_28;
  
  local_28 = d;
  a = d2i_X509((X509 **)0x0,&local_28,(long)len);
  if (a == (X509 *)0x0) {
    ERR_put_error(0x14,0xac,0xd,"ssl/ssl_rsa.c",0x1a4);
    iVar1 = 0;
  }
  else {
    iVar1 = ssl_security_cert(0,ctx,a,0,1);
    if (iVar1 == 1) {
      iVar1 = FUN_00ada69c(ctx->mode,a);
    }
    else {
      ERR_put_error(0x14,0xab,iVar1,"ssl/ssl_rsa.c",0x131);
      iVar1 = 0;
    }
    X509_free(a);
  }
  return iVar1;
}

