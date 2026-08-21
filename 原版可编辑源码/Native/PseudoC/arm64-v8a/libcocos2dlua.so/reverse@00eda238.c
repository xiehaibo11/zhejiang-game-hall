
/* cocos2d::FlipY::reverse() const */

Action * __thiscall cocos2d::FlipY::reverse(FlipY *this)

{
  FlipY FVar1;
  Action *this_00;
  
  FVar1 = this[0x51];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    this_00[0x51] = (Action)((byte)FVar1 ^ 1);
    *(undefined ***)this_00 = &PTR__Action_016f8260;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f82c0;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

