
undefined8 FUN_00b23038(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  int iVar4;
  DES_key_schedule *pDVar5;
  DES_cblock *pauVar6;
  ulong uVar7;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar7 = uVar1 & 0xc000000000000000;
    lVar2 = uVar7 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      pDVar5 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar4 = EVP_CIPHER_CTX_encrypting(param_1);
      DES_cfb_encrypt(param_3,out,8,0x4000000000000000,pDVar5,pauVar6,iVar4);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar7;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    pDVar5 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar4 = EVP_CIPHER_CTX_encrypting(param_1);
    DES_cfb_encrypt(param_3,param_2,8,param_4,pDVar5,pauVar6,iVar4);
  }
  return 1;
}

