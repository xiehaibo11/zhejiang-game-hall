
undefined4
FUN_00b8f5b4(undefined8 *param_1,long *param_2,uchar *param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uchar *out;
  undefined4 uVar3;
  int local_8c;
  size_t local_88;
  uchar auStack_80 [64];
  
  uVar1 = EVP_CIPHER_CTX_key_length(*(EVP_CIPHER_CTX **)(param_5 + 0x30));
  local_88 = (size_t)(int)uVar1;
  if (0x40 < uVar1) {
    return 0;
  }
  iVar2 = EVP_PKEY_derive(*(EVP_PKEY_CTX **)(param_5 + 0x28),auStack_80,&local_88);
  if (((iVar2 < 1) ||
      (iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(EVP_CIPHER *)0x0,
                                 (ENGINE *)0x0,auStack_80,(uchar *)0x0,param_6), iVar2 == 0)) ||
     (iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(uchar *)0x0,&local_8c,param_3,
                               param_4), iVar2 == 0)) {
    out = (uchar *)0x0;
  }
  else {
    out = CRYPTO_malloc(local_8c,"crypto/cms/cms_kari.c",0xd0);
    if ((out != (uchar *)0x0) &&
       (iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),out,&local_8c,param_3,param_4)
       , iVar2 != 0)) {
      *param_1 = out;
      *param_2 = (long)local_8c;
      OPENSSL_cleanse(auStack_80,local_88);
      uVar3 = 1;
      goto LAB_00b8f6dc;
    }
  }
  OPENSSL_cleanse(auStack_80,local_88);
  CRYPTO_free(out);
  uVar3 = 0;
LAB_00b8f6dc:
  EVP_CIPHER_CTX_reset(*(undefined8 *)(param_5 + 0x30));
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(param_5 + 0x28));
  *(undefined8 *)(param_5 + 0x28) = 0;
  return uVar3;
}

