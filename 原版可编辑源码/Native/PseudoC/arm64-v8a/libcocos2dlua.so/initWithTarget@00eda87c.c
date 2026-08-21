
/* cocos2d::CallFunc::initWithTarget(cocos2d::Ref*) */

undefined8 __thiscall cocos2d::CallFunc::initWithTarget(CallFunc *this,Ref *param_1)

{
  if (param_1 != (Ref *)0x0) {
    Ref::retain(param_1);
  }
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  *(Ref **)(this + 0x58) = param_1;
  return 1;
}

