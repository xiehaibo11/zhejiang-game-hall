
void * FUN_00a37958(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)(*(code *)PTR_malloc_01d1b740)(param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}

