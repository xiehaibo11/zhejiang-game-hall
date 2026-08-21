
/* cocos2d::TargetedAction::reverse() const */

Action * __thiscall cocos2d::TargetedAction::reverse(TargetedAction *this)

{
  Ref *this_00;
  Action *this_01;
  Ref *this_02;
  float fVar1;
  
  this_01 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_01 != (Action *)0x0) {
    Action::Action(this_01);
    *(undefined4 *)(this_01 + 0x4c) = 0;
    *(undefined8 *)(this_01 + 0x58) = 0;
    *(undefined8 *)(this_01 + 0x60) = 0;
    *(undefined ***)this_01 = &PTR__TargetedAction_016f89e8;
    *(undefined ***)(this_01 + 0x28) = &PTR_clone_016f8a48;
  }
  this_00 = *(Ref **)(this + 0x60);
                    /* try { // try from 00ee4ce4 to 00fe4d53 has its CatchHandler @ 00ee4b94 */
  this_02 = (Ref *)(**(code **)(**(long **)(this + 0x58) + 0x20))();
  fVar1 = 1e-06;
  if (1e-06 < ABS(*(float *)(this_02 + 0x4c))) {
    fVar1 = *(float *)(this_02 + 0x4c);
  }
  *(undefined4 *)(this_01 + 0x50) = 0;
  *(float *)(this_01 + 0x4c) = fVar1;
  *(undefined2 *)(this_01 + 0x54) = 1;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  *(Ref **)(this_01 + 0x60) = this_00;
  Ref::retain(this_02);
                    /* catch() { ... } // from try @ 00ee4bf0 with catch @ 00ee4d38 */
  *(Ref **)(this_01 + 0x58) = this_02;
  Ref::autorelease((Ref *)this_01);
  return this_01;
}

