
void FUN_00ada4dc(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x18));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

