
/* cocos2d::ccArrayGetIndexOfObject(cocos2d::_ccArray*, cocos2d::Ref*) */

long cocos2d::ccArrayGetIndexOfObject(_ccArray *param_1,Ref *param_2)

{
  long lVar1;
  
  if (0 < *(long *)param_1) {
    lVar1 = 0;
    do {
      if (*(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) == param_2) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (*(long *)param_1 != lVar1);
  }
  return -1;
}

