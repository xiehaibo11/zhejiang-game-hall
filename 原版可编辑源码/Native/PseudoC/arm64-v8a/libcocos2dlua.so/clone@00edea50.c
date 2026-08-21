
/* cocos2d::RotateTo::clone() const */

Action * __thiscall cocos2d::RotateTo::clone(RotateTo *this)

{
  Action *this_00;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    this_00[0x56] = (Action)0x0;
                    /* try { // try from 00edea9c to 00fdeb1f has its CatchHandler @ 00edea9c
                       catch() { ... } // from try @ 00edea9c with catch @ 00edea9c
                       catch() { ... } // from try @ 00edeb8c with catch @ 00edea9c */
    *(undefined ***)this_00 = &PTR__Action_016f8740;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f87a0;
    Vec3::Vec3((Vec3 *)(this_00 + 0x58));
    Vec3::Vec3((Vec3 *)(this_00 + 100));
    Vec3::Vec3((Vec3 *)(this_00 + 0x70));
  }
  fVar2 = *(float *)(this + 0x4c);
  if (this[0x56] == (RotateTo)0x0) {
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar2)) {
      fVar3 = fVar2;
    }
    *(undefined8 *)(this_00 + 0x58) = *(undefined8 *)(this + 0x58);
  }
  else {
    uVar1 = *(undefined8 *)(this + 0x58);
    fVar3 = 1e-06;
    if (1e-06 < ABS(fVar2)) {
      fVar3 = fVar2;
    }
    *(undefined4 *)(this_00 + 0x60) = *(undefined4 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x58) = uVar1;
    this_00[0x56] = (Action)0x1;
  }
                    /* try { // try from 00edeb20 to 00fdeb8b has its CatchHandler @ 00edebb8 */
  *(float *)(this_00 + 0x4c) = fVar3;
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined2 *)(this_00 + 0x54) = 1;
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

