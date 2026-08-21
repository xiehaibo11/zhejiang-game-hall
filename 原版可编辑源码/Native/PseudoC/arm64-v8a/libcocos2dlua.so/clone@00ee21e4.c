
/* cocos2d::ScaleBy::clone() const */

Action * __thiscall cocos2d::ScaleBy::clone(ScaleBy *this)

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
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar3 = fVar4;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x70) = uVar2;
    *(undefined2 *)(this_00 + 0x54) = 1;
    *(undefined ***)this_00 = &PTR__Action_016f91c8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9228;
    *(float *)(this_00 + 0x4c) = fVar3;
    *(undefined4 *)(this_00 + 0x78) = uVar1;
                    /* catch() { ... } // from try @ 00ee21a8 with catch @ 00ee2270 */
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

