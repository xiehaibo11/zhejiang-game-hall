
undefined4 FUN_00b0416c(X509_PUBKEY *param_1,long *param_2,ulong *param_3)

{
  uchar *data;
  int iVar1;
  EVP_MD *type;
  uchar *md;
  undefined4 uVar2;
  uint uStack_44;
  uchar *local_38;
  
  local_38 = (uchar *)0x0;
  md = (uchar *)*param_2;
  if ((((md != (uchar *)0x0) && (0x1f < *param_3)) ||
      (md = CRYPTO_malloc(0x20,"crypto/ct/ct_sct_ctx.c",0xce), md != (uchar *)0x0)) &&
     (iVar1 = i2d_X509_PUBKEY(param_1,&local_38), data = local_38, 0 < iVar1)) {
    type = EVP_sha256();
    iVar1 = EVP_Digest(data,(long)iVar1,md,&uStack_44,type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      if (md == (uchar *)*param_2) {
        md = (uchar *)0x0;
        uVar2 = 1;
      }
      else {
        CRYPTO_free((uchar *)*param_2);
        *param_2 = (long)md;
        *param_3 = 0x20;
        uVar2 = 1;
        md = (uchar *)0x0;
      }
      goto LAB_00b04238;
    }
  }
  uVar2 = 0;
LAB_00b04238:
  CRYPTO_free(md);
  CRYPTO_free(local_38);
  return uVar2;
}

