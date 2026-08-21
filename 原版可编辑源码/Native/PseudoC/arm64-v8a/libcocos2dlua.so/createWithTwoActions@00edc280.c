
/* cocos2d::Sequence::createWithTwoActions(cocos2d::FiniteTimeAction*, cocos2d::FiniteTimeAction*)
    */

Action * cocos2d::Sequence::createWithTwoActions
                   (FiniteTimeAction *param_1,FiniteTimeAction *param_2)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined ***)this = &PTR__Sequence_016f8520;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8580;
    if ((param_1 == (FiniteTimeAction *)0x0) || (param_2 == (FiniteTimeAction *)0x0)) {
      log("Sequence::initWithTwoActions error: action is nullptr!!");
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      fVar1 = 1e-06;
      if (1e-06 < ABS(*(float *)(param_1 + 0x4c) + *(float *)(param_2 + 0x4c))) {
        fVar1 = *(float *)(param_1 + 0x4c) + *(float *)(param_2 + 0x4c);
      }
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined2 *)(this + 0x54) = 1;
      *(float *)(this + 0x4c) = fVar1;
      *(FiniteTimeAction **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      *(FiniteTimeAction **)(this + 0x60) = param_2;
      Ref::retain((Ref *)param_2);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

