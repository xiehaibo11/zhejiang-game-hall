
undefined8 * OPENSSL_sk_dup(int *param_1)

{
  undefined8 *ptr;
  void *__dest;
  undefined8 uVar1;
  
  if (-1 < *param_1) {
    ptr = CRYPTO_malloc(0x28,"crypto/stack/stack.c",0x2f);
    if (ptr == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    ptr[4] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 4);
    ptr[3] = *(undefined8 *)(param_1 + 6);
    ptr[2] = uVar1;
    uVar1 = *(undefined8 *)param_1;
    ptr[1] = *(undefined8 *)(param_1 + 2);
    *ptr = uVar1;
    __dest = CRYPTO_malloc((int)(*(long *)(param_1 + 6) << 3),"crypto/stack/stack.c",0x35);
    ptr[1] = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_1 + 2),(long)*param_1 << 3);
      return ptr;
    }
    CRYPTO_free((void *)0x0);
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}

