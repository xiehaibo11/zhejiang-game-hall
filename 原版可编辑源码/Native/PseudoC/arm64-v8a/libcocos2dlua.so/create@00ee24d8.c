
/* cocos2d::Blink::create(float, int) */

Action * cocos2d::Blink::create(float param_1,int param_2)

{
  Action *this;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee2468 with catch @ 00ee24e8 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ee2534 with catch @ 00ee2504 */
  if (this != (Action *)0x0) {
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f9268;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f92c8;
                    /* try { // try from 00ee252c to 00fe2533 has its CatchHandler @ 00ee25c8 */
    if (param_2 < 0) {
      log("Blink::initWithDuration error:blinks should be >= 0");
      (**(code **)(*(long *)this + 8))(this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ee2534 to 00fe25e3 has its CatchHandler @ 00ee2504 */
      fVar1 = 1e-06;
      if (1e-06 < ABS(param_1)) {
        fVar1 = param_1;
      }
      *(undefined4 *)(this + 0x50) = 0;
      *(undefined2 *)(this + 0x54) = 1;
      *(float *)(this + 0x4c) = fVar1;
      *(int *)(this + 0x58) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

