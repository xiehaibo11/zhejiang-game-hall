
/* covariant return thunk to cocos2d::ToggleVisibility::clone() const */

Action * __thiscall cocos2d::ToggleVisibility::clone(ToggleVisibility *this)

{
  Action *pAVar1;
  Action *this_00;
  
                    /* try { // try from 00ed8c64 to 00fd8c73 has its CatchHandler @ 00ed9088 */
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f8080;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f80e0;
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ed8cbc to 00fd8ccb has its CatchHandler @ 00ed9064 */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

