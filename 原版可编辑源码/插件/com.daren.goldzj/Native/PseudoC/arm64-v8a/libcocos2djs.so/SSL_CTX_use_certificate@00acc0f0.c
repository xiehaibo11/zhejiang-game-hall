
int SSL_CTX_use_certificate(SSL_CTX *ctx,X509 *x)

{
  int iVar1;
  int line;
  
  if (x == (X509 *)0x0) {
    iVar1 = 0x43;
    line = 300;
  }
  else {
    iVar1 = ssl_security_cert(0,ctx,x,0,1);
    if (iVar1 == 1) {
      iVar1 = FUN_00acb7e8(ctx->mode,x);
      return iVar1;
    }
    line = 0x131;
  }
  ERR_put_error(0x14,0xab,iVar1,"ssl/ssl_rsa.c",line);
  return 0;
}

