
int CMAC_Init(CMAC_CTX *ctx,void *key,size_t keylen,EVP_CIPHER *cipher,ENGINE *impl)

{
  CMAC_CTX CVar1;
  CMAC_CTX CVar2;
  int iVar3;
  uint inl;
  EVP_CIPHER *pEVar4;
  size_t len;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  CMAC_CTX *pCVar9;
  
  if ((((keylen == 0) && (key == (void *)0x0)) && (cipher == (EVP_CIPHER *)0x0)) &&
     (impl == (ENGINE *)0x0)) {
    if (*(int *)(ctx + 0x88) == -1) {
      return 0;
    }
    iVar3 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                               "");
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = EVP_CIPHER_CTX_block_size(*(EVP_CIPHER_CTX **)ctx);
    len = (size_t)iVar3;
  }
  else {
    if (cipher == (EVP_CIPHER *)0x0) {
      if (key == (void *)0x0) {
        return 1;
      }
    }
    else {
      iVar3 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,cipher,impl,(uchar *)0x0,(uchar *)0x0);
      if (iVar3 == 0) {
        return 0;
      }
      if (key == (void *)0x0) {
        return (uint)(iVar3 != 0);
      }
    }
    pEVar4 = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)ctx);
    if (pEVar4 == (EVP_CIPHER *)0x0) {
      return 0;
    }
    iVar3 = EVP_CIPHER_CTX_set_key_length(*(EVP_CIPHER_CTX **)ctx,(int)keylen);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,key,"");
    if (iVar3 == 0) {
      return 0;
    }
    inl = EVP_CIPHER_CTX_block_size(*(EVP_CIPHER_CTX **)ctx);
    iVar3 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),"",inl);
    if (iVar3 == 0) {
      return 0;
    }
    CVar1 = ctx[0x48];
    bVar5 = (char)CVar1 << 1;
    if ((int)inl < 2) {
      lVar6 = 0;
    }
    else {
      uVar7 = (ulong)(inl - 1);
      pCVar9 = ctx + 0x49;
      do {
        uVar7 = uVar7 - 1;
        CVar2 = (CMAC_CTX)(bVar5 | (byte)*pCVar9 >> 7);
        bVar5 = (char)*pCVar9 << 1;
        pCVar9[-0x41] = CVar2;
        pCVar9 = pCVar9 + 1;
      } while (uVar7 != 0);
      lVar6 = (long)(((ulong)(inl - 2) << 0x20) + 0x100000000) >> 0x20;
    }
    bVar8 = 0x87;
    if (inl != 0x10) {
      bVar8 = 0x1b;
    }
    ctx[lVar6 + 8] = (CMAC_CTX)(bVar5 ^ bVar8 & (char)CVar1 >> 7);
    CVar1 = ctx[8];
    bVar5 = (char)CVar1 << 1;
    if ((int)inl < 2) {
      lVar6 = 0;
    }
    else {
      uVar7 = (ulong)(inl - 1);
      pCVar9 = ctx + 0x28;
      do {
        uVar7 = uVar7 - 1;
        CVar2 = (CMAC_CTX)(bVar5 | (byte)pCVar9[-0x1f] >> 7);
        bVar5 = (char)pCVar9[-0x1f] << 1;
        *pCVar9 = CVar2;
        pCVar9 = pCVar9 + 1;
      } while (uVar7 != 0);
      lVar6 = (long)(((ulong)(inl - 2) << 0x20) + 0x100000000) >> 0x20;
    }
    len = (size_t)(int)inl;
    ctx[lVar6 + 0x28] = (CMAC_CTX)(bVar5 ^ bVar8 & (char)CVar1 >> 7);
    OPENSSL_cleanse(ctx + 0x48,len);
    iVar3 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,
                               "");
    if (iVar3 == 0) {
      return 0;
    }
  }
  memset(ctx + 0x48,0,len);
  *(undefined4 *)(ctx + 0x88) = 0;
  return 1;
}

