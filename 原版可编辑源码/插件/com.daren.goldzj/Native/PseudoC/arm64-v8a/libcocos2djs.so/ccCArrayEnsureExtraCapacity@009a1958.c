
/* cocos2d::ccCArrayEnsureExtraCapacity(cocos2d::_ccCArray*, long) */

void cocos2d::ccCArrayEnsureExtraCapacity(_ccCArray *param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < *(long *)param_1 + param_2) {
    __ptr = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar1 << 1;
      __ptr = realloc(__ptr,lVar1 << 4);
      lVar1 = *(long *)(param_1 + 8);
      *(void **)(param_1 + 0x10) = __ptr;
                    /* catch() { ... } // from try @ 009a17e0 with catch @ 009a199c */
                    /* catch() { ... } // from try @ 009a17d4 with catch @ 009a19a0 */
    } while (lVar1 < *(long *)param_1 + param_2);
  }
                    /* catch() { ... } // from try @ 009a17b4 with catch @ 009a19a4 */
  return;
}

