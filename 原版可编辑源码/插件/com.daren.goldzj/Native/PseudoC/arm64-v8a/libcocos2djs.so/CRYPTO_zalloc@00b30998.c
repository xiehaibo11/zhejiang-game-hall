
void * CRYPTO_zalloc(size_t param_1)

{
  void *__s;
  
  if ((PTR_CRYPTO_malloc_01d20820 == (undefined *)0x0) ||
     ((code *)PTR_CRYPTO_malloc_01d20820 == CRYPTO_malloc)) {
    if (param_1 == 0) {
      return (void *)0x0;
    }
    DAT_01d3ac08 = 1;
    __s = malloc(param_1);
  }
  else {
    __s = (void *)(*(code *)PTR_CRYPTO_malloc_01d20820)(param_1);
  }
  if (__s != (void *)0x0) {
    memset(__s,0,param_1);
  }
  return __s;
}

