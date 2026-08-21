
/* cocos2d::ccCArrayFastRemoveValueAtIndex(cocos2d::_ccCArray*, long) */

void cocos2d::ccCArrayFastRemoveValueAtIndex(_ccCArray *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  *(long *)param_1 = lVar1 + -1;
  *(undefined8 *)(*(long *)(param_1 + 0x10) + param_2 * 8) =
       *(undefined8 *)(*(long *)(param_1 + 0x10) + (lVar1 + -1) * 8);
  return;
}

