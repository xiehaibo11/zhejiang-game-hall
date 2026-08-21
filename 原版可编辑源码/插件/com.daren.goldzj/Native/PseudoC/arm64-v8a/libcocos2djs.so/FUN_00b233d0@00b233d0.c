
undefined8 FUN_00b233d0(EVP_CIPHER_CTX *param_1,int param_2,undefined8 param_3,DES_cblock *param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 6) {
    iVar1 = EVP_CIPHER_CTX_key_length(param_1);
    iVar1 = RAND_bytes(*param_4,iVar1);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      DES_set_odd_parity(param_4);
      iVar1 = EVP_CIPHER_CTX_key_length(param_1);
      if (0xf < iVar1) {
        DES_set_odd_parity(param_4 + 1);
      }
      iVar1 = EVP_CIPHER_CTX_key_length(param_1);
      if (0x17 < iVar1) {
        DES_set_odd_parity(param_4 + 2);
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

