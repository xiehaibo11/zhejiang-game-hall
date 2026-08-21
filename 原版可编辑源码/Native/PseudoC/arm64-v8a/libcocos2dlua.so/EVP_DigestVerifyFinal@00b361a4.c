
int EVP_DigestVerifyFinal(EVP_MD_CTX *ctx,uchar *sig,size_t siglen)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *out;
  code *pcVar3;
  uint local_84;
  uchar auStack_80 [64];
  
  local_84 = 0;
  pcVar3 = *(code **)(*(long *)ctx->pctx + 0x88);
  if ((*(byte *)((long)&ctx->flags + 1) >> 1 & 1) == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if ((out == (EVP_MD_CTX *)0x0) || (iVar1 = EVP_MD_CTX_copy_ex(out,ctx), iVar1 == 0)) {
      return -1;
    }
    if (pcVar3 == (code *)0x0) {
      iVar1 = EVP_DigestFinal_ex(out,auStack_80,&local_84);
    }
    else {
      iVar1 = (**(code **)(*(long *)out->pctx + 0x88))(out->pctx,sig,siglen & 0xffffffff,out);
    }
    EVP_MD_CTX_free(out);
    if (pcVar3 != (code *)0x0) {
      return iVar1;
    }
  }
  else {
    if (pcVar3 != (code *)0x0) {
      iVar1 = (*pcVar3)(ctx->pctx,sig,siglen & 0xffffffff,ctx);
      return iVar1;
    }
    iVar1 = EVP_DigestFinal_ex(ctx,auStack_80,&local_84);
  }
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = EVP_PKEY_verify(ctx->pctx,sig,siglen,auStack_80,(ulong)local_84);
  }
  return iVar2;
}

