
/* cocos2d::Liquid::clone() const */

Action * __thiscall cocos2d::Liquid::clone(Liquid *this)

{
  Action *this_00;
  ulong uVar1;
  undefined8 uVar2;
  
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined ***)this_00 = &PTR__Action_016f7b88;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7bf0;
  }
  uVar2 = *(undefined8 *)(this + 0x68);
  uVar1 = GridAction::initWithDuration
                    ((GridAction *)this_00,*(float *)(this + 0x4c),(Size *)(this + 0x58));
  if ((uVar1 & 1) != 0) {
    *(undefined8 *)(this_00 + 0x68) = uVar2;
    *(undefined4 *)(this_00 + 0x70) = 0x3f800000;
  }
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

