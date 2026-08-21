
undefined8 EVP_PKEY_get0_hmac(int *param_1,long *param_2)

{
  int *piVar1;
  
  if (*param_1 == 0x357) {
    piVar1 = *(int **)(param_1 + 8);
    *param_2 = (long)*piVar1;
    return *(undefined8 *)(piVar1 + 2);
  }
  ERR_put_error(6,0xb7,0xae,"crypto/evp/p_lib.c",0xf4);
  return 0;
}

