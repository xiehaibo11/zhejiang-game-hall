
int SSL_check_private_key(SSL *ctx)

{
  int iVar1;
  X509 *x509;
  EVP_PKEY *pkey;
  int line;
  
  if (ctx == (SSL *)0x0) {
    iVar1 = 0x43;
    line = 0x57f;
  }
  else {
    x509 = (X509 *)**(undefined8 **)ctx->verify_callback;
    if (x509 == (X509 *)0x0) {
      iVar1 = 0xb1;
      line = 0x583;
    }
    else {
      pkey = (EVP_PKEY *)(*(undefined8 **)ctx->verify_callback)[1];
      if (pkey != (EVP_PKEY *)0x0) {
        iVar1 = X509_check_private_key(x509,pkey);
        return iVar1;
      }
      iVar1 = 0xbe;
      line = 0x587;
    }
  }
  ERR_put_error(0x14,0xa3,iVar1,"ssl/ssl_lib.c",line);
  return 0;
}

