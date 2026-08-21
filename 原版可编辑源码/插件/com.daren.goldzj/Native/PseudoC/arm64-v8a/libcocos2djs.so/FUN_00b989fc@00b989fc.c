
void FUN_00b989fc(long param_1)

{
  void *ptr;
  
  ptr = *(void **)(param_1 + 0x28);
  if (ptr != (void *)0x0) {
    CRYPTO_free(*(void **)((long)ptr + 0x38));
    ASN1_OBJECT_free(*(ASN1_OBJECT **)((long)ptr + 0x28));
    CRYPTO_free(ptr);
    return;
  }
  return;
}

