
/* covariant return thunk to cocos2d::StopGrid::clone() const */

Action * __thiscall cocos2d::StopGrid::clone(StopGrid *this)

{
  Action *pAVar1;
  Action *this_00;
  
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f74f8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7558;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

