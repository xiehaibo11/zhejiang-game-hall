
/* cocos2d::Shaky3D::clone() const */

Action * __thiscall cocos2d::Shaky3D::clone(Shaky3D *this)

{
  undefined4 uVar1;
  Shaky3D SVar2;
  Action *this_00;
  ulong uVar3;
  
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined ***)this_00 = &PTR__Action_016f7ae0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7b48;
  }
  uVar1 = *(undefined4 *)(this + 0x68);
  SVar2 = this[0x6c];
  uVar3 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(this_00 + 0x68) = uVar1;
    *(Shaky3D *)(this_00 + 0x6c) = SVar2;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

