
void * FUN_0119f218(char *param_1,size_t param_2)

{
  size_t sVar1;
  void *__dest;
  
  sVar1 = strlen(param_1);
  if (sVar1 <= param_2) {
    param_2 = sVar1;
  }
  __dest = (void *)(*(code *)PTR_malloc_01781850)(param_2 + 1);
  if (__dest != (void *)0x0) {
    *(undefined1 *)((long)__dest + param_2) = 0;
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}

