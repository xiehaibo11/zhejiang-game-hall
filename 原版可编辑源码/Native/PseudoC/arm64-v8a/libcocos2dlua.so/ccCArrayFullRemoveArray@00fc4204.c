
/* cocos2d::ccCArrayFullRemoveArray(cocos2d::_ccCArray*, cocos2d::_ccCArray*) */

void cocos2d::ccCArrayFullRemoveArray(_ccCArray *param_1,_ccCArray *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *(long *)param_1;
  if (lVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar3 = *(long *)param_2;
    lVar2 = 0;
    lVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0x10) + lVar2 * 8);
      if (0 < lVar3) {
        plVar6 = *(long **)(param_2 + 0x10);
        lVar7 = -1;
        lVar8 = lVar3;
        do {
          if (*plVar6 == lVar5) {
            if (lVar7 != 0) {
              lVar4 = lVar4 + 1;
              goto LAB_00fc4234;
            }
            break;
          }
          lVar7 = lVar7 + -1;
          lVar8 = lVar8 + -1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != 0);
      }
      *(long *)(*(long *)(param_1 + 0x10) + (lVar2 - lVar4) * 8) = lVar5;
LAB_00fc4234:
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar1);
  }
  *(long *)param_1 = lVar1 - lVar4;
  return;
}

