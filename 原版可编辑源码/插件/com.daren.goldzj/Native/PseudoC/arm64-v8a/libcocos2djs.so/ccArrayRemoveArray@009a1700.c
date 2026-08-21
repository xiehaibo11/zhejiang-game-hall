
/* cocos2d::ccArrayRemoveArray(cocos2d::_ccArray*, cocos2d::_ccArray*) */

void cocos2d::ccArrayRemoveArray(_ccArray *param_1,_ccArray *param_2)

{
  void *__dest;
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 009a14ec with catch @ 009a1708 */
  if (0 < *(long *)param_2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)param_1;
      if (0 < lVar1) {
        lVar4 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x10) + lVar4 * 8) ==
              *(long *)(*(long *)(param_2 + 0x10) + lVar3 * 8)) {
            if (lVar4 != -1) {
              this = *(Ref **)(*(long *)(param_1 + 0x10) + lVar4 * 8);
              if (this != (Ref *)0x0) {
                Ref::release(this);
                lVar1 = *(long *)param_1;
              }
              lVar2 = (lVar1 - lVar4) + -1;
              *(long *)param_1 = lVar1 + -1;
              if (0 < lVar2) {
                __dest = (void *)(*(long *)(param_1 + 0x10) + lVar4 * 8);
                memmove(__dest,(void *)((long)__dest + 8),lVar2 * 8);
              }
            }
            break;
          }
                    /* try { // try from 009a1760 to 00aa17b3 has its CatchHandler @ 009a1760
                       catch() { ... } // from try @ 009a1760 with catch @ 009a1760
                       catch() { ... } // from try @ 009a1928 with catch @ 009a1760 */
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar1);
      }
                    /* try { // try from 009a17b4 to 00aa17cb has its CatchHandler @ 009a19a4 */
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(long *)param_2);
  }
                    /* try { // try from 009a17d4 to 00aa17df has its CatchHandler @ 009a19a0 */
  return;
}

