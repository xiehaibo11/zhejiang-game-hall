
/* cocostudio::ArmatureAnimation::setUserObject(cocos2d::Ref*) */

void __thiscall cocostudio::ArmatureAnimation::setUserObject(ArmatureAnimation *this,Ref *param_1)

{
  if (param_1 != (Ref *)0x0) {
    cocos2d::Ref::retain(param_1);
  }
  if (*(Ref **)(this + 0x140) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x140));
  }
  *(Ref **)(this + 0x140) = param_1;
  return;
}

