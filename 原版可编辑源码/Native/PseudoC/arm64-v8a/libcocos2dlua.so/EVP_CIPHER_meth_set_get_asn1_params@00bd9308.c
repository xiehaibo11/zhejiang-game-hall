
undefined8 EVP_CIPHER_meth_set_get_asn1_params(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}

