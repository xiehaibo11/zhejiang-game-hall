
void tls1_free(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x2a8));
  ssl3_free(param_1);
  return;
}

