
/* cocos2d::ProgressFromTo::clone() const */

Action * __thiscall cocos2d::ProgressFromTo::clone(ProgressFromTo *this)

{
  Action *this_00;
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 00ee8424 with catch @ 00ee83b0
                       catch() { ... } // from try @ 00ee84e4 with catch @ 00ee83b0 */
  fVar3 = *(float *)(this + 0x4c);
  uVar2 = *(undefined8 *)(this + 0x58);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9a80;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9ae0;
    uVar1 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar3);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00ee841c to 00fe8423 has its CatchHandler @ 00ee84e4 */
                    /* try { // try from 00ee8424 to 00fe848b has its CatchHandler @ 00ee83b0 */
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Action *)0x0;
    }
    else {
      *(undefined8 *)(this_00 + 0x58) = uVar2;
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

