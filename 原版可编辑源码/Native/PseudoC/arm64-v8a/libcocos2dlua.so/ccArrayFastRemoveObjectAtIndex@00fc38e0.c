
/* cocos2d::ccArrayFastRemoveObjectAtIndex(cocos2d::_ccArray*, long) */

void cocos2d::ccArrayFastRemoveObjectAtIndex(_ccArray *param_1,long param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  this = *(Ref **)(lVar1 + param_2 * 8);
  if (this != (Ref *)0x0) {
    Ref::release(this);
    lVar1 = *(long *)(param_1 + 0x10);
  }
  lVar2 = *(long *)param_1;
  *(long *)param_1 = lVar2 + -1;
  *(undefined8 *)(lVar1 + param_2 * 8) = *(undefined8 *)(lVar1 + (lVar2 + -1) * 8);
  return;
}

