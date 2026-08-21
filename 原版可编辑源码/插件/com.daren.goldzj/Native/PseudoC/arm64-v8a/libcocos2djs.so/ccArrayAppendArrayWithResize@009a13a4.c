
/* cocos2d::ccArrayAppendArrayWithResize(cocos2d::_ccArray*, cocos2d::_ccArray*) */

void cocos2d::ccArrayAppendArrayWithResize(_ccArray *param_1,_ccArray *param_2)

{
  void *__ptr;
  long lVar1;
  Ref *this;
  long lVar2;
  
  lVar1 = *(long *)param_2;
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < *(long *)param_1 + lVar1) {
    __ptr = *(void **)(param_1 + 0x10);
    do {
      *(long *)(param_1 + 8) = lVar2 << 1;
      __ptr = realloc(__ptr,lVar2 << 4);
      lVar2 = *(long *)(param_1 + 8);
                    /* catch() { ... } // from try @ 009a1294 with catch @ 009a13e8 */
      *(void **)(param_1 + 0x10) = __ptr;
                    /* catch() { ... } // from try @ 009a1288 with catch @ 009a13ec */
                    /* catch() { ... } // from try @ 009a1268 with catch @ 009a13f0 */
    } while (lVar2 < *(long *)param_1 + lVar1);
    lVar1 = *(long *)param_2;
  }
                    /* catch() { ... } // from try @ 009a12a0 with catch @ 009a1400 */
  if (0 < lVar1) {
    lVar2 = 0;
    do {
      this = *(Ref **)(*(long *)(param_2 + 0x10) + lVar2 * 8);
      Ref::retain(this);
      lVar1 = *(long *)param_1;
      lVar2 = lVar2 + 1;
      *(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) = this;
      *(long *)param_1 = lVar1 + 1;
    } while (lVar2 < *(long *)param_2);
  }
  return;
}

