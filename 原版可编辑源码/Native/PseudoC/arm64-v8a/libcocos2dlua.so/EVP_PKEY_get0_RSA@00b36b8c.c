
undefined8 EVP_PKEY_get0_RSA(int *param_1)

{
  if (*param_1 == 6) {
    return *(undefined8 *)(param_1 + 8);
  }
  ERR_put_error(6,0x79,0x7f,"crypto/evp/p_lib.c",0x108);
  return 0;
}

