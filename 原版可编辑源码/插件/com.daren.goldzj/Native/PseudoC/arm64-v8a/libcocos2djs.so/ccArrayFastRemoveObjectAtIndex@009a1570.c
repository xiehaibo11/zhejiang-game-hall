
/* cocos2d::ccArrayFastRemoveObjectAtIndex(cocos2d::_ccArray*, long) */

void cocos2d::ccArrayFastRemoveObjectAtIndex(_ccArray *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar2 = (undefined8 *)(lVar1 + param_2 * 8);
  if ((Ref *)*puVar2 != (Ref *)0x0) {
    Ref::release((Ref *)*puVar2);
    lVar1 = *(long *)(param_1 + 0x10);
    puVar2 = (undefined8 *)(lVar1 + param_2 * 8);
  }
  lVar3 = *(long *)param_1;
  *(long *)param_1 = lVar3 + -1;
  *puVar2 = *(undefined8 *)(lVar1 + (lVar3 + -1) * 8);
  return;
}

