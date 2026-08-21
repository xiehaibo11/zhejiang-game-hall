
/* cocos2d::ResizeBy::clone() const */

Action * __thiscall cocos2d::ResizeBy::clone(ResizeBy *this)

{
  Action *this_00;
  float fVar1;
  
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8e08;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8e68;
    Size::Size((Size *)(this_00 + 0x58));
    Size::Size((Size *)(this_00 + 0x60));
    Size::Size((Size *)(this_00 + 0x68));
  }
  fVar1 = 1e-06;
  if (1e-06 < ABS(*(float *)(this + 0x4c))) {
    fVar1 = *(float *)(this + 0x4c);
  }
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined2 *)(this_00 + 0x54) = 1;
  *(float *)(this_00 + 0x4c) = fVar1;
  Size::operator=((Size *)(this_00 + 0x58),(Size *)(this + 0x58));
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

