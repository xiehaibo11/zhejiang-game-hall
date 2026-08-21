
uchar * HMAC(EVP_MD *evp_md,void *key,int key_len,uchar *d,size_t n,uchar *md,uint *md_len)

{
  uchar *md_00;
  undefined *key_00;
  int iVar1;
  HMAC_CTX *ctx;
  uchar auStack_94 [64];
  uint local_54;
  
  md_00 = (uchar *)0x17848a0;
  if (md != (uchar *)0x0) {
    md_00 = md;
  }
  ctx = (HMAC_CTX *)CRYPTO_zalloc(0xa8,"crypto/hmac/hmac.c",0x7e);
  if (ctx != (HMAC_CTX *)0x0) {
    iVar1 = HMAC_CTX_reset(ctx);
    if (iVar1 == 0) {
      HMAC_CTX_free(ctx);
      ctx = (HMAC_CTX *)0x0;
    }
    else {
      key_00 = &DAT_013e1703;
      if (key_len != 0 || key != (void *)0x0) {
        key_00 = key;
      }
      iVar1 = HMAC_Init_ex(ctx,key_00,key_len,evp_md,(ENGINE *)0x0);
      if (((((iVar1 != 0) && (ctx->md != (EVP_MD *)0x0)) &&
           (iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,d,n), iVar1 != 0)) &&
          ((ctx->md != (EVP_MD *)0x0 &&
           (iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,auStack_94,&local_54),
           iVar1 != 0)))) &&
         ((iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                      (EVP_MD_CTX *)(ctx->md_ctx).flags), iVar1 != 0 &&
          ((iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,auStack_94,(ulong)local_54),
           iVar1 != 0 &&
           (iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,md_00,md_len), iVar1 != 0)
           ))))) {
        EVP_MD_CTX_reset((ctx->md_ctx).engine);
        EVP_MD_CTX_reset((ctx->md_ctx).flags);
        EVP_MD_CTX_reset((ctx->md_ctx).digest);
        ctx->md = (EVP_MD *)0x0;
        *(undefined4 *)&(ctx->md_ctx).md_data = 0;
        OPENSSL_cleanse((void *)((long)&(ctx->md_ctx).md_data + 4),0x80);
        EVP_MD_CTX_free((ctx->md_ctx).engine);
        EVP_MD_CTX_free((ctx->md_ctx).flags);
        EVP_MD_CTX_free((ctx->md_ctx).digest);
        CRYPTO_free(ctx);
        return md_00;
      }
    }
  }
  HMAC_CTX_free(ctx);
  return (uchar *)0x0;
}

