
int EVP_VerifyFinal(EVP_MD_CTX *ctx,uchar *sigbuf,uint siglen,EVP_PKEY *pkey)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx_00;
  EVP_MD *p2;
  EVP_MD_CTX *out;
  uint local_84;
  uchar auStack_80 [64];
  
  local_84 = 0;
  iVar1 = EVP_MD_CTX_test_flags(ctx,0x200);
  if (iVar1 == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_put_error(6,0x6c,0x41,"crypto/evp/p_verify.c",0x20);
      return 0;
    }
    iVar1 = EVP_MD_CTX_copy_ex(out,ctx);
    if (iVar1 == 0) {
      EVP_MD_CTX_free(out);
      return 0;
    }
    iVar1 = EVP_DigestFinal_ex(out,auStack_80,&local_84);
    EVP_MD_CTX_free(out);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = EVP_DigestFinal_ex(ctx,auStack_80,&local_84);
    if (iVar1 == 0) {
      iVar1 = 0;
      ctx_00 = (EVP_PKEY_CTX *)0x0;
      goto LAB_00b3754c;
    }
  }
  ctx_00 = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
  if ((ctx_00 == (EVP_PKEY_CTX *)0x0) || (iVar1 = EVP_PKEY_verify_init(ctx_00), iVar1 < 1)) {
    iVar1 = -1;
  }
  else {
    p2 = EVP_MD_CTX_md(ctx);
    iVar1 = -1;
    iVar2 = EVP_PKEY_CTX_ctrl(ctx_00,-1,0xf8,1,0,p2);
    if (0 < iVar2) {
      iVar1 = EVP_PKEY_verify(ctx_00,sigbuf,(ulong)siglen,auStack_80,(ulong)local_84);
    }
  }
LAB_00b3754c:
  EVP_PKEY_CTX_free(ctx_00);
  return iVar1;
}

