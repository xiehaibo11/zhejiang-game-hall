
/* cocos2d::ccArrayRemoveObject(cocos2d::_ccArray*, cocos2d::Ref*, bool) */

void cocos2d::ccArrayRemoveObject(_ccArray *param_1,Ref *param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1;
  if (0 < lVar1) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar2) == param_2) {
        if (lVar3 == 1) {
          return;
        }
        if ((param_3) && (*(Ref **)(*(long *)(param_1 + 0x10) + lVar2) != (Ref *)0x0)) {
          Ref::release(*(Ref **)(*(long *)(param_1 + 0x10) + lVar2));
          lVar1 = *(long *)param_1;
        }
        lVar3 = lVar1 + lVar3 + -1;
        *(long *)param_1 = lVar1 + -1;
        if (lVar3 < 1) {
          return;
        }
        memmove((void *)(*(long *)(param_1 + 0x10) + lVar2),
                (void *)(*(long *)(param_1 + 0x10) + lVar2 + 8),lVar3 * 8);
        return;
      }
      lVar3 = lVar3 + -1;
      lVar2 = lVar2 + 8;
    } while (lVar1 + lVar3 != 0);
  }
  return;
}

