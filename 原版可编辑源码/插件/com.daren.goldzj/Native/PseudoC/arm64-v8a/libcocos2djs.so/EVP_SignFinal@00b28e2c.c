
int EVP_SignFinal(EVP_MD_CTX *ctx,uchar *md,uint *s,EVP_PKEY *pkey)

{
  int iVar1;
  EVP_PKEY_CTX *ctx_00;
  EVP_MD *p2;
  EVP_MD_CTX *out;
  size_t local_90;
  uint local_84;
  uchar auStack_80 [64];
  
  local_84 = 0;
  *s = 0;
  iVar1 = EVP_MD_CTX_test_flags(ctx,0x200);
  if (iVar1 == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_put_error(6,0x6b,0x41,"crypto/evp/p_sign.c",0x22);
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
      goto LAB_00b28f60;
    }
  }
  iVar1 = EVP_PKEY_size(pkey);
  local_90 = (size_t)iVar1;
  ctx_00 = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
  if ((ctx_00 != (EVP_PKEY_CTX *)0x0) && (iVar1 = EVP_PKEY_sign_init(ctx_00), 0 < iVar1)) {
    p2 = EVP_MD_CTX_md(ctx);
    iVar1 = EVP_PKEY_CTX_ctrl(ctx_00,-1,0xf8,1,0,p2);
    if ((0 < iVar1) &&
       (iVar1 = EVP_PKEY_sign(ctx_00,md,&local_90,auStack_80,(ulong)local_84), 0 < iVar1)) {
      *s = (uint)local_90;
      iVar1 = 1;
      goto LAB_00b28f60;
    }
  }
  iVar1 = 0;
LAB_00b28f60:
  EVP_PKEY_CTX_free(ctx_00);
  return iVar1;
}

