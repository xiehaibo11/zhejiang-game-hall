
/* cocos2d::BezierTo::clone() const */

Action * __thiscall cocos2d::BezierTo::clone(BezierTo *this)

{
  Action *this_00;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x4c);
  this_00 = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined8 *)(this_00 + 0x78) = 0;
                    /* try { // try from 00ee17ec to 00fe1803 has its CatchHandler @ 00ee18bc */
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar1 = 1e-06;
                    /* try { // try from 00ee1820 to 00fe1827 has its CatchHandler @ 00ee188c */
    if (1e-06 < ABS(fVar4)) {
      fVar1 = fVar4;
    }
                    /* try { // try from 00ee1828 to 00fe18d7 has its CatchHandler @ 00ee17a8 */
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f9088;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f90e8;
    *(float *)(this_00 + 0x4c) = fVar1;
    uVar3 = *(undefined8 *)(this + 0x88);
    uVar2 = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this_00 + 0x90) = *(undefined8 *)(this + 0x90);
    *(undefined8 *)(this_00 + 0x88) = uVar3;
    *(undefined8 *)(this_00 + 0x80) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

