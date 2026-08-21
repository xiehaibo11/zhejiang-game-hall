
int EVP_DecryptInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,uchar *key,uchar *iv)

{
  int iVar1;
  _func_1091 *p_Var2;
  
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    if (ctx->cipher != (EVP_CIPHER *)0x0) {
      p_Var2 = ctx->cipher->cleanup;
      if ((p_Var2 != (_func_1091 *)0x0) && (iVar1 = (*p_Var2)(ctx), iVar1 == 0)) goto LAB_00b34a40;
      if ((ctx->cipher_data != (void *)0x0) && (iVar1 = ctx->cipher->ctx_size, iVar1 != 0)) {
        OPENSSL_cleanse(ctx->cipher_data,(long)iVar1);
      }
    }
    CRYPTO_free(ctx->cipher_data);
    ENGINE_finish(ctx->engine);
    memset(ctx,0,0xa8);
  }
LAB_00b34a40:
  iVar1 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,key,iv,0);
  return iVar1;
}

