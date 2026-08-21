
/* cocos2d::RotateBy::clone() const */

Action * __thiscall cocos2d::RotateBy::clone(RotateBy *this)

{
  Action *this_00;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
                    /* try { // try from 00edf294 to 00fdf29b has its CatchHandler @ 00edf424 */
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00edf2b8 to 00fdf2ff has its CatchHandler @ 00edf434 */
    this_00[0x56] = (Action)0x0;
    *(undefined ***)this_00 = &PTR__Action_016f87c8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8828;
    Vec3::Vec3((Vec3 *)(this_00 + 0x58));
    Vec3::Vec3((Vec3 *)(this_00 + 100));
  }
  fVar2 = *(float *)(this + 0x4c);
  if (this[0x56] == (RotateBy)0x0) {
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
  *(float *)(this_00 + 0x4c) = fVar3;
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined2 *)(this_00 + 0x54) = 1;
  Ref::autorelease((Ref *)this_00);
                    /* try { // try from 00edf358 to 00fdf367 has its CatchHandler @ 00edf424 */
  return this_00;
}

