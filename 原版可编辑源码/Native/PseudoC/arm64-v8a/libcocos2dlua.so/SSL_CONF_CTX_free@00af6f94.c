
void SSL_CONF_CTX_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x30));
    CRYPTO_free(*(void **)((long)param_1 + 0x38));
    CRYPTO_free(*(void **)((long)param_1 + 0x40));
    CRYPTO_free(*(void **)((long)param_1 + 0x48));
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(*(void **)((long)param_1 + 0x58));
    CRYPTO_free(*(void **)((long)param_1 + 0x60));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_1 + 0x98),X509_NAME_free);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

