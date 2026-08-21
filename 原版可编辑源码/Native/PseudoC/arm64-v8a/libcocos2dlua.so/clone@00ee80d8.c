
/* cocos2d::ProgressTo::clone() const */

Action * __thiscall cocos2d::ProgressTo::clone(ProgressTo *this)

{
  undefined4 uVar1;
  Action *this_00;
  ulong uVar2;
  float fVar3;
  
                    /* try { // try from 00ee80d8 to 00fe80ef has its CatchHandler @ 00ee8294 */
  fVar3 = *(float *)(this + 0x4c);
  uVar1 = *(undefined4 *)(this + 0x58);
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
                    /* try { // try from 00ee8108 to 00fe811b has its CatchHandler @ 00ee8274 */
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f99e0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9a40;
    uVar2 = ActionInterval::initWithDuration((ActionInterval *)this_00,fVar3);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (Action *)0x0;
    }
    else {
      *(undefined4 *)(this_00 + 0x58) = uVar1;
      Ref::autorelease((Ref *)this_00);
    }
  }
  return this_00;
}

