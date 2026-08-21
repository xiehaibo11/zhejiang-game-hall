
/* cocos2d::AccelAmplitude::create(cocos2d::Action*, float) */

Action * cocos2d::AccelAmplitude::create(Action *param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ed4ca0 with catch @ 00ed4ea8 */
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__AccelAmplitude_016f72f8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7358;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_2);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(undefined4 *)(this + 0x58) = 0x3f800000;
      *(Action **)(this + 0x60) = param_1;
      Ref::retain((Ref *)param_1);
                    /* try { // try from 00ed4ef8 to 00fd5093 has its CatchHandler @ 00ed4ef8
                       catch() { ... } // from try @ 00ed4ef8 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed50b8 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed5190 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed5204 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed5340 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed53b4 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed5428 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed5500 with catch @ 00ed4ef8
                       catch() { ... } // from try @ 00ed56a0 with catch @ 00ed4ef8 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

