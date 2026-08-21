
int SSL_CTX_use_PrivateKey(SSL_CTX *ctx,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = FUN_00acbc44(ctx->mode);
    return iVar1;
  }
  ERR_put_error(0x14,0xae,0x43,"ssl/ssl_rsa.c",0x205);
  return 0;
}

