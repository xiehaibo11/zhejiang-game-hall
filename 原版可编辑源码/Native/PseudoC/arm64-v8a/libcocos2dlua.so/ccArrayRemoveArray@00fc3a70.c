
/* cocos2d::ccArrayRemoveArray(cocos2d::_ccArray*, cocos2d::_ccArray*) */

void cocos2d::ccArrayRemoveArray(_ccArray *param_1,_ccArray *param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(long *)param_2) {
    lVar2 = 0;
    do {
      lVar1 = *(long *)param_1;
      if (0 < lVar1) {
        lVar3 = 0;
        lVar4 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x10) + lVar4) ==
              *(long *)(*(long *)(param_2 + 0x10) + lVar2 * 8)) {
            if (lVar3 != 1) {
              this = *(Ref **)(*(long *)(param_1 + 0x10) + lVar4);
              if (this != (Ref *)0x0) {
                Ref::release(this);
                lVar1 = *(long *)param_1;
              }
              lVar3 = lVar1 + lVar3 + -1;
              *(long *)param_1 = lVar1 + -1;
              if (0 < lVar3) {
                memmove((void *)(*(long *)(param_1 + 0x10) + lVar4),
                        (void *)(*(long *)(param_1 + 0x10) + lVar4 + 8),lVar3 * 8);
              }
            }
            break;
          }
          lVar3 = lVar3 + -1;
          lVar4 = lVar4 + 8;
        } while (lVar1 + lVar3 != 0);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(long *)param_2);
  }
  return;
}

