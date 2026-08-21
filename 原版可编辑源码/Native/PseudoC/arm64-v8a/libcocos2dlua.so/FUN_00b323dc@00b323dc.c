
undefined8 FUN_00b323dc(EVP_CIPHER_CTX *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  EVP_CIPHER *pEVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [216];
  
  if (param_4 == 0) {
    pEVar1 = EVP_CIPHER_CTX_cipher(param_1);
    uVar2 = EVP_CIPHER_flags(pEVar1);
    if ((uVar2 & 0xf0007) != 4) {
      pEVar1 = EVP_CIPHER_CTX_cipher(param_1);
      uVar2 = EVP_CIPHER_flags(pEVar1);
      if ((uVar2 & 0xf0007) != 3) {
        IDEA_set_encrypt_key(param_2,auStack_108);
        uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
        IDEA_set_decrypt_key(auStack_108,uVar3);
        OPENSSL_cleanse(auStack_108,0xd8);
        return 1;
      }
    }
  }
  uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  IDEA_set_encrypt_key(param_2,uVar3);
  return 1;
}

