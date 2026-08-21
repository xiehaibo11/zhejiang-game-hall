
/* cocos2d::ccArrayFullRemoveArray(cocos2d::_ccArray*, cocos2d::_ccArray*) */

void cocos2d::ccArrayFullRemoveArray(_ccArray *param_1,_ccArray *param_2)

{
  Ref *this;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 009a17e0 to 00aa17eb has its CatchHandler @ 009a199c */
                    /* try { // try from 009a17ec to 00aa1927 has its CatchHandler @ 009a19b4 */
  lVar1 = *(long *)param_1;
  if (lVar1 < 1) {
    lVar4 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    do {
      this = *(Ref **)(*(long *)(param_1 + 0x10) + lVar3 * 8);
      if (0 < *(long *)param_2) {
        lVar2 = 0;
        do {
          if (*(Ref **)(*(long *)(param_2 + 0x10) + lVar2 * 8) == this) {
            if (lVar2 != -1) {
              if (this != (Ref *)0x0) {
                Ref::release(this);
                lVar1 = *(long *)param_1;
              }
              lVar4 = lVar4 + 1;
              goto LAB_009a1874;
            }
            break;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 < *(long *)param_2);
      }
      *(Ref **)(*(long *)(param_1 + 0x10) + (lVar3 - lVar4) * 8) = this;
LAB_009a1874:
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar1);
  }
  *(long *)param_1 = lVar1 - lVar4;
  return;
}

