
void ssl_cert_free(void *param_1)

{
  int local_24;
  
  if ((param_1 != (void *)0x0) &&
     (CRYPTO_atomic_add((long)param_1 + 0x1d8,0xffffffff,&local_24,
                        *(undefined8 *)((long)param_1 + 0x1e0)), local_24 < 1)) {
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 8));
    ssl_cert_clear_certs(param_1);
    CRYPTO_free(*(void **)((long)param_1 + 0x148));
    CRYPTO_free(*(void **)((long)param_1 + 0x158));
    CRYPTO_free(*(void **)((long)param_1 + 0x168));
    CRYPTO_free(*(void **)((long)param_1 + 0x138));
    X509_STORE_free(*(X509_STORE **)((long)param_1 + 400));
    X509_STORE_free(*(X509_STORE **)((long)param_1 + 0x188));
    custom_exts_free((long)param_1 + 0x198);
    custom_exts_free((long)param_1 + 0x1a8);
    CRYPTO_free(*(void **)((long)param_1 + 0x1d0));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x1e0));
    CRYPTO_free(param_1);
  }
  return;
}

