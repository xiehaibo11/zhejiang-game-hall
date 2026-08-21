
/* cocos2d::BezierBy::clone() const */

Action * __thiscall cocos2d::BezierBy::clone(BezierBy *this)

{
  Action *this_00;
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x4c);
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined2 *)(this_00 + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(fVar4)) {
      fVar1 = fVar4;
    }
    *(undefined4 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x70) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8fe8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f9048;
    *(float *)(this_00 + 0x4c) = fVar1;
    uVar3 = *(undefined8 *)(this + 0x60);
    uVar2 = *(undefined8 *)(this + 0x58);
    *(undefined8 *)(this_00 + 0x68) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this_00 + 0x60) = uVar3;
    *(undefined8 *)(this_00 + 0x58) = uVar2;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

