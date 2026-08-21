
/* cocos2d::ProgressFromTo::create(float, float, float) */

Action * cocos2d::ProgressFromTo::create(float param_1,float param_2,float param_3)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ee818c with catch @ 00ee82a8
                       catch() { ... } // from try @ 00ee8210 with catch @ 00ee82a8 */
                    /* catch() { ... } // from try @ 00ee81b0 with catch @ 00ee82b8 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f9a80;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9ae0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00ee8318 to 00fe834b has its CatchHandler @ 00ee8318
                       catch() { ... } // from try @ 00ee8318 with catch @ 00ee8318
                       catch() { ... } // from try @ 00ee835c with catch @ 00ee8318 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(float *)(this + 0x58) = param_3;
      *(float *)(this + 0x5c) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

