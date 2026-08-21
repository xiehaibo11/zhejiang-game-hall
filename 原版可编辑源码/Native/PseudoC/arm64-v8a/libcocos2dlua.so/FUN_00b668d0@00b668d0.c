
void FUN_00b668d0(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  OPENSSL_sk_pop_free(param_1[2],&LAB_00b66920);
  CRYPTO_free(param_1);
  return;
}

