
/* cocos2d::AccelDeccelAmplitude::create(cocos2d::Action*, float) */

Action * cocos2d::AccelDeccelAmplitude::create(Action *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ed4a78 with catch @ 00ed4ac4 */
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ed4b1c with catch @ 00ed4ae0 */
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__AccelDeccelAmplitude_016f7270;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f72d0;
                    /* try { // try from 00ed4b14 to 00fd4b1b has its CatchHandler @ 00ed4b68 */
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ed4b1c to 00fd4b83 has its CatchHandler @ 00ed4ae0 */
      *(undefined4 *)(this + 0x58) = 0x3f800000;
      *(Action **)(this + 0x60) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

