
/* cocos2d::unzGetCurrentFileZStreamPos64(void*) */

long cocos2d::unzGetCurrentFileZStreamPos64(void *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != (void *)0x0) {
    lVar1 = *(long *)((long)param_1 + 0x140);
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = *(long *)(lVar1 + 0x130) + *(long *)(lVar1 + 0x78);
  }
  return lVar1;
}

