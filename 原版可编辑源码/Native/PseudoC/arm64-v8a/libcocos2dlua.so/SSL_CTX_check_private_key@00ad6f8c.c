
int SSL_CTX_check_private_key(SSL_CTX *ctx)

{
  int iVar1;
  X509 *x509;
  EVP_PKEY *pkey;
  int line;
  
  if (ctx != (SSL_CTX *)0x0) {
    x509 = (X509 *)**(undefined8 **)ctx->mode;
    if (x509 != (X509 *)0x0) {
      pkey = (EVP_PKEY *)(*(undefined8 **)ctx->mode)[1];
      if (pkey != (EVP_PKEY *)0x0) {
        iVar1 = X509_check_private_key(x509,pkey);
        return iVar1;
      }
      iVar1 = 0xbe;
      line = 0x574;
      goto LAB_00ad6fec;
    }
  }
  iVar1 = 0xb1;
  line = 0x570;
LAB_00ad6fec:
  ERR_put_error(0x14,0xa8,iVar1,"ssl/ssl_lib.c",line);
  return 0;
}

