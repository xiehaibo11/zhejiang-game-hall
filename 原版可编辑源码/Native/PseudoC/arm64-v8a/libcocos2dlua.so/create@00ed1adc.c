
/* cocos2d::EaseElasticOut::create(cocos2d::ActionInterval*, float) */

Action * cocos2d::EaseElasticOut::create(ActionInterval *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed1ae0 to 00fd1aef has its CatchHandler @ 00ed2808 */
                    /* try { // try from 00ed1af4 to 00fd1b13 has its CatchHandler @ 00ed282c */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* try { // try from 00ed1b14 to 00fd1b1b has its CatchHandler @ 00ed27e0 */
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6fe0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7048;
                    /* try { // try from 00ed1b40 to 00fd1b4f has its CatchHandler @ 00ed2804 */
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
                    /* try { // try from 00ed1b54 to 00fd1b73 has its CatchHandler @ 00ed2828 */
      *(float *)(this + 0x60) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

