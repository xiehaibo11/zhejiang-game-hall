
undefined8 FUN_00b25218(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  SEED_KEY_SCHEDULE *pSVar3;
  uchar *ivec;
  uchar *puVar4;
  uchar *out;
  ulong uVar5;
  int local_68;
  int local_64;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar5 = uVar1 & 0xc000000000000000;
    lVar2 = uVar5 + 0x4000000000000000;
    puVar4 = param_3 + lVar2;
    out = param_2;
    do {
      local_64 = EVP_CIPHER_CTX_num(param_1);
      pSVar3 = (SEED_KEY_SCHEDULE *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      ivec = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
      SEED_ofb128_encrypt(param_3,out,0x4000000000000000,pSVar3,ivec,&local_64);
      EVP_CIPHER_CTX_set_num(param_1,local_64);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar5;
    param_3 = puVar4;
  }
  if (param_4 != 0) {
    local_68 = EVP_CIPHER_CTX_num(param_1);
    pSVar3 = (SEED_KEY_SCHEDULE *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar4 = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
    SEED_ofb128_encrypt(param_3,param_2,param_4,pSVar3,puVar4,&local_68);
    EVP_CIPHER_CTX_set_num(param_1,local_68);
  }
  return 1;
}

