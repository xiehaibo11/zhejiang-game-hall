
int EVP_MD_CTX_copy_ex(EVP_MD_CTX *out,EVP_MD_CTX *in)

{
  int iVar1;
  EVP_PKEY_CTX *pEVar2;
  _func_1081 *UNRECOVERED_JUMPTABLE;
  int line;
  EVP_MD *pEVar3;
  void *__dest;
  ulong uVar4;
  ENGINE *pEVar5;
  
  if ((in == (EVP_MD_CTX *)0x0) || (pEVar3 = in->digest, pEVar3 == (EVP_MD *)0x0)) {
    iVar1 = 0x6f;
    line = 0xbb;
LAB_00b1f2e4:
    ERR_put_error(6,0x6e,iVar1,"crypto/evp/digest.c",line);
LAB_00b1f2e8:
    iVar1 = 0;
  }
  else {
    if (in->engine != (ENGINE *)0x0) {
      iVar1 = ENGINE_init(in->engine);
      if (iVar1 == 0) {
        iVar1 = 0x26;
        line = 0xc1;
        goto LAB_00b1f2e4;
      }
      pEVar3 = in->digest;
    }
    if (out->digest == pEVar3) {
      __dest = out->md_data;
      EVP_MD_CTX_set_flags(out,4);
    }
    else {
      __dest = (void *)0x0;
    }
    EVP_MD_CTX_reset(out);
    uVar4 = in->flags;
    out->md_data = in->md_data;
    out->flags = uVar4;
    pEVar2 = in->pctx;
    out->update = in->update;
    out->pctx = pEVar2;
    pEVar5 = in->engine;
    pEVar3 = in->digest;
    out->md_data = (void *)0x0;
    out->pctx = (EVP_PKEY_CTX *)0x0;
    out->engine = pEVar5;
    out->digest = pEVar3;
    if ((in->md_data != (void *)0x0) && (iVar1 = *(int *)((long)&out->digest->sign + 4), iVar1 != 0)
       ) {
      if (__dest == (void *)0x0) {
        __dest = CRYPTO_malloc(iVar1,"crypto/evp/digest.c",0xd9);
        out->md_data = __dest;
        if (__dest == (void *)0x0) {
          iVar1 = 0x41;
          line = 0xdb;
          goto LAB_00b1f2e4;
        }
        iVar1 = *(int *)((long)&out->digest->sign + 4);
      }
      else {
        out->md_data = __dest;
      }
      memcpy(__dest,in->md_data,(long)iVar1);
    }
    out->update = in->update;
    if (in->pctx != (EVP_PKEY_CTX *)0x0) {
      pEVar2 = EVP_PKEY_CTX_dup(in->pctx);
      out->pctx = pEVar2;
      if (pEVar2 == (EVP_PKEY_CTX *)0x0) {
        EVP_MD_CTX_reset(out);
        goto LAB_00b1f2e8;
      }
    }
    UNRECOVERED_JUMPTABLE = out->digest->copy;
    if (UNRECOVERED_JUMPTABLE != (_func_1081 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1f3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (*UNRECOVERED_JUMPTABLE)(out,in);
      return iVar1;
    }
    iVar1 = 1;
  }
  return iVar1;
}

