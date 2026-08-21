
undefined4
FUN_00b3cd68(EVP_MD *param_1,uchar *param_2,int param_3,void *param_4,size_t param_5,uchar *param_6,
            ulong param_7)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *out;
  EVP_MD_CTX *out_00;
  EVP_MD_CTX *ctx;
  EVP_PKEY *pkey;
  ulong uVar4;
  undefined4 uVar5;
  size_t local_b0;
  size_t local_a8;
  uchar auStack_a0 [64];
  
  iVar2 = EVP_MD_size(param_1);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: chunk >= 0","crypto/kdf/tls1_prf.c",0xb1);
  }
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  out_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  uVar5 = 0;
  pkey = (EVP_PKEY *)0x0;
  if (((out == (EVP_MD_CTX *)0x0) || (out_00 == (EVP_MD_CTX *)0x0)) || (ctx == (EVP_MD_CTX *)0x0))
  goto LAB_00b3cfb8;
  EVP_MD_CTX_set_flags(ctx,8);
  pkey = EVP_PKEY_new_mac_key(0x357,(ENGINE *)0x0,param_2,param_3);
  if ((((pkey != (EVP_PKEY *)0x0) &&
       (iVar3 = EVP_DigestSignInit(ctx,(EVP_PKEY_CTX **)0x0,param_1,(ENGINE *)0x0,pkey), iVar3 != 0)
       ) && ((iVar3 = EVP_MD_CTX_copy_ex(out,ctx), iVar3 != 0 &&
             ((param_4 == (void *)0x0 || (iVar3 = EVP_DigestUpdate(out,param_4,param_5), iVar3 != 0)
              ))))) &&
     ((iVar3 = EVP_DigestSignFinal(out,auStack_a0,&local_a8), iVar3 != 0 &&
      (iVar3 = EVP_MD_CTX_copy_ex(out,ctx), iVar3 != 0)))) {
    uVar4 = (ulong)iVar2;
    if (param_4 == (void *)0x0) {
      while (iVar2 = EVP_DigestUpdate(out,auStack_a0,local_a8), iVar2 != 0) {
        if (param_7 <= uVar4) goto LAB_00b3cf88;
        iVar2 = EVP_MD_CTX_copy_ex(out_00,out);
        if (((iVar2 == 0) ||
            (iVar2 = EVP_DigestSignFinal(out,param_6,&local_b0), sVar1 = local_b0, iVar2 == 0)) ||
           (iVar2 = EVP_DigestSignFinal(out_00,auStack_a0,&local_a8), iVar2 == 0)) break;
        param_7 = param_7 - sVar1;
        param_6 = param_6 + sVar1;
        iVar2 = EVP_MD_CTX_copy_ex(out,ctx);
        if (iVar2 == 0) break;
      }
    }
    else {
      while (((iVar2 = EVP_DigestUpdate(out,auStack_a0,local_a8), iVar2 != 0 &&
              ((param_7 <= uVar4 || (iVar2 = EVP_MD_CTX_copy_ex(out_00,out), iVar2 != 0)))) &&
             (iVar2 = EVP_DigestUpdate(out,param_4,param_5), iVar2 != 0))) {
        if (param_7 <= uVar4) goto LAB_00b3cf88;
        iVar2 = EVP_DigestSignFinal(out,param_6,&local_b0);
        sVar1 = local_b0;
        if ((iVar2 == 0) || (iVar2 = EVP_DigestSignFinal(out_00,auStack_a0,&local_a8), iVar2 == 0))
        break;
        param_7 = param_7 - sVar1;
        param_6 = param_6 + sVar1;
        iVar2 = EVP_MD_CTX_copy_ex(out,ctx);
        if (iVar2 == 0) break;
      }
    }
  }
LAB_00b3cfb4:
  uVar5 = 0;
LAB_00b3cfb8:
  EVP_PKEY_free(pkey);
  EVP_MD_CTX_free(out);
  EVP_MD_CTX_free(out_00);
  EVP_MD_CTX_free(ctx);
  OPENSSL_cleanse(auStack_a0,0x40);
  return uVar5;
LAB_00b3cf88:
  iVar2 = EVP_DigestSignFinal(out,auStack_a0,&local_a8);
  if (iVar2 != 0) {
    memcpy(param_6,auStack_a0,param_7);
    uVar5 = 1;
    goto LAB_00b3cfb8;
  }
  goto LAB_00b3cfb4;
}

