
/* cocos2d::EaseBezierAction::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseBezierAction::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f7130;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f71a0;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
                    /* try { // try from 00ed1ea8 to 00fd1eab has its CatchHandler @ 00ed2798 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed1ec0 to 00fd1f03 has its CatchHandler @ 00ed2874 */
  return this;
}

