
/* covariant return thunk to cocos2d::RemoveSelf::clone() const */

Action * __thiscall cocos2d::RemoveSelf::clone(RemoveSelf *this)

{
  Action *pAVar1;
  RemoveSelf RVar2;
  Action *this_00;
  
  RVar2 = this[0x29];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(RemoveSelf *)(this_00 + 0x51) = RVar2;
                    /* try { // try from 00ed8ef8 to 00fd8f07 has its CatchHandler @ 00ed9060 */
    *(undefined ***)this_00 = &PTR__Action_016f8120;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8180;
    Ref::autorelease((Ref *)this_00);
  }
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

