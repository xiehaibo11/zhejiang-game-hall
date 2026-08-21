
/* cocos2d::DelayTime::create(float) */

Action * cocos2d::DelayTime::create(float param_1)

{
  Action *this;
  float fVar1;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    fVar1 = 1e-06;
                    /* catch() { ... } // from try @ 00ede09c with catch @ 00ede108 */
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined ***)this = &PTR__Action_016f9628;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9688;
    *(float *)(this + 0x4c) = fVar1;
    *(undefined2 *)(this + 0x54) = 1;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

