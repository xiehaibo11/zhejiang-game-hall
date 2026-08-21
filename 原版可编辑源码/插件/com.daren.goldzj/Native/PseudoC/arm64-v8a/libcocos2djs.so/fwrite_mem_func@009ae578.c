
/* cocos2d::fwrite_mem_func(void*, void*, void const*, unsigned long) */

size_t cocos2d::fwrite_mem_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  
                    /* catch() { ... } // from try @ 009ae200 with catch @ 009ae590 */
                    /* catch() { ... } // from try @ 009ae1cc with catch @ 009ae594 */
  __n = *(long *)((long)param_2 + 8) - *(long *)((long)param_2 + 0x18);
  if (param_4 <= __n) {
    __n = param_4;
  }
  memcpy((void *)(*(long *)param_2 + *(long *)((long)param_2 + 0x18)),param_3,__n);
  uVar1 = *(long *)((long)param_2 + 0x18) + __n;
                    /* catch() { ... } // from try @ 009ae084 with catch @ 009ae5b4 */
  *(ulong *)((long)param_2 + 0x18) = uVar1;
  if (*(ulong *)((long)param_2 + 0x10) < uVar1) {
    *(ulong *)((long)param_2 + 0x10) = uVar1;
  }
  return __n;
}

