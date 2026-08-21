
/* cocos2d::EaseSineOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseSineOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ecf45c to 00fcf4eb has its CatchHandler @ 00ecf2f4 */
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f5df8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5e60;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ecf344 with catch @ 00ecf494 */
      *(ActionInterval **)(this + 0x58) = param_1;
                    /* catch() { ... } // from try @ 00ecf3d8 with catch @ 00ecf498 */
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

