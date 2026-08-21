
int SSL_CTX_use_RSAPrivateKey(SSL_CTX *ctx,RSA *rsa)

{
  int iVar1;
  EVP_PKEY *pkey;
  
  if (rsa == (RSA *)0x0) {
    ERR_put_error(0x14,0xb1,0x43,"ssl/ssl_rsa.c",0x1b4);
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0x14,0xb1,6,"ssl/ssl_rsa.c",0x1b8);
    }
    else {
      RSA_up_ref(rsa);
      iVar1 = EVP_PKEY_assign(pkey,6,rsa);
      if (0 < iVar1) {
        iVar1 = FUN_00adaaf8(ctx->mode,pkey);
        EVP_PKEY_free(pkey);
        return iVar1;
      }
      RSA_free(rsa);
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}

