
/* cocos2d::ccArrayAppendObject(cocos2d::_ccArray*, cocos2d::Ref*) */

void cocos2d::ccArrayAppendObject(_ccArray *param_1,Ref *param_2)

{
  long lVar1;
  
  Ref::retain(param_2);
  lVar1 = *(long *)param_1;
  *(Ref **)(*(long *)(param_1 + 0x10) + lVar1 * 8) = param_2;
  *(long *)param_1 = lVar1 + 1;
  return;
}

