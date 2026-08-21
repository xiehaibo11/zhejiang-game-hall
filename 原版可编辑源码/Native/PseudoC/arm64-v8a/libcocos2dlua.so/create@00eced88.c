
/* cocos2d::EaseRateAction::create(cocos2d::ActionInterval*, float) */

Action * cocos2d::EaseRateAction::create(ActionInterval *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00eceda4 to 00fcee4b has its CatchHandler @ 00ecec00 */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f71e0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7248;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      *(float *)(this + 0x60) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

