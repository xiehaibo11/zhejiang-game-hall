
/* cocos2d::ccCArrayRemoveValueAtIndex(cocos2d::_ccCArray*, long) */

void cocos2d::ccCArrayRemoveValueAtIndex(_ccCArray *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *(long *)param_1 + -1;
  *(long *)param_1 = lVar2;
  if (param_2 < lVar2) {
    do {
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + param_2 * 8);
      param_2 = param_2 + 1;
      *puVar1 = puVar1[1];
    } while (lVar2 != param_2);
  }
  return;
}

