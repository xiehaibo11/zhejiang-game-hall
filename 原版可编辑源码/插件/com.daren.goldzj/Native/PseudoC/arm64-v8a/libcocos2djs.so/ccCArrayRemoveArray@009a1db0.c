
/* cocos2d::ccCArrayRemoveArray(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayRemoveArray(_ccCArray *param_1,_ccCArray *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (0 < *(long *)param_2) {
    lVar2 = 0;
    lVar3 = *(long *)param_1;
    do {
      lVar1 = lVar3 + -1;
      lVar4 = lVar3;
      if (0 < lVar3) {
        lVar5 = 0;
        lVar7 = 2;
        plVar6 = *(long **)(param_1 + 0x10);
        do {
          if (*plVar6 == *(long *)(*(long *)(param_2 + 0x10) + lVar2 * 8)) {
            if (((lVar7 != 1) && (*(long *)param_1 = lVar1, lVar4 = lVar1, lVar7 + -2 < lVar1)) &&
               (*plVar6 = plVar6[1], lVar3 != lVar7)) {
              do {
                lVar1 = *(long *)(param_1 + 0x10) + lVar5 * 8;
                lVar5 = lVar5 + 1;
                *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 0x10);
              } while (lVar3 + -2 != lVar5);
            }
            break;
          }
          lVar8 = lVar7 + -1;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          lVar5 = lVar5 + 1;
        } while (lVar8 < lVar3);
      }
                    /* try { // try from 009a1e6c to 00aa1f57 has its CatchHandler @ 009a1c50 */
      lVar2 = lVar2 + 1;
      lVar3 = lVar4;
    } while (lVar2 < *(long *)param_2);
  }
  return;
}

