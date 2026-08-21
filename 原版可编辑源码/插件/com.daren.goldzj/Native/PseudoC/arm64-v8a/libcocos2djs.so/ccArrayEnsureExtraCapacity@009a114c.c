
/* cocos2d::ccArrayEnsureExtraCapacity(cocos2d::_ccArray*, long) */

void cocos2d::ccArrayEnsureExtraCapacity(_ccArray *param_1,long param_2)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < *(long *)param_1 + param_2) {
    __ptr = *(void **)(param_1 + 0x10);
    do {
                    /* try { // try from 009a1174 to 00aa1213 has its CatchHandler @ 009a0e04 */
      *(long *)(param_1 + 8) = lVar1 << 1;
      __ptr = realloc(__ptr,lVar1 << 4);
      lVar1 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 009a0ee0 with catch @ 009a1188
                       catch() { ... } // from try @ 009a10e8 with catch @ 009a1188 */
      *(void **)(param_1 + 0x10) = __ptr;
                    /* catch() { ... } // from try @ 009a0e8c with catch @ 009a118c */
                    /* catch() { ... } // from try @ 009a0e80 with catch @ 009a1190 */
                    /* catch() { ... } // from try @ 009a0f90 with catch @ 009a1194
                       catch() { ... } // from try @ 009a1130 with catch @ 009a1194 */
    } while (lVar1 < *(long *)param_1 + param_2);
  }
  return;
}

