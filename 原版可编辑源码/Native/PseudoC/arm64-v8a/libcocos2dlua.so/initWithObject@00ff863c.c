
/* cocos2d::__Array::initWithObject(cocos2d::Ref*) */

undefined8 __thiscall cocos2d::__Array::initWithObject(__Array *this,Ref *param_1)

{
  _ccArray *p_Var1;
  
  p_Var1 = (_ccArray *)ccArrayNew(7);
  *(_ccArray **)(this + 0x30) = p_Var1;
  ccArrayAppendObjectWithResize(p_Var1,param_1);
  return 1;
}

