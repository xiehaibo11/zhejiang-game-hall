
void FUN_00b3c3f0(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x28);
  CRYPTO_clear_free(*(undefined8 *)((long)ptr + 8),*(undefined8 *)((long)ptr + 0x10),
                    "crypto/kdf/hkdf.c",0x3e);
  CRYPTO_clear_free(*(undefined8 *)((long)ptr + 0x18),*(undefined8 *)((long)ptr + 0x20),
                    "crypto/kdf/hkdf.c",0x3f);
  OPENSSL_cleanse((void *)((long)ptr + 0x28),*(size_t *)((long)ptr + 0x428));
  CRYPTO_free(ptr);
  return;
}

