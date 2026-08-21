
/* cocos2d::ProgressTo::create(float, float) */

Action * cocos2d::ProgressTo::create(float param_1,float param_2)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ee7ff4 to 00fe802b has its CatchHandler @ 00ee7ff4
                       catch() { ... } // from try @ 00ee7ff4 with catch @ 00ee7ff4
                       catch() { ... } // from try @ 00ee803c with catch @ 00ee7ff4 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* try { // try from 00ee802c to 00fe803b has its CatchHandler @ 00ee807c */
    *(undefined ***)this = &PTR__Action_016f99e0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9a40;
                    /* try { // try from 00ee803c to 00fe8097 has its CatchHandler @ 00ee7ff4 */
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
      *(float *)(this + 0x58) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

