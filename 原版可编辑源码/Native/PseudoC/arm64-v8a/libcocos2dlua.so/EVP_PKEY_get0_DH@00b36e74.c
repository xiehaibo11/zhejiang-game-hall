
undefined8 EVP_PKEY_get0_DH(int *param_1)

{
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    ERR_put_error(6,0x77,0x80,"crypto/evp/p_lib.c",0x15b);
    return 0;
  }
  return *(undefined8 *)(param_1 + 8);
}

