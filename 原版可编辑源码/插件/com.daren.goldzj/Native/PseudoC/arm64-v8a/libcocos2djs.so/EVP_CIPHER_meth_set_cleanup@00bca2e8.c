
undefined8 EVP_CIPHER_meth_set_cleanup(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}

