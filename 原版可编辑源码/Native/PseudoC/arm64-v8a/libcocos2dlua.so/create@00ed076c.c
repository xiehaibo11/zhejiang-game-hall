
/* cocos2d::EaseQuinticActionIn::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseQuinticActionIn::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ed07cc with catch @ 00ed076c */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00ed07a8 to 00fd07af has its CatchHandler @ 00ed0834 */
    *(undefined ***)this = &PTR__ActionEase_016f6728;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6790;
                    /* try { // try from 00ed07c4 to 00fd07cb has its CatchHandler @ 00ed0824 */
                    /* try { // try from 00ed07cc to 00fd084f has its CatchHandler @ 00ed076c */
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

