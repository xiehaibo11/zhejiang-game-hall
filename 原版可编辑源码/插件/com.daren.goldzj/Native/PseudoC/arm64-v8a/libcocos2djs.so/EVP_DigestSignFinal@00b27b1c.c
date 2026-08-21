
/* WARNING: Removing unreachable block (ram,0x00b27cbc) */

int EVP_DigestSignFinal(EVP_MD_CTX *ctx,uchar *sigret,size_t *siglen)

{
  int iVar1;
  EVP_MD_CTX *out;
  long lVar2;
  EVP_PKEY_CTX *pEVar3;
  code *UNRECOVERED_JUMPTABLE;
  uint local_84;
  uchar auStack_80 [64];
  
  pEVar3 = ctx->pctx;
  lVar2 = *(long *)pEVar3;
  if ((*(byte *)(lVar2 + 4) >> 2 & 1) != 0) {
    if (sigret == (uchar *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x78);
      sigret = (uchar *)0x0;
    }
    else {
      if ((*(byte *)((long)&ctx->flags + 1) >> 1 & 1) == 0) {
        pEVar3 = EVP_PKEY_CTX_dup(pEVar3);
        if (pEVar3 != (EVP_PKEY_CTX *)0x0) {
          iVar1 = (**(code **)(*(long *)pEVar3 + 0x78))(pEVar3,sigret,siglen,ctx);
          EVP_PKEY_CTX_free(pEVar3);
          return iVar1;
        }
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x78);
    }
                    /* WARNING: Could not recover jumptable at 0x00b27c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)(pEVar3,sigret,siglen,ctx);
    return iVar1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x78);
  if (sigret == (uchar *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      iVar1 = EVP_MD_size(ctx->digest);
      if (iVar1 < 0) {
        return 0;
      }
      iVar1 = EVP_PKEY_sign(pEVar3,(uchar *)0x0,siglen,(uchar *)0x0,(long)iVar1);
    }
    else {
      iVar1 = (*UNRECOVERED_JUMPTABLE)(pEVar3,0,siglen,ctx);
    }
  }
  else {
    local_84 = 0;
    if ((*(byte *)((long)&ctx->flags + 1) >> 1 & 1) == 0) {
      out = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (out == (EVP_MD_CTX *)0x0) {
        return 0;
      }
      iVar1 = EVP_MD_CTX_copy_ex(out,ctx);
      if (iVar1 == 0) {
        return 0;
      }
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        iVar1 = EVP_DigestFinal_ex(out,auStack_80,&local_84);
      }
      else {
        iVar1 = (**(code **)(*(long *)out->pctx + 0x78))(out->pctx,sigret,siglen,out);
      }
      EVP_MD_CTX_free(out);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        return iVar1;
      }
    }
    else {
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        iVar1 = (*UNRECOVERED_JUMPTABLE)(pEVar3,sigret,siglen,ctx);
        return iVar1;
      }
      iVar1 = EVP_DigestFinal_ex(ctx,auStack_80,&local_84);
    }
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = EVP_PKEY_sign(ctx->pctx,sigret,siglen,auStack_80,(ulong)local_84);
  }
  if (iVar1 < 1) {
    return 0;
  }
  return 1;
}

