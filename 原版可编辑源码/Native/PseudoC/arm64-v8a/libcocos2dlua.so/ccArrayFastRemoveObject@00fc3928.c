
/* cocos2d::ccArrayFastRemoveObject(cocos2d::_ccArray*, cocos2d::Ref*) */

void cocos2d::ccArrayFastRemoveObject(_ccArray *param_1,Ref *param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1;
  if (0 < lVar1) {
    lVar3 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar3 * 8) == param_2) {
        if (lVar3 == -1) {
          return;
        }
        lVar2 = *(long *)(param_1 + 0x10);
        this = *(Ref **)(lVar2 + lVar3 * 8);
        if (this != (Ref *)0x0) {
          Ref::release(this);
          lVar2 = *(long *)(param_1 + 0x10);
          lVar1 = *(long *)param_1;
        }
        *(long *)param_1 = lVar1 + -1;
        *(undefined8 *)(lVar2 + lVar3 * 8) = *(undefined8 *)(lVar2 + (lVar1 + -1) * 8);
        return;
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  return;
}

