
/* cocos2d::ReverseTime::create(cocos2d::FiniteTimeAction*) */

Action * cocos2d::ReverseTime::create(FiniteTimeAction *param_1)

{
  Action *this;
  Ref *this_00;
  Ref *this_01;
  float fVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ReverseTime_016f88d8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8938;
    this_00 = (Ref *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
    if ((this_00 == (Ref *)0x0) || (this_01 = *(Ref **)(this + 0x58), this_01 == this_00)) {
      log("ReverseTime::initWithAction error: action is null or action equal to _other");
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      fVar1 = 1e-06;
      if (1e-06 < ABS(*(float *)(this_00 + 0x4c))) {
        fVar1 = *(float *)(this_00 + 0x4c);
      }
      *(undefined4 *)(this + 0x50) = 0;
      *(float *)(this + 0x4c) = fVar1;
      *(undefined2 *)(this + 0x54) = 1;
      if (this_01 != (Ref *)0x0) {
        Ref::release(this_01);
      }
      *(Ref **)(this + 0x58) = this_00;
      Ref::retain(this_00);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

