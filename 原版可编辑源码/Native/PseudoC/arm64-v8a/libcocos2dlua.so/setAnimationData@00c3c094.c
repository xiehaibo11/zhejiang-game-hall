
/* cocostudio::ArmatureAnimation::setAnimationData(cocostudio::AnimationData*) */

void __thiscall
cocostudio::ArmatureAnimation::setAnimationData(ArmatureAnimation *this,AnimationData *param_1)

{
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x58);
  if (this_00 != (Ref *)param_1) {
    if (param_1 != (AnimationData *)0x0) {
      cocos2d::Ref::retain((Ref *)param_1);
      this_00 = *(Ref **)(this + 0x58);
    }
    if (this_00 != (Ref *)0x0) {
      cocos2d::Ref::release(this_00);
    }
    *(AnimationData **)(this + 0x58) = param_1;
  }
  return;
}

