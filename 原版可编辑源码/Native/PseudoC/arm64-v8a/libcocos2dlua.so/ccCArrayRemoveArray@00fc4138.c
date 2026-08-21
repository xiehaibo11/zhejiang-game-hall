
/* cocos2d::ccCArrayRemoveArray(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayRemoveArray(_ccCArray *param_1,_ccCArray *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (0 < *(long *)param_2) {
    lVar2 = 0;
    lVar1 = *(long *)param_1;
    do {
      lVar3 = lVar1;
      if (0 < lVar1) {
        lVar4 = lVar1 + -1;
        lVar7 = *(long *)(param_1 + 0x10);
        lVar6 = 0;
        lVar5 = 0;
        do {
          if (*(long *)(lVar7 + lVar6) == *(long *)(*(long *)(param_2 + 0x10) + lVar2 * 8)) {
            if ((lVar5 != -1) && (*(long *)param_1 = lVar4, lVar3 = lVar4, lVar5 < lVar4)) {
              *(undefined8 *)(lVar7 + lVar6) = *(undefined8 *)(lVar7 + lVar5 * 8 + 8);
              for (; lVar1 + -2 != lVar5; lVar5 = lVar5 + 1) {
                lVar6 = *(long *)(param_1 + 0x10) + lVar5 * 8;
                *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar6 + 0x10);
              }
            }
            break;
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar1 != lVar5);
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar3;
    } while (lVar2 < *(long *)param_2);
  }
  return;
}

