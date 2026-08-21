
undefined8 FUN_00b237a0(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  int enc;
  EVP_CIPHER *pEVar1;
  DES_key_schedule *ks1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  pEVar1 = EVP_CIPHER_CTX_cipher(param_1);
  uVar4 = (ulong)pEVar1->block_size;
  if (uVar4 <= param_4) {
    uVar5 = 0;
    do {
      ks1 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      enc = EVP_CIPHER_CTX_encrypting(param_1);
      DES_ecb3_encrypt((const_DES_cblock *)(param_3 + uVar5),(DES_cblock *)(param_2 + uVar5),ks1,
                       (DES_key_schedule *)(lVar2 + 0x80),(DES_key_schedule *)(lVar3 + 0x100),enc);
      uVar5 = uVar5 + uVar4;
    } while (uVar5 <= param_4 - uVar4);
  }
  return 1;
}

