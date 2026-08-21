
void OPENSSL_sk_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

