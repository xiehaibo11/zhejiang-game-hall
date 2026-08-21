
/* cocos2d::FadeOut::create(float) */

Action * cocos2d::FadeOut::create(float param_1)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Action_016f9448;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f94a8;
    *(float *)(this + 0x4c) = fVar1;
    this[0x56] = (Action)0x0;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

