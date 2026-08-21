
/* covariant return thunk to cocos2d::Show::clone() const */

Action * __thiscall cocos2d::Show::clone(Show *this)

{
  Action *pAVar1;
  Action *this_00;
  
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* try { // try from 00ed88b4 to 00fd88d7 has its CatchHandler @ 00ed8934 */
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(undefined ***)this_00 = &PTR__Action_016f7f40;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f7fa0;
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ed88d8 to 00fd896b has its CatchHandler @ 00ed8754 */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

