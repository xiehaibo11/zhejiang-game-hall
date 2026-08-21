
undefined8 EVP_CIPHER_meth_set_flags(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

