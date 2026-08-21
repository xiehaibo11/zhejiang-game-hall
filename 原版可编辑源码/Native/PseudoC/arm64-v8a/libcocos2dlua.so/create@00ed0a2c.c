
/* cocos2d::EaseQuinticActionInOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseQuinticActionInOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed0a48 to 00fd0a4f has its CatchHandler @ 00ed123c */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ed0a60 to 00fd0b4b has its CatchHandler @ 00ed1240 */
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6878;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f68e0;
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

