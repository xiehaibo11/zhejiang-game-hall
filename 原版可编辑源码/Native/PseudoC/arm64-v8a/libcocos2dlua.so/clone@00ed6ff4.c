
/* cocos2d::Ripple3D::clone() const */

Action * __thiscall cocos2d::Ripple3D::clone(Ripple3D *this)

{
  undefined4 uVar1;
  Action *this_00;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  this_00 = operator_new(0x80,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7a38;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7aa0;
  }
  uVar4 = *(undefined8 *)(this + 0x70);
  uVar1 = *(undefined4 *)(this + 0x78);
  uVar2 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(this + 0x68);
    *(undefined4 *)(this_00 + 0x78) = uVar1;
    *(undefined4 *)(this_00 + 0x7c) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x68) = uVar3;
    *(undefined8 *)(this_00 + 0x70) = uVar4;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

