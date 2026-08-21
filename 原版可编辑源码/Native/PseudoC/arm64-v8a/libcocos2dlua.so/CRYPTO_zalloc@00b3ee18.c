
void * CRYPTO_zalloc(size_t param_1)

{
  void *__s;
  
  if ((PTR_CRYPTO_malloc_0176ea70 == (undefined *)0x0) ||
     ((code *)PTR_CRYPTO_malloc_0176ea70 == CRYPTO_malloc)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    DAT_01784988 = 1;
    __s = malloc(param_1);
  }
  else {
    __s = (void *)(*(code *)PTR_CRYPTO_malloc_0176ea70)(param_1);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,param_1);
  }
  return __s;
}

