
undefined8 FUN_00b24208(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_68;
  undefined4 local_64;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar7 = uVar1 & 0xc000000000000000;
    lVar2 = uVar7 + 0x4000000000000000;
    lVar3 = param_3 + lVar2;
    lVar6 = param_2;
    do {
      local_64 = EVP_CIPHER_CTX_num(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
      IDEA_ofb64_encrypt(param_3,lVar6,0x4000000000000000,uVar4,uVar5,&local_64);
      EVP_CIPHER_CTX_set_num(param_1,local_64);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      lVar6 = lVar6 + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar7;
    param_3 = lVar3;
  }
  if (param_4 != 0) {
    local_68 = EVP_CIPHER_CTX_num(param_1);
    uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
    IDEA_ofb64_encrypt(param_3,param_2,param_4,uVar4,uVar5,&local_68);
    EVP_CIPHER_CTX_set_num(param_1,local_68);
  }
  return 1;
}

