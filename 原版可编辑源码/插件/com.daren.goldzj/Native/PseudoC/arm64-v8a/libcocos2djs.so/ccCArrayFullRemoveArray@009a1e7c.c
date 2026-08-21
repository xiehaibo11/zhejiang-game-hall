
/* cocos2d::ccCArrayFullRemoveArray(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayFullRemoveArray(_ccCArray *param_1,_ccCArray *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)param_1;
  if (lVar1 < 1) {
                    /* catch() { ... } // from try @ 009a1ce4 with catch @ 009a1f00 */
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)param_2;
    lVar2 = 0;
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      if (0 < lVar3) {
        lVar6 = 0;
        do {
          if (*(long *)(*(long *)(param_2 + 0x10) + lVar6 * 8) == lVar5) {
            if (lVar6 != -1) {
              lVar4 = lVar4 + 1;
              goto LAB_009a1ef0;
            }
            break;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar3);
      }
                    /* catch() { ... } // from try @ 009a1cd8 with catch @ 009a1ee8 */
                    /* catch() { ... } // from try @ 009a1ccc with catch @ 009a1eec */
      *(long *)(*(long *)(param_1 + 0x10) + (lVar2 - lVar4) * 8) = lVar5;
LAB_009a1ef0:
                    /* catch() { ... } // from try @ 009a1cac with catch @ 009a1ef0 */
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar1);
  }
  *(long *)param_1 = lVar1 - lVar4;
  return;
}

