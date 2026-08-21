
/* cocos2d::FadeTo::create(float, unsigned char) */

Action * cocos2d::FadeTo::create(float param_1,uchar param_2)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Action_016f9308;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9368;
    *(float *)(this + 0x4c) = fVar1;
    this[0x56] = (Action)param_2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

