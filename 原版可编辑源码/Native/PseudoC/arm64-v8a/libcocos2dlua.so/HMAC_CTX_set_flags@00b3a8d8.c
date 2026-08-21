
void HMAC_CTX_set_flags(HMAC_CTX *ctx,ulong flags)

{
  int flags_00;
  
  flags_00 = (int)flags;
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).engine,flags_00);
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).flags,flags_00);
  EVP_MD_CTX_set_flags((EVP_MD_CTX *)(ctx->md_ctx).digest,flags_00);
  return;
}

