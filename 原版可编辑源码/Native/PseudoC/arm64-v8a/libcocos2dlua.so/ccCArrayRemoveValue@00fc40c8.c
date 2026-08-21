
/* cocos2d::ccCArrayRemoveValue(cocos2d::_ccCArray*, void*) */

void cocos2d::ccCArrayRemoveValue(_ccCArray *param_1,void *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)param_1;
  lVar2 = lVar4 + -1;
  if (0 < lVar4) {
    lVar3 = 0;
    do {
      if (*(void **)(*(long *)(param_1 + 0x10) + lVar3 * 8) == param_2) {
        if (lVar3 == -1) {
          return;
        }
        *(long *)param_1 = lVar2;
        if (lVar2 <= lVar3) {
          return;
        }
        do {
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar3 * 8);
          lVar3 = lVar3 + 1;
          *puVar1 = puVar1[1];
        } while (lVar2 != lVar3);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar4 != lVar3);
  }
  return;
}

