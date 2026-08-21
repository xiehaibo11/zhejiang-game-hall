
/* cocos2d::EaseExponentialInOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseExponentialInOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ecf108 with catch @ 00ecf184 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f5ca8;
                    /* try { // try from 00ecf1b8 to 00fcf253 has its CatchHandler @ 00ecf1b8
                       catch() { ... } // from try @ 00ecf1b8 with catch @ 00ecf1b8
                       catch() { ... } // from try @ 00ecf26c with catch @ 00ecf1b8 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5d10;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

