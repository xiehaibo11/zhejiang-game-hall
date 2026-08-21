
/* cocos2d::ProgressFromTo::reverse() const */

Action * __thiscall cocos2d::ProgressFromTo::reverse(ProgressFromTo *this)

{
  Action *this_00;
  ulong uVar1;
  float fVar2;
  undefined8 uVar3;
  
                    /* try { // try from 00ee848c to 00fe84e3 has its CatchHandler @ 00ee84e4 */
  fVar2 = *(float *)(this + 0x4c);
  uVar3 = *(undefined8 *)(this + 0x58);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9a80;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9ae0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar2);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00ee8500 to 00fe863b has its CatchHandler @ 00ee8500
                       catch() { ... } // from try @ 00ee8500 with catch @ 00ee8500
                       catch() { ... } // from try @ 00ee8644 with catch @ 00ee8500 */
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Action *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ee841c with catch @ 00ee84e4
                       catch() { ... } // from try @ 00ee848c with catch @ 00ee84e4
                       try { // try from 00ee84e4 to 00fe84ff has its CatchHandler @ 00ee83b0 */
      uVar3 = NEON_rev64(uVar3,4);
      *(undefined8 *)(this_00 + 0x58) = uVar3;
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

