
/* cocos2d::EaseCircleActionOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseCircleActionOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed0d04 to 00fd0d13 has its CatchHandler @ 00ed1168 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00ed0d28 to 00fd0d37 has its CatchHandler @ 00ed1160 */
    *(undefined ***)this = &PTR__ActionEase_016f69c8;
                    /* try { // try from 00ed0d38 to 00fd0d6f has its CatchHandler @ 00ed09fc */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6a30;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
                    /* try { // try from 00ed0d70 to 00fd0d7f has its CatchHandler @ 00ed115c */
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

