
EVP_MD * EVP_MD_CTX_md(EVP_MD_CTX *ctx)

{
  EVP_MD *pEVar1;
  
  pEVar1 = (EVP_MD *)0x0;
  if (ctx != (EVP_MD_CTX *)0x0) {
    pEVar1 = ctx->digest;
  }
  return pEVar1;
}

