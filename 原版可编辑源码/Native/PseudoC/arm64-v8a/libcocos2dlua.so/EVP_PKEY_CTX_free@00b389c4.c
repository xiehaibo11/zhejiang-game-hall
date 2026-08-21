
void EVP_PKEY_CTX_free(EVP_PKEY_CTX *ctx)

{
  code *pcVar1;
  
  if (ctx != (EVP_PKEY_CTX *)0x0) {
    if ((*(long *)ctx != 0) && (pcVar1 = *(code **)(*(long *)ctx + 0x18), pcVar1 != (code *)0x0)) {
      (*pcVar1)(ctx);
    }
    EVP_PKEY_free(*(EVP_PKEY **)(ctx + 0x10));
    EVP_PKEY_free(*(EVP_PKEY **)(ctx + 0x18));
    ENGINE_finish(*(ENGINE **)(ctx + 8));
    CRYPTO_free(ctx);
    return;
  }
  return;
}

