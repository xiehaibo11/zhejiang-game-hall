
/* cocos2d::ccArrayFullRemoveArray(cocos2d::_ccArray*, cocos2d::_ccArray*) */

void cocos2d::ccArrayFullRemoveArray(_ccArray *param_1,_ccArray *param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)param_1;
  if (lVar1 < 1) {
    lVar6 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar2 = *(long *)param_2;
      this = *(Ref **)(*(long *)(param_1 + 0x10) + lVar5 * 8);
      if (0 < lVar2) {
        puVar3 = *(undefined8 **)(param_2 + 0x10);
        lVar4 = -1;
        do {
          if ((Ref *)*puVar3 == this) {
            if (lVar4 != 0) {
              if (this != (Ref *)0x0) {
                Ref::release(this);
                lVar1 = *(long *)param_1;
              }
              lVar6 = lVar6 + 1;
              goto LAB_00fc3ba4;
            }
            break;
          }
          puVar3 = puVar3 + 1;
          lVar2 = lVar2 + -1;
          lVar4 = lVar4 + -1;
        } while (lVar2 != 0);
      }
      *(Ref **)(*(long *)(param_1 + 0x10) + (lVar5 - lVar6) * 8) = this;
LAB_00fc3ba4:
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar1);
  }
  *(long *)param_1 = lVar1 - lVar6;
  return;
}

