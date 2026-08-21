
undefined8 FUN_00b316e0(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  int iVar4;
  DES_key_schedule *ks1;
  undefined8 uVar5;
  DES_cblock *pauVar6;
  ulong uVar7;
  _union_772 _Var8;
  uchar *output;
  
  ks1 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data();
  _Var8 = ks1[3].ks[0];
  if (_Var8 == (_union_772)0x0) {
    if (param_4 >> 0x3e != 0) {
      uVar1 = param_4 + 0xc000000000000000;
      uVar7 = uVar1 & 0xc000000000000000;
      lVar2 = uVar7 + 0x4000000000000000;
      puVar3 = param_3 + lVar2;
      output = param_2;
      do {
        pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
        iVar4 = EVP_CIPHER_CTX_encrypting(param_1);
        DES_ede3_cbc_encrypt(param_3,output,0x4000000000000000,ks1,ks1 + 1,ks1 + 2,pauVar6,iVar4);
        param_4 = param_4 + 0xc000000000000000;
        param_3 = param_3 + 0x4000000000000000;
        output = output + 0x4000000000000000;
      } while (param_4 >> 0x3e != 0);
      param_4 = uVar1 - uVar7;
      param_2 = param_2 + lVar2;
      param_3 = puVar3;
    }
    if (param_4 != 0) {
      pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar4 = EVP_CIPHER_CTX_encrypting(param_1);
      DES_ede3_cbc_encrypt(param_3,param_2,param_4,ks1,ks1 + 1,ks1 + 2,pauVar6,iVar4);
    }
  }
  else {
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    (*(code *)_Var8)(param_3,param_2,param_4,ks1,uVar5);
  }
  return 1;
}

