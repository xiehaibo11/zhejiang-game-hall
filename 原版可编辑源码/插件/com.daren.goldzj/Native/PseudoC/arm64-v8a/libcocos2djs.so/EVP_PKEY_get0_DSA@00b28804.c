
undefined8 EVP_PKEY_get0_DSA(int *param_1)

{
  if (*param_1 == 0x74) {
    return *(undefined8 *)(param_1 + 8);
  }
  ERR_put_error(6,0x78,0x81,"crypto/evp/p_lib.c",0x123);
  return 0;
}

