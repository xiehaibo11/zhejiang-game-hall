
/* cocos2d::FlipX3D::clone() const */

Action * __thiscall cocos2d::FlipX3D::clone(FlipX3D *this)

{
  Action *this_00;
  
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7408;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7470;
    Size::Size((Size *)(this_00 + 0x58));
    *(undefined ***)this_00 = &PTR__Action_016f7830;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f78a0;
  }
  (**(code **)(*(long *)this_00 + 0x58))(*(undefined4 *)(this + 0x4c),this_00,this + 0x58);
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

