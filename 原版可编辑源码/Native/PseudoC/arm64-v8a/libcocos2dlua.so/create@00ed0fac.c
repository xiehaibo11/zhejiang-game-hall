
/* cocos2d::EaseCubicActionIn::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseCubicActionIn::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed0fb0 to 00fd0fbf has its CatchHandler @ 00ed1118 */
                    /* try { // try from 00ed0fc0 to 00fd0ff7 has its CatchHandler @ 00ed09fc */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6b18;
                    /* try { // try from 00ed0ff8 to 00fd1007 has its CatchHandler @ 00ed1114 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6b80;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
                    /* try { // try from 00ed102c to 00fd1063 has its CatchHandler @ 00ed09fc */
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
                    /* try { // try from 00ed101c to 00fd102b has its CatchHandler @ 00ed110c */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

