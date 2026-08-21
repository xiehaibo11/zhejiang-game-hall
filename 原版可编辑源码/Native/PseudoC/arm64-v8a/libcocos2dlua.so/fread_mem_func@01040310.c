
/* cocos2d::fread_mem_func(void*, void*, void*, unsigned long) */

size_t cocos2d::fread_mem_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  size_t __n;
  
  __n = *(long *)((long)param_2 + 8) - *(long *)((long)param_2 + 0x18);
  if (param_4 <= __n) {
    __n = param_4;
  }
  memcpy(param_3,(void *)(*(long *)param_2 + *(long *)((long)param_2 + 0x18)),__n);
  *(size_t *)((long)param_2 + 0x18) = *(long *)((long)param_2 + 0x18) + __n;
  return __n;
}

