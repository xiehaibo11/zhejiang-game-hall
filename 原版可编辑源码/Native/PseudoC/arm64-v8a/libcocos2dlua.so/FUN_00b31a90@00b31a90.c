
undefined8 FUN_00b31a90(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  uchar *puVar2;
  DES_key_schedule *pDVar3;
  long lVar4;
  long lVar5;
  DES_cblock *pauVar6;
  long lVar7;
  ulong uVar8;
  uchar *out;
  int local_68;
  int local_64;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar8 = uVar1 & 0xc000000000000000;
    lVar7 = uVar8 + 0x4000000000000000;
    puVar2 = param_3 + lVar7;
    out = param_2;
    do {
      local_64 = EVP_CIPHER_CTX_num(param_1);
      pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
      DES_ede3_ofb64_encrypt
                (param_3,out,0x4000000000000000,pDVar3,(DES_key_schedule *)(lVar4 + 0x80),
                 (DES_key_schedule *)(lVar5 + 0x100),pauVar6,&local_64);
      EVP_CIPHER_CTX_set_num(param_1,local_64);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_4 = uVar1 - uVar8;
    param_2 = param_2 + lVar7;
    param_3 = puVar2;
  }
  if (param_4 != 0) {
    local_68 = EVP_CIPHER_CTX_num(param_1);
    pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar7 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
    DES_ede3_ofb64_encrypt
              (param_3,param_2,param_4,pDVar3,(DES_key_schedule *)(lVar7 + 0x80),
               (DES_key_schedule *)(lVar4 + 0x100),pauVar6,&local_68);
    EVP_CIPHER_CTX_set_num(param_1,local_68);
  }
  return 1;
}

