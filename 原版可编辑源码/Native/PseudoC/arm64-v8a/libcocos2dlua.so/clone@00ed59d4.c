
/* covariant return thunk to cocos2d::ReuseGrid::clone() const */

Action * __thiscall cocos2d::ReuseGrid::clone(ReuseGrid *this)

{
  Action *pAVar1;
  undefined4 uVar2;
  Action *this_00;
  
  uVar2 = *(undefined4 *)(this + 0x38);
  this_00 = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined4 *)(this_00 + 0x60) = uVar2;
    *(undefined ***)this_00 = &PTR__Action_016f7598;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f75f8;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

