
void FUN_00b2e460(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)((long)ptr + 8),*(undefined8 *)((long)ptr + 0x10),
                    "crypto/kdf/tls1_prf.c",0x33);
  OPENSSL_cleanse((void *)((long)ptr + 0x18),*(size_t *)((long)ptr + 0x418));
  CRYPTO_free(ptr);
  return;
}

