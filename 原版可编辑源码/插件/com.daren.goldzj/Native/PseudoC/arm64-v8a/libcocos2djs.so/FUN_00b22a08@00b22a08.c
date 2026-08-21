
undefined8 FUN_00b22a08(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  uchar *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  DES_key_schedule *pDVar6;
  DES_cblock *pauVar7;
  ulong uVar8;
  code *pcVar9;
  uchar *output;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  pcVar9 = *(code **)(lVar4 + 0x80);
  if (pcVar9 == (code *)0x0) {
    if (param_4 >> 0x3e != 0) {
      uVar1 = param_4 + 0xc000000000000000;
      uVar8 = uVar1 & 0xc000000000000000;
      lVar4 = uVar8 + 0x4000000000000000;
      puVar2 = param_3 + lVar4;
      output = param_2;
      do {
        pDVar6 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        pauVar7 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
        iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
        DES_ncbc_encrypt(param_3,output,0x4000000000000000,pDVar6,pauVar7,iVar3);
        param_4 = param_4 + 0xc000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        output = output + 0x4000000000000000;
      } while (param_4 >> 0x3e != 0);
      param_2 = param_2 + lVar4;
      param_4 = uVar1 - uVar8;
      param_3 = puVar2;
    }
    if (param_4 != 0) {
      pDVar6 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      pauVar7 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      DES_ncbc_encrypt(param_3,param_2,param_4,pDVar6,pauVar7,iVar3);
    }
  }
  else {
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    (*pcVar9)(param_3,param_2,param_4,lVar4,uVar5);
  }
  return 1;
}

