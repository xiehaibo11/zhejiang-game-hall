
/* cocos2d::fwrite_mem_func(void*, void*, void const*, unsigned long) */

size_t cocos2d::fwrite_mem_func(void *param_1,void *param_2,void *param_3,ulong param_4)

{
  ulong uVar1;
  size_t __n;
  
                    /* try { // try from 01040374 to 0114037f has its CatchHandler @ 010403ac */
  __n = *(long *)((long)param_2 + 8) - *(long *)((long)param_2 + 0x18);
                    /* try { // try from 01040380 to 011403bf has its CatchHandler @ 01040160 */
  if (param_4 <= __n) {
    __n = param_4;
  }
  memcpy((void *)(*(long *)param_2 + *(long *)((long)param_2 + 0x18)),param_3,__n);
  uVar1 = *(long *)((long)param_2 + 0x18) + __n;
  *(ulong *)((long)param_2 + 0x18) = uVar1;
  if (*(ulong *)((long)param_2 + 0x10) < uVar1) {
    *(ulong *)((long)param_2 + 0x10) = uVar1;
  }
                    /* catch() { ... } // from try @ 01040374 with catch @ 010403ac */
  return __n;
}

