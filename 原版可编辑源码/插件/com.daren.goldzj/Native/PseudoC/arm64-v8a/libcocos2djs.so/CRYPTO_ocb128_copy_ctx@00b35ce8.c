
undefined8 CRYPTO_ocb128_copy_ctx(void *param_1,void *param_2,long param_3,long param_4)

{
  void *__dest;
  
  memcpy(param_1,param_2,0xc0);
  if (param_3 != 0) {
    *(long *)((long)param_1 + 0x10) = param_3;
  }
  if (param_4 != 0) {
    *(long *)((long)param_1 + 0x18) = param_4;
  }
  if (*(long *)((long)param_2 + 0x58) != 0) {
    __dest = CRYPTO_malloc((int)(*(long *)((long)param_2 + 0x30) << 4),"crypto/modes/ocb128.c",0xd5)
    ;
    *(void **)((long)param_1 + 0x58) = __dest;
    if (__dest == (void *)0x0) {
      return 0;
    }
    memcpy(__dest,*(void **)((long)param_2 + 0x58),*(long *)((long)param_2 + 0x28) * 0x10 + 0x10);
  }
  return 1;
}

