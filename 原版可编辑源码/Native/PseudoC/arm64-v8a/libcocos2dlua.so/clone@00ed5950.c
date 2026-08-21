
/* cocos2d::ReuseGrid::clone() const */

Action * __thiscall cocos2d::ReuseGrid::clone(ReuseGrid *this)

{
  undefined4 uVar1;
  Action *this_00;
  
  uVar1 = *(undefined4 *)(this + 0x60);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined4 *)(this_00 + 0x60) = uVar1;
    *(undefined ***)this_00 = &PTR__Action_016f7598;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f75f8;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

