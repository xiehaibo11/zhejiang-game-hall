
undefined8 EVP_CIPHER_CTX_set_cipher_data(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  return uVar1;
}

