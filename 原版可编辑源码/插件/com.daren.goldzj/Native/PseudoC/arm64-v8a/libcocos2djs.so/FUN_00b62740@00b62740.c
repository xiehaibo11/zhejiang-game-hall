
void FUN_00b62740(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0xffffffffffffffff;
    OPENSSL_sk_pop_free(param_1[6],ASN1_OBJECT_free);
    param_1[6] = 0;
    OPENSSL_sk_pop_free(param_1[7],&LAB_00b62c20);
    param_1[7] = 0;
    CRYPTO_free((void *)param_1[9]);
    param_1[9] = 0;
    CRYPTO_free((void *)param_1[10]);
    param_1[10] = 0;
    param_1[0xb] = 0;
    CRYPTO_free((void *)param_1[0xc]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  return;
}

