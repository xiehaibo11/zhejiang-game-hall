
/* cocos2d::fread_mem_func(void*, void*, void*, unsigned long) */

size_t cocos2d::fread_mem_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  size_t __n;
  
                    /* catch() { ... } // from try @ 009ae0dc with catch @ 009ae538 */
  __n = *(long *)((long)param_2 + 8) - *(long *)((long)param_2 + 0x18);
  if (param_4 <= __n) {
    __n = param_4;
  }
                    /* catch() { ... } // from try @ 009ae0a8 with catch @ 009ae550 */
                    /* catch() { ... } // from try @ 009ae440 with catch @ 009ae554 */
  memcpy(param_3,(void *)(*(long *)param_2 + *(long *)((long)param_2 + 0x18)),__n);
  *(size_t *)((long)param_2 + 0x18) = *(long *)((long)param_2 + 0x18) + __n;
  return __n;
}

