
int HMAC_CTX_copy(HMAC_CTX *dctx,HMAC_CTX *sctx)

{
  int iVar1;
  
  iVar1 = HMAC_CTX_reset();
  if ((((iVar1 == 0) ||
       (iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).engine,
                                   (EVP_MD_CTX *)(sctx->md_ctx).engine), iVar1 == 0)) ||
      (iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).flags,
                                  (EVP_MD_CTX *)(sctx->md_ctx).flags), iVar1 == 0)) ||
     (iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(dctx->md_ctx).digest,
                                 (EVP_MD_CTX *)(sctx->md_ctx).digest), iVar1 == 0)) {
    EVP_MD_CTX_reset((dctx->md_ctx).engine);
    EVP_MD_CTX_reset((dctx->md_ctx).flags);
    EVP_MD_CTX_reset((dctx->md_ctx).digest);
    dctx->md = (EVP_MD *)0x0;
    *(undefined4 *)&(dctx->md_ctx).md_data = 0;
    OPENSSL_cleanse((void *)((long)&(dctx->md_ctx).md_data + 4),0x80);
    iVar1 = 0;
  }
  else {
    memcpy((void *)((long)&(dctx->md_ctx).md_data + 4),(void *)((long)&(sctx->md_ctx).md_data + 4),
           0x80);
    iVar1 = 1;
    *(undefined4 *)&(dctx->md_ctx).md_data = *(undefined4 *)&(sctx->md_ctx).md_data;
    dctx->md = sctx->md;
  }
  return iVar1;
}

