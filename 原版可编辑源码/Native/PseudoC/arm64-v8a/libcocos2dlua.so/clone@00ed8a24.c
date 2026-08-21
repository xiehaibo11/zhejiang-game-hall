
/* covariant return thunk to cocos2d::Hide::clone() const */

Action * __thiscall cocos2d::Hide::clone(Hide *this)

{
  Action *pAVar1;
  Action *this_00;
  
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7fe0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8040;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

