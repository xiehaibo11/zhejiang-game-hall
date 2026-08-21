
undefined4 FUN_00b274d4(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  SHA_CTX *c;
  int iVar1;
  MD5_CTX *c_00;
  MD5_CTX *pMVar2;
  uchar auStack_94 [20];
  uchar auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  c_00 = (MD5_CTX *)EVP_MD_CTX_md_data();
  if ((param_2 == 0x1d) && (param_3 == 0x30)) {
    pMVar2 = (MD5_CTX *)EVP_MD_CTX_md_data(param_1);
    iVar1 = MD5_Update(pMVar2,param_4,0x30);
    if ((iVar1 != 0) && (iVar1 = SHA1_Update((SHA_CTX *)(pMVar2 + 1),param_4,0x30), 0 < iVar1)) {
      local_50 = 0x3636363636363636;
      uStack_48 = 0x3636363636363636;
      local_60 = 0x3636363636363636;
      uStack_58 = 0x3636363636363636;
      local_70 = 0x3636363636363636;
      uStack_68 = 0x3636363636363636;
      iVar1 = MD5_Update(c_00,&local_70,0x30);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = MD5_Final(auStack_80,c_00);
      if (iVar1 == 0) {
        return 0;
      }
      c = (SHA_CTX *)(c_00 + 1);
      iVar1 = SHA1_Update(c,&local_70,0x28);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = SHA1_Final(auStack_94,c);
      if (iVar1 == 0) {
        return 0;
      }
      pMVar2 = (MD5_CTX *)EVP_MD_CTX_md_data(param_1);
      iVar1 = MD5_Init(pMVar2);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = SHA1_Init((SHA_CTX *)(pMVar2 + 1));
      if (iVar1 == 0) {
        return 0;
      }
      pMVar2 = (MD5_CTX *)EVP_MD_CTX_md_data(param_1);
      iVar1 = MD5_Update(pMVar2,param_4,0x30);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = SHA1_Update((SHA_CTX *)(pMVar2 + 1),param_4,0x30);
      if (0 < iVar1) {
        local_50 = 0x5c5c5c5c5c5c5c5c;
        uStack_48 = 0x5c5c5c5c5c5c5c5c;
        local_60 = 0x5c5c5c5c5c5c5c5c;
        uStack_58 = 0x5c5c5c5c5c5c5c5c;
        local_70 = 0x5c5c5c5c5c5c5c5c;
        uStack_68 = 0x5c5c5c5c5c5c5c5c;
        iVar1 = MD5_Update(c_00,&local_70,0x30);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = MD5_Update(c_00,auStack_80,0x10);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = SHA1_Update(c,&local_70,0x28);
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = SHA1_Update(c,auStack_94,0x14);
        if (iVar1 != 0) {
          OPENSSL_cleanse(auStack_80,0x10);
          OPENSSL_cleanse(auStack_94,0x14);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

