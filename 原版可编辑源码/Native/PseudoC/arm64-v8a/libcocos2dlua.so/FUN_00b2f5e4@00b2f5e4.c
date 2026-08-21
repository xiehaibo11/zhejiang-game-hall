
int FUN_00b2f5e4(EVP_CIPHER_CTX *param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  iVar2 = EVP_CIPHER_CTX_iv_length(param_1);
  if (param_3 == 0) {
    return 0;
  }
  if (param_4 == 0) {
LAB_00b2f640:
    iVar2 = -1;
  }
  else {
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar3 == 0) {
      if (param_4 < 0x10) {
        return -1;
      }
      if ((param_4 & 7) != 0) {
        return -1;
      }
    }
    else if (((param_4 & 7) != 0) && (iVar2 != 4)) goto LAB_00b2f640;
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    if (param_2 == 0) {
      uVar6 = (uint)param_4;
      if (iVar3 == 0) {
        iVar2 = uVar6 - 8;
      }
      else {
        uVar1 = uVar6 + 7 & 0xfffffff8;
        if (iVar2 != 4) {
          uVar1 = uVar6;
        }
        iVar2 = uVar1 + 8;
      }
    }
    else {
      uVar5 = *(undefined8 *)(lVar4 + 0xf8);
      if (iVar2 == 4) {
        if (iVar3 == 0) {
          lVar4 = CRYPTO_128_unwrap_pad(lVar4,uVar5,param_2,param_3,param_4,AES_decrypt);
        }
        else {
          lVar4 = CRYPTO_128_wrap_pad(lVar4,uVar5,param_2,param_3,param_4,AES_encrypt);
        }
      }
      else if (iVar3 == 0) {
        lVar4 = CRYPTO_128_unwrap(lVar4,uVar5,param_2,param_3,param_4,AES_decrypt);
      }
      else {
        lVar4 = CRYPTO_128_wrap(lVar4,uVar5,param_2,param_3,param_4,AES_encrypt);
      }
      iVar2 = (int)lVar4;
      if (lVar4 == 0) {
        iVar2 = -1;
      }
    }
  }
  return iVar2;
}

