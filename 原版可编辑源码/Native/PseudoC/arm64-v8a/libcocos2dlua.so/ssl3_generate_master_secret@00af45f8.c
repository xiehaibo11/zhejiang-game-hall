
int ssl3_generate_master_secret(long param_1,uchar *param_2,void *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  size_t cnt;
  ulong uVar4;
  ulong uVar5;
  uchar auStack_90 [64];
  uint local_44;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_put_error(0x14,0x184,0x41,"ssl/s3_enc.c",0x1d5);
    return 0;
  }
  iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),(ENGINE *)0x0);
  if ((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,"A",1), 0 < iVar3)) {
    cnt = (size_t)param_4;
    iVar3 = EVP_DigestUpdate(ctx,param_3,cnt);
    if ((((0 < iVar3) &&
         (((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20), 0 < iVar3
           && (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
              0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)))) &&
        (((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xd8),
                                     (ENGINE *)0x0), 0 < iVar3 &&
          (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)) &&
         (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)))) &&
       (iVar3 = EVP_DigestFinal_ex(ctx,param_2,&local_44), uVar1 = local_44, 0 < iVar3)) {
      uVar4 = (ulong)local_44;
      iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),(ENGINE *)0x0);
      if ((((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,&DAT_01291514,2), 0 < iVar3)) &&
          ((iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3 &&
           ((((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
              0 < iVar3 &&
              (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
              0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)) &&
            ((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xd8),
                                        (ENGINE *)0x0), 0 < iVar3 &&
             (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)))))))) &&
         (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)) {
        iVar3 = EVP_DigestFinal_ex(ctx,param_2 + uVar4,&local_44);
        uVar2 = local_44;
        if (0 < iVar3) {
          uVar5 = (ulong)local_44;
          iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)(*(long *)(param_1 + 0x1b8) + 0xe0),
                                    (ENGINE *)0x0);
          if (((0 < iVar3) && (iVar3 = EVP_DigestUpdate(ctx,&DAT_013cb309,3), 0 < iVar3)) &&
             ((((iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3 &&
                (((iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0xb0),0x20),
                  0 < iVar3 &&
                  (iVar3 = EVP_DigestUpdate(ctx,(void *)(*(long *)(param_1 + 0x90) + 0x90),0x20),
                  0 < iVar3)) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_90,&local_44), 0 < iVar3)))
                ) && (((iVar3 = EVP_DigestInit_ex(ctx,*(EVP_MD **)
                                                       (*(long *)(param_1 + 0x1b8) + 0xd8),
                                                  (ENGINE *)0x0), 0 < iVar3 &&
                       (iVar3 = EVP_DigestUpdate(ctx,param_3,cnt), 0 < iVar3)) &&
                      (iVar3 = EVP_DigestUpdate(ctx,auStack_90,(ulong)local_44), 0 < iVar3)))) &&
              (iVar3 = EVP_DigestFinal_ex(ctx,param_2 + uVar4 + uVar5,&local_44), 0 < iVar3)))) {
            iVar3 = local_44 + uVar2 + uVar1;
            goto LAB_00af497c;
          }
        }
      }
    }
  }
  ERR_put_error(0x14,0x184,0x44,"ssl/s3_enc.c",0x1e6);
  iVar3 = 0;
LAB_00af497c:
  EVP_MD_CTX_free(ctx);
  OPENSSL_cleanse(auStack_90,0x40);
  return iVar3;
}

