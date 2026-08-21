
void * EC_KEY_METHOD_new(void *param_1)

{
  void *__dest;
  
  __dest = (void *)CRYPTO_zalloc(0x78,"crypto/ec/ec_kmeth.c",0x9d);
  if (__dest != (void *)0x0) {
    if (param_1 != (void *)0x0) {
      memcpy(__dest,param_1,0x78);
    }
    *(uint *)((long)__dest + 8) = *(uint *)((long)__dest + 8) | 1;
  }
  return __dest;
}

