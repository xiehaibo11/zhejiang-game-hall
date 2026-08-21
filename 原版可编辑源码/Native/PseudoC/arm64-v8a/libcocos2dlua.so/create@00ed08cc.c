
/* cocos2d::EaseQuinticActionOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseQuinticActionOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed08dc to 00fd08e3 has its CatchHandler @ 00ed0930 */
                    /* try { // try from 00ed08e4 to 00fd095b has its CatchHandler @ 00ed0888 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f67d0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6838;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ed08dc with catch @ 00ed0930 */
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
                    /* catch() { ... } // from try @ 00ed08c0 with catch @ 00ed0940 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

