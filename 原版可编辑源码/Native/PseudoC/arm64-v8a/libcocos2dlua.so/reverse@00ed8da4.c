
/* cocos2d::RemoveSelf::reverse() const */

Action * __thiscall cocos2d::RemoveSelf::reverse(RemoveSelf *this)

{
  RemoveSelf RVar1;
  Action *this_00;
  
  RVar1 = this[0x51];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* try { // try from 00ed8dd4 to 00fd8df3 has its CatchHandler @ 00ed905c */
    *(undefined4 *)(this_00 + 0x4c) = 0;
    *(RemoveSelf *)(this_00 + 0x51) = RVar1;
    *(undefined ***)this_00 = &PTR__Action_016f8120;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8180;
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00ed8e08 to 00fd8e0f has its CatchHandler @ 00ed9068 */
  return this_00;
}

