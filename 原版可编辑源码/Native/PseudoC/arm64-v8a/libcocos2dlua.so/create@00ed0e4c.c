
/* cocos2d::EaseCircleActionInOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseCircleActionInOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00ed0e6c to 00fd0e7b has its CatchHandler @ 00ed113c */
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ed0e7c to 00fd0eb3 has its CatchHandler @ 00ed09fc */
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6a70;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6ad8;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ed0eb4 to 00fd0ec3 has its CatchHandler @ 00ed1138 */
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed0ed8 to 00fd0ee7 has its CatchHandler @ 00ed1130 */
  return this;
}

