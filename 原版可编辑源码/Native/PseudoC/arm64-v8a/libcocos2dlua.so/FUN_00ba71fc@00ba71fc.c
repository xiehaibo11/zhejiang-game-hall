
void FUN_00ba71fc(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 00ba71dc with catch @ 00ba720c */
  if (ptr != (void *)0x0) {
                    /* catch() { ... } // from try @ 00ba71d0 with catch @ 00ba721c */
    CRYPTO_free(*(void **)((long)ptr + 0x38));
    ASN1_OBJECT_free(*(ASN1_OBJECT **)((long)ptr + 0x28));
    CRYPTO_free(ptr);
    return;
  }
  return;
}

