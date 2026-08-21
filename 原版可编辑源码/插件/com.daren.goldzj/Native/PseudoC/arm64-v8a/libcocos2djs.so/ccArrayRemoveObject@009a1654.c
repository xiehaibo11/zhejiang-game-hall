
/* cocos2d::ccArrayRemoveObject(cocos2d::_ccArray*, cocos2d::Ref*, bool) */

void cocos2d::ccArrayRemoveObject(_ccArray *param_1,Ref *param_2,bool param_3)

{
  void *__dest;
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1;
  if (0 < lVar1) {
                    /* try { // try from 009a1674 to 00aa175f has its CatchHandler @ 009a1458 */
    lVar3 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar3 * 8) == param_2) {
        if (lVar3 == -1) {
          return;
        }
        if ((param_3) &&
           (this = *(Ref **)(*(long *)(param_1 + 0x10) + lVar3 * 8), this != (Ref *)0x0)) {
          Ref::release(this);
          lVar1 = *(long *)param_1;
        }
        lVar2 = (lVar1 - lVar3) + -1;
        *(long *)param_1 = lVar1 + -1;
        if (lVar2 < 1) {
          return;
        }
        __dest = (void *)(*(long *)(param_1 + 0x10) + lVar3 * 8);
                    /* catch() { ... } // from try @ 009a14e0 with catch @ 009a16f0 */
        memmove(__dest,(void *)((long)__dest + 8),lVar2 * 8);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar1);
  }
                    /* catch() { ... } // from try @ 009a14d4 with catch @ 009a16f4 */
                    /* catch() { ... } // from try @ 009a14b4 with catch @ 009a16f8 */
  return;
}

