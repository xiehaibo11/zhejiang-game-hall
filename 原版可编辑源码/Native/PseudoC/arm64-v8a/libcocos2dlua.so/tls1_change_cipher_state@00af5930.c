
undefined8 tls1_change_cipher_state(long param_1,uint param_2)

{
  uchar *key;
  uchar *iv;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int arg;
  int iVar6;
  int iVar7;
  COMP_CTX *pCVar8;
  ulong uVar9;
  EVP_PKEY *pkey;
  void *__src;
  int iVar10;
  long lVar11;
  EVP_CIPHER *cipher;
  EVP_CIPHER_CTX *pEVar12;
  long lVar13;
  void *pvVar14;
  int iVar15;
  int *piVar16;
  EVP_MD *type;
  EVP_MD_CTX *local_138;
  uchar *local_130;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  lVar11 = *(long *)(param_1 + 0x90);
  cipher = *(EVP_CIPHER **)(lVar11 + 0x268);
  type = *(EVP_MD **)(lVar11 + 0x270);
  iVar6 = *(int *)(lVar11 + 0x278);
  lVar13 = *(long *)(lVar11 + 0x280);
  uVar2 = *(uint *)(*(long *)(lVar11 + 0x228) + 0x38);
  uVar3 = *(uint *)(param_1 + 0x110);
  if ((param_2 & 1) == 0) {
    pEVar12 = *(EVP_CIPHER_CTX **)(param_1 + 0x138);
    uVar1 = uVar3 | 2;
    if ((uVar2 & 0x10000) == 0) {
      uVar1 = uVar3 & 0xfffffffd;
    }
    *(uint *)(param_1 + 0x110) = uVar1;
    if ((pEVar12 == (EVP_CIPHER_CTX *)0x0) ||
       (uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68), (uVar2 >> 3 & 1) != 0))
    {
      pEVar12 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x138) = pEVar12;
      if (pEVar12 == (EVP_CIPHER_CTX *)0x0) goto LAB_00af5b60;
      bVar4 = false;
      if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0)
      goto LAB_00af59b4;
LAB_00af5a10:
      local_138 = (EVP_MD_CTX *)ssl_replace_hash(param_1 + 0x140,0);
      if (local_138 == (EVP_MD_CTX *)0x0) goto LAB_00af5b60;
    }
    else {
      bVar4 = true;
      if ((uVar2 >> 3 & 1) == 0) goto LAB_00af5a10;
LAB_00af59b4:
      local_138 = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (local_138 == (EVP_MD_CTX *)0x0) goto LAB_00af5b60;
      *(EVP_MD_CTX **)(param_1 + 0x140) = local_138;
    }
    COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (lVar13 != 0) {
      pCVar8 = COMP_CTX_new(*(COMP_METHOD **)(lVar13 + 0x10));
      *(COMP_CTX **)(param_1 + 0x128) = pCVar8;
      if (pCVar8 == (COMP_CTX *)0x0) {
        iVar6 = 0x8e;
        iVar7 = 0xc5;
        goto LAB_00af5dfc;
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      RECORD_LAYER_reset_write_sequence(param_1 + 0x3a0);
    }
    lVar11 = *(long *)(param_1 + 0x90);
    local_130 = (uchar *)(lVar11 + 0x50);
    piVar16 = (int *)(lVar11 + 0x4c);
  }
  else {
    pEVar12 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
    uVar1 = uVar3 | 1;
    if ((uVar2 & 0x10000) == 0) {
      uVar1 = uVar3 & 0xfffffffe;
    }
    *(uint *)(param_1 + 0x110) = uVar1;
    if (pEVar12 == (EVP_CIPHER_CTX *)0x0) {
      pEVar12 = EVP_CIPHER_CTX_new();
      *(EVP_CIPHER_CTX **)(param_1 + 0x118) = pEVar12;
      if (pEVar12 == (EVP_CIPHER_CTX *)0x0) goto LAB_00af5b60;
      EVP_CIPHER_CTX_reset();
      pEVar12 = *(EVP_CIPHER_CTX **)(param_1 + 0x118);
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_138 = (EVP_MD_CTX *)ssl_replace_hash(param_1 + 0x120,0);
    if (local_138 == (EVP_MD_CTX *)0x0) {
LAB_00af5b60:
      iVar6 = 0x41;
      iVar7 = 0x15c;
      goto LAB_00af5dfc;
    }
    COMP_CTX_free(*(COMP_CTX **)(param_1 + 0x130));
    *(undefined8 *)(param_1 + 0x130) = 0;
    if (lVar13 != 0) {
      pCVar8 = COMP_CTX_new(*(COMP_METHOD **)(lVar13 + 0x10));
      *(COMP_CTX **)(param_1 + 0x130) = pCVar8;
      if (pCVar8 == (COMP_CTX *)0x0) {
        iVar6 = 0x8e;
        iVar7 = 0x9e;
        goto LAB_00af5dfc;
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      RECORD_LAYER_reset_read_sequence(param_1 + 0x3a0);
    }
    lVar11 = *(long *)(param_1 + 0x90);
    local_130 = (uchar *)(lVar11 + 0xc);
    piVar16 = (int *)(lVar11 + 8);
  }
  if (bVar4) {
    EVP_CIPHER_CTX_reset(pEVar12);
    lVar11 = *(long *)(param_1 + 0x90);
  }
  iVar7 = *(int *)(lVar11 + 0x27c);
  pvVar14 = *(void **)(lVar11 + 0x260);
  *piVar16 = iVar7;
  iVar5 = EVP_CIPHER_key_length(cipher);
  uVar9 = EVP_CIPHER_flags(cipher);
  if (((uVar9 & 0xf0007) == 6) || (uVar9 = EVP_CIPHER_flags(cipher), (uVar9 & 0xf0007) == 7)) {
    arg = 4;
  }
  else {
    arg = EVP_CIPHER_iv_length(cipher);
  }
  if ((param_2 == 0x21) || (param_2 == 0x12)) {
    iVar15 = iVar7 * 2;
    iVar5 = iVar15 + iVar5 * 2;
    iVar10 = iVar5 + arg * 2;
    __src = pvVar14;
  }
  else {
    iVar15 = iVar5 + iVar7 * 2;
    iVar5 = iVar15 + iVar5 + arg;
    __src = (void *)((long)pvVar14 + (long)iVar7);
    iVar10 = iVar5 + arg;
  }
  if (*(int *)(*(long *)(param_1 + 0x90) + 600) < iVar10) {
    iVar6 = 0x44;
    iVar7 = 0xf6;
  }
  else {
    memcpy(local_130,__src,(long)iVar7);
    uVar9 = EVP_CIPHER_flags(cipher);
    if (((uint)uVar9 >> 0x15 & 1) == 0) {
      pkey = EVP_PKEY_new_mac_key(iVar6,(ENGINE *)0x0,local_130,*piVar16);
      if ((pkey == (EVP_PKEY *)0x0) ||
         (iVar6 = EVP_DigestSignInit(local_138,(EVP_PKEY_CTX **)0x0,type,(ENGINE *)0x0,pkey),
         iVar6 < 1)) {
        EVP_PKEY_free(pkey);
        iVar6 = 0x44;
        iVar7 = 0x102;
        goto LAB_00af5dfc;
      }
      EVP_PKEY_free(pkey);
    }
    key = (uchar *)((long)pvVar14 + (long)iVar15);
    iv = (uchar *)((long)pvVar14 + (long)iVar5);
    uVar9 = EVP_CIPHER_flags(cipher);
    if ((uVar9 & 0xf0007) == 6) {
      iVar6 = EVP_CipherInit_ex(pEVar12,cipher,(ENGINE *)0x0,key,(uchar *)0x0,param_2 & 2);
      if ((iVar6 == 0) || (iVar6 = EVP_CIPHER_CTX_ctrl(pEVar12,0x12,arg,iv), iVar6 == 0)) {
        iVar6 = 0x44;
        iVar7 = 0x113;
        goto LAB_00af5dfc;
      }
    }
    else {
      uVar9 = EVP_CIPHER_flags(cipher);
      if ((uVar9 & 0xf0007) == 7) {
        iVar6 = 0x10;
        if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x90) + 0x228) + 0x1c) & 0x30000) != 0) {
          iVar6 = 8;
        }
        iVar7 = EVP_CipherInit_ex(pEVar12,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,param_2 & 2
                                 );
        if ((((iVar7 == 0) || (iVar7 = EVP_CIPHER_CTX_ctrl(pEVar12,9,0xc,(void *)0x0), iVar7 == 0))
            || (iVar6 = EVP_CIPHER_CTX_ctrl(pEVar12,0x11,iVar6,(void *)0x0), iVar6 == 0)) ||
           ((iVar6 = EVP_CIPHER_CTX_ctrl(pEVar12,0x12,arg,iv), iVar6 == 0 ||
            (iVar6 = EVP_CipherInit_ex(pEVar12,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,(uchar *)0x0,-1),
            iVar6 == 0)))) {
          iVar6 = 0x44;
          iVar7 = 0x122;
          goto LAB_00af5dfc;
        }
      }
      else {
        iVar6 = EVP_CipherInit_ex(pEVar12,cipher,(ENGINE *)0x0,key,iv,param_2 & 2);
        if (iVar6 == 0) {
          iVar6 = 0x44;
          iVar7 = 0x127;
          goto LAB_00af5dfc;
        }
      }
    }
    uVar9 = EVP_CIPHER_flags(cipher);
    if ((((uint)uVar9 >> 0x15 & 1) == 0) ||
       ((*piVar16 == 0 || (iVar6 = EVP_CIPHER_CTX_ctrl(pEVar12,0x17,*piVar16,local_130), iVar6 != 0)
        ))) {
      OPENSSL_cleanse(auStack_a0,0x40);
      OPENSSL_cleanse(auStack_e0,0x40);
      OPENSSL_cleanse(auStack_100,0x20);
      OPENSSL_cleanse(auStack_120,0x20);
      return 1;
    }
    iVar6 = 0x44;
    iVar7 = 0x12f;
  }
LAB_00af5dfc:
  ERR_put_error(0x14,0xd1,iVar6,"ssl/t1_enc.c",iVar7);
  OPENSSL_cleanse(auStack_a0,0x40);
  OPENSSL_cleanse(auStack_e0,0x40);
  OPENSSL_cleanse(auStack_100,0x20);
  OPENSSL_cleanse(auStack_120,0x20);
  return 0;
}

