
/* cocos2d::EaseQuarticActionIn::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseQuarticActionIn::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00ed0394 to 00fd039b has its CatchHandler @ 00ed0418 */
    *(undefined ***)this = &PTR__ActionEase_016f6530;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6598;
                    /* try { // try from 00ed039c to 00fd0433 has its CatchHandler @ 00ed0334 */
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

