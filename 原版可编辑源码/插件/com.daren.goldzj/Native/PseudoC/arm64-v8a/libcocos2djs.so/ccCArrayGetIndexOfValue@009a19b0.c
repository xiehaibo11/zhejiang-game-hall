
/* cocos2d::ccCArrayGetIndexOfValue(cocos2d::_ccCArray*, void*) */

long cocos2d::ccCArrayGetIndexOfValue(_ccCArray *param_1,void *param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 009a17ec with catch @ 009a19b4 */
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
      if (*(void **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(long *)param_1);
  }
  return -1;
}

