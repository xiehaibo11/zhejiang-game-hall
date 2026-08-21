
void CMAC_CTX_free(CMAC_CTX *ctx)

{
  if (ctx != (CMAC_CTX *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)ctx);
    OPENSSL_cleanse(ctx + 0x48,0x20);
    OPENSSL_cleanse(ctx + 8,0x20);
    OPENSSL_cleanse(ctx + 0x28,0x20);
    OPENSSL_cleanse(ctx + 0x68,0x20);
    *(undefined4 *)(ctx + 0x88) = 0xffffffff;
    CRYPTO_free(ctx);
    return;
  }
  return;
}

