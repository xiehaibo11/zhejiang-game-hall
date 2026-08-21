
undefined8 FUN_00b327cc(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  EVP_CIPHER *pEVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  pEVar1 = EVP_CIPHER_CTX_cipher(param_1);
  uVar3 = (ulong)pEVar1->block_size;
  if (uVar3 <= param_4) {
    uVar4 = 0;
    do {
      uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      IDEA_ecb_encrypt(param_3 + uVar4,param_2 + uVar4,uVar2);
      uVar4 = uVar4 + uVar3;
    } while (uVar4 <= param_4 - uVar3);
  }
  return 1;
}

