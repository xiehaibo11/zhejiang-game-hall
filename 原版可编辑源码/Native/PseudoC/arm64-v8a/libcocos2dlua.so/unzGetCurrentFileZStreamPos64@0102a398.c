
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
                    /* catch() { ... } // from try @ 0102a210 with catch @ 0102a3a8 */
                    /* catch() { ... } // from try @ 0102a2bc with catch @ 0102a3ac */
    lVar1 = *(long *)(lVar1 + 0x130) + *(long *)(lVar1 + 0x78);
  }
                    /* catch() { ... } // from try @ 0102a26c with catch @ 0102a3b0 */
  return lVar1;
}

