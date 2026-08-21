
/* cocos2d::DeccelAmplitude::create(cocos2d::Action*, float) */

Action * cocos2d::DeccelAmplitude::create(Action *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__DeccelAmplitude_016f7380;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f73e0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(undefined4 *)(this + 0x58) = 0x3f800000;
      *(Action **)(this + 0x60) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

