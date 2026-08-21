
void CRYPTO_clear_free(void *param_1,size_t param_2,undefined8 param_3,undefined4 param_4)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if (param_2 != 0) {
    OPENSSL_cleanse(param_1,param_2);
  }
  if ((PTR_CRYPTO_free_01d20830 != (undefined *)0x0) &&
     ((code *)PTR_CRYPTO_free_01d20830 != CRYPTO_free)) {
                    /* WARNING: Could not recover jumptable at 0x00b30d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_CRYPTO_free_01d20830)(param_1,param_3,param_4);
    return;
  }
  free(param_1);
  return;
}

