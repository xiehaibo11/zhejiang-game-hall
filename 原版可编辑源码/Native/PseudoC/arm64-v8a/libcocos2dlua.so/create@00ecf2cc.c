
/* cocos2d::EaseSineIn::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseSineIn::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ecf254 with catch @ 00ecf2d0 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* try { // try from 00ecf2f4 to 00fcf333 has its CatchHandler @ 00ecf2f4
                       catch() { ... } // from try @ 00ecf2f4 with catch @ 00ecf2f4
                       catch() { ... } // from try @ 00ecf45c with catch @ 00ecf2f4 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f5d50;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f5db8;
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ecf334 to 00fcf33b has its CatchHandler @ 00ecf4cc */
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
                    /* try { // try from 00ecf344 to 00fcf357 has its CatchHandler @ 00ecf494 */
    }
  }
  return this;
}

