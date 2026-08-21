
/* cocos2d::ccArrayRemoveAllObjects(cocos2d::_ccArray*) */

void cocos2d::ccArrayRemoveAllObjects(_ccArray *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)param_1;
  while (0 < lVar1) {
    *(long *)param_1 = lVar1 + -1;
    Ref::release(*(Ref **)(*(long *)(param_1 + 0x10) + (lVar1 + -1) * 8));
    lVar1 = *(long *)param_1;
  }
  return;
}

