
undefined4
ECDH_KDF_X9_62(uchar *param_1,ulong param_2,void *param_3,ulong param_4,void *param_5,ulong param_6,
              EVP_MD *param_7)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  undefined4 uVar3;
  ulong len;
  ulong uVar4;
  uchar auStack_a4 [64];
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  uVar3 = 0;
  if (((param_4 < 0x40000001) && (param_2 < 0x40000001)) && (param_6 < 0x40000001)) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
      uVar3 = 0;
    }
    else {
      iVar1 = EVP_MD_size(param_7);
      iVar2 = EVP_DigestInit_ex(ctx,param_7,(ENGINE *)0x0);
      if (iVar2 != 0) {
        len = (ulong)iVar1;
        uVar4 = 1;
        do {
          local_62 = (undefined1)(uVar4 >> 8);
          local_63 = (undefined1)(uVar4 >> 0x10);
          local_64 = (undefined1)(uVar4 >> 0x18);
          local_61 = (undefined1)uVar4;
          iVar1 = EVP_DigestUpdate(ctx,param_3,param_4);
          if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx,&local_64,4), iVar1 == 0)) ||
             (iVar1 = EVP_DigestUpdate(ctx,param_5,param_6), iVar1 == 0)) break;
          if (param_2 < len) {
            iVar1 = EVP_DigestFinal(ctx,auStack_a4,(uint *)0x0);
            if (iVar1 != 0) {
              memcpy(param_1,auStack_a4,param_2);
              OPENSSL_cleanse(auStack_a4,len);
LAB_00ba0bb4:
              uVar3 = 1;
              goto LAB_00ba0bc0;
            }
            break;
          }
          iVar1 = EVP_DigestFinal(ctx,param_1,(uint *)0x0);
          if (iVar1 == 0) break;
          if (len == param_2) goto LAB_00ba0bb4;
          param_1 = param_1 + len;
          uVar4 = (ulong)((int)uVar4 + 1);
          iVar1 = EVP_DigestInit_ex(ctx,param_7,(ENGINE *)0x0);
          param_2 = param_2 - len;
        } while (iVar1 != 0);
      }
      uVar3 = 0;
LAB_00ba0bc0:
      EVP_MD_CTX_free(ctx);
    }
  }
  return uVar3;
}

