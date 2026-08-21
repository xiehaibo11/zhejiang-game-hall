
void FUN_00bd6ac0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    DSO_free((DSO *)*param_2);
    CRYPTO_free((void *)param_2[3]);
    CRYPTO_free((void *)param_2[5]);
    OPENSSL_sk_pop_free(param_2[10],&LAB_00bd6b38);
    CRYPTO_free(param_2);
    return;
  }
  return;
}

