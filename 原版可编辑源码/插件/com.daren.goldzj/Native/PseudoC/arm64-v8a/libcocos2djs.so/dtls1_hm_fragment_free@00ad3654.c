
void dtls1_hm_fragment_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((long)param_1 + 0x28) != 0) {
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)param_1 + 0x30));
      EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 0x38));
    }
    CRYPTO_free(*(void **)((long)param_1 + 0x58));
    CRYPTO_free(*(void **)((long)param_1 + 0x60));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

