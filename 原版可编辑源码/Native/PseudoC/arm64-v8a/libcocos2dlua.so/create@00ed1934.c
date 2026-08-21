
/* cocos2d::EaseElasticIn::create(cocos2d::ActionInterval*, float) */

Action * cocos2d::EaseElasticIn::create(ActionInterval *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed1944 to 00fd1953 has its CatchHandler @ 00ed2858 */
                    /* try { // try from 00ed1954 to 00fd19c7 has its CatchHandler @ 00ed1904 */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6f20;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6f88;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      *(float *)(this + 0x60) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed19c8 to 00fd19d3 has its CatchHandler @ 00ed2850 */
  return this;
}

