
/* cocos2d::ScaleTo::clone() const */

Action * __thiscall cocos2d::ScaleTo::clone(ScaleTo *this)

{
  undefined4 uVar1;
  Action *this_00;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x4c);
  uVar2 = *(undefined8 *)(this + 0x70);
  uVar1 = *(undefined4 *)(this + 0x78);
  this_00 = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* catch() { ... } // from try @ 00ee1cb8 with catch @ 00ee1d24 */
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
                    /* catch() { ... } // from try @ 00ee1c88 with catch @ 00ee1d54 */
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x70) = uVar2;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f9128;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9188;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(undefined4 *)(this_00 + 0x78) = uVar1;
                    /* try { // try from 00ee1d70 to 00fe1da3 has its CatchHandler @ 00ee1d70
                       catch() { ... } // from try @ 00ee1d70 with catch @ 00ee1d70
                       catch() { ... } // from try @ 00ee1ddc with catch @ 00ee1d70 */
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

