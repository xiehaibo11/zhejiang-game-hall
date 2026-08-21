
int EVP_Digest(void *data,size_t count,uchar *md,uint *size,EVP_MD *type,ENGINE *impl)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_MD *pEVar2;
  uint uVar3;
  
  ctx = (EVP_MD_CTX *)CRYPTO_zalloc(0x30,"crypto/evp/digest.c",0x2e);
  if (ctx == (EVP_MD_CTX *)0x0) {
    uVar3 = 0;
  }
  else {
    EVP_MD_CTX_set_flags(ctx,1);
    iVar1 = EVP_DigestInit_ex(ctx,type,impl);
    if ((iVar1 == 0) || (iVar1 = (*ctx->update)(ctx,data,count), iVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      if (0x40 < ctx->digest->md_size) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->digest->md_size <= EVP_MAX_MD_SIZE",
                    "crypto/evp/digest.c",0xa5);
      }
      iVar1 = (*ctx->digest->final)(ctx,md);
      pEVar2 = ctx->digest;
      if (size != (uint *)0x0) {
        *size = pEVar2->md_size;
      }
      if (pEVar2->cleanup != (_func_1082 *)0x0) {
        (*pEVar2->cleanup)(ctx);
        EVP_MD_CTX_set_flags(ctx,2);
        pEVar2 = ctx->digest;
      }
      OPENSSL_cleanse(ctx->md_data,(long)*(int *)((long)&pEVar2->sign + 4));
      uVar3 = (uint)(iVar1 != 0);
    }
    EVP_MD_CTX_reset(ctx);
    CRYPTO_free(ctx);
  }
  return uVar3;
}

