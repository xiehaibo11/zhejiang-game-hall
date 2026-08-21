
undefined8 FUN_00b1fbbc(EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar1 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  if (iVar1 == 0) {
    uVar5 = param_4;
    if (param_4 >> 0x3c != 0) {
      do {
        local_58 = EVP_CIPHER_CTX_num(param_1);
        uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
        CRYPTO_cfb128_1_encrypt
                  (param_3,param_2,0x8000000000000000,lVar3,uVar4,&local_58,uVar2,
                   *(undefined8 *)(lVar3 + 0xf8));
        EVP_CIPHER_CTX_set_num(param_1,local_58);
        uVar5 = uVar5 + 0xf000000000000000;
      } while (uVar5 >> 0x3c != 0);
      param_4 = param_4 & 0xfffffffffffffff;
    }
    if (param_4 == 0) {
      return 1;
    }
    local_5c = EVP_CIPHER_CTX_num(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,param_4 << 3,lVar3,uVar4,&local_5c,uVar2,
               *(undefined8 *)(lVar3 + 0xf8));
    uVar2 = local_5c;
  }
  else {
    local_54 = EVP_CIPHER_CTX_num(param_1);
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    CRYPTO_cfb128_1_encrypt
              (param_3,param_2,param_4,lVar3,uVar4,&local_54,uVar2,*(undefined8 *)(lVar3 + 0xf8));
    uVar2 = local_54;
  }
  EVP_CIPHER_CTX_set_num(param_1,uVar2);
  return 1;
}

