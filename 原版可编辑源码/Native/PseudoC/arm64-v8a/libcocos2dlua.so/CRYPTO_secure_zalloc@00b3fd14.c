
void * CRYPTO_secure_zalloc(size_t param_1)

{
  void *__s;
  
  __s = (void *)CRYPTO_secure_malloc();
  if (__s != (void *)0x0) {
    memset(__s,0,param_1);
  }
  return __s;
}

