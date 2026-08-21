
undefined8 EVP_PKEY_get0_EC_KEY(int *param_1)

{
  if (*param_1 == 0x198) {
    return *(undefined8 *)(param_1 + 8);
  }
  ERR_put_error(6,0x83,0x8e,"crypto/evp/p_lib.c",0x13f);
  return 0;
}

