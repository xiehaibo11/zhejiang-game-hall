
/* cocos2d::ccArrayFastRemoveObject(cocos2d::_ccArray*, cocos2d::Ref*) */

void cocos2d::ccArrayFastRemoveObject(_ccArray *param_1,Ref *param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)param_1;
  if (0 < lVar1) {
    lVar4 = 0;
    lVar2 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar2 * 8) == param_2) {
        if (lVar2 == -1) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x10);
        this = *(Ref **)(lVar3 + lVar2 * 8);
        if (this != (Ref *)0x0) {
          Ref::release(this);
          lVar3 = *(long *)(param_1 + 0x10);
          lVar1 = *(long *)param_1;
        }
        *(long *)param_1 = lVar1 + -1;
        *(undefined8 *)(lVar3 - lVar4) = *(undefined8 *)(lVar3 + (lVar1 + -1) * 8);
        return;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar2 < lVar1);
  }
  return;
}

