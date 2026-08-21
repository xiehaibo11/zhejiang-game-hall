
void * FUN_00ad4988(long param_1,int param_2)

{
  void *ptr;
  void *ptr_00;
  long lVar1;
  
  ptr = CRYPTO_malloc(0x68,"ssl/statem/statem_dtls.c",0x3f);
  if (ptr == (void *)0x0) {
    return (void *)0x0;
  }
  if (param_1 == 0) {
    ptr_00 = (void *)0x0;
    *(undefined8 *)((long)ptr + 0x58) = 0;
    if (param_2 != 0) goto LAB_00ad49e4;
LAB_00ad4a34:
    lVar1 = 0;
LAB_00ad4a38:
    *(long *)((long)ptr + 0x60) = lVar1;
  }
  else {
    ptr_00 = CRYPTO_malloc((int)param_1,"ssl/statem/statem_dtls.c",0x44);
    if (ptr_00 != (void *)0x0) {
      *(void **)((long)ptr + 0x58) = ptr_00;
      if (param_2 == 0) goto LAB_00ad4a34;
LAB_00ad49e4:
      lVar1 = CRYPTO_zalloc(param_1 + 7U >> 3,"ssl/statem/statem_dtls.c",0x50);
      if (lVar1 != 0) goto LAB_00ad4a38;
      CRYPTO_free(ptr_00);
    }
    CRYPTO_free(ptr);
    ptr = (void *)0x0;
  }
  return ptr;
}

