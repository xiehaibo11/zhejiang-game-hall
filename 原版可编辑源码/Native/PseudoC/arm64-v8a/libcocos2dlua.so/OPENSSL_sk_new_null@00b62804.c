
void * OPENSSL_sk_new_null(void)

{
  void *ptr;
  long lVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x28,"crypto/stack/stack.c",0x6c);
  if (ptr != (void *)0x0) {
    lVar1 = CRYPTO_zalloc(0x20,"crypto/stack/stack.c",0x6e);
    *(long *)((long)ptr + 8) = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)((long)ptr + 0x18) = 4;
      *(undefined8 *)((long)ptr + 0x20) = 0;
      return ptr;
    }
  }
  CRYPTO_free(ptr);
  return (void *)0x0;
}

