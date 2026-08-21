
/* cocos2d::ccCArrayContainsValue(cocos2d::_ccCArray*, void*) */

bool cocos2d::ccCArrayContainsValue(_ccCArray *param_1,void *param_2)

{
  long lVar1;
  
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
      if (*(void **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) goto LAB_009a1a38;
                    /* try { // try from 009a1a0c to 00aa1a5f has its CatchHandler @ 009a1a0c
                       catch() { ... } // from try @ 009a1a0c with catch @ 009a1a0c
                       catch() { ... } // from try @ 009a1b6c with catch @ 009a1a0c */
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(long *)param_1);
  }
  lVar1 = -1;
LAB_009a1a38:
  return lVar1 != -1;
}

