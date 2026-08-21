
undefined8 FUN_00b1fa1c(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = EVP_CIPHER_CTX_block_size(param_1);
  uVar3 = (ulong)iVar1;
  lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (uVar3 <= param_4) {
    uVar4 = 0;
    do {
      (**(code **)(lVar2 + 0xf8))(param_3 + uVar4,param_2 + uVar4,lVar2);
      uVar4 = uVar4 + uVar3;
    } while (uVar4 <= param_4 - uVar3);
  }
  return 1;
}

