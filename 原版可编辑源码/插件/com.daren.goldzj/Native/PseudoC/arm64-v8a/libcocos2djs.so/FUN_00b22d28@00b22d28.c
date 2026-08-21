
undefined8 FUN_00b22d28(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uchar *puVar3;
  DES_key_schedule *pDVar4;
  DES_cblock *pauVar5;
  uchar *out;
  ulong uVar6;
  int local_68;
  int local_64;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar6 = uVar1 & 0xc000000000000000;
    lVar2 = uVar6 + 0x4000000000000000;
    puVar3 = param_3 + lVar2;
    out = param_2;
    do {
      local_64 = EVP_CIPHER_CTX_num(param_1);
      pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      pauVar5 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      DES_ofb64_encrypt(param_3,out,0x4000000000000000,pDVar4,pauVar5,&local_64);
      EVP_CIPHER_CTX_set_num(param_1,local_64);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar6;
    param_3 = puVar3;
  }
  if (param_4 != 0) {
    local_68 = EVP_CIPHER_CTX_num(param_1);
    pDVar4 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    pauVar5 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
    DES_ofb64_encrypt(param_3,param_2,param_4,pDVar4,pauVar5,&local_68);
    EVP_CIPHER_CTX_set_num(param_1,local_68);
  }
  return 1;
}

