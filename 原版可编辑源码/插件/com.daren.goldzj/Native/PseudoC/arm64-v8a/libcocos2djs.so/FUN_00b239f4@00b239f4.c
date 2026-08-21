
undefined8 FUN_00b239f4(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  uchar *puVar2;
  int iVar3;
  DES_key_schedule *pDVar4;
  long lVar5;
  long lVar6;
  DES_cblock *pauVar7;
  long lVar8;
  ulong uVar9;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar9 = uVar1 & 0xc000000000000000;
    lVar8 = uVar9 + 0x4000000000000000;
    puVar2 = param_3 + lVar8;
    out = param_2;
    do {
      pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pauVar7 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      DES_ede3_cfb_encrypt
                (param_3,out,8,0x4000000000000000,pDVar4,(DES_key_schedule *)(lVar5 + 0x80),
                 (DES_key_schedule *)(lVar6 + 0x100),pauVar7,iVar3);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_4 = uVar1 - uVar9;
    param_2 = param_2 + lVar8;
    param_3 = puVar2;
  }
  if (param_4 != 0) {
    pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar8 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pauVar7 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    DES_ede3_cfb_encrypt
              (param_3,param_2,8,param_4,pDVar4,(DES_key_schedule *)(lVar8 + 0x80),
               (DES_key_schedule *)(lVar5 + 0x100),pauVar7,iVar3);
  }
  return 1;
}

