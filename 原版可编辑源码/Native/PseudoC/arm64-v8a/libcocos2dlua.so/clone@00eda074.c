
/* cocos2d::FlipX::clone() const */

Action * __thiscall cocos2d::FlipX::clone(FlipX *this)

{
  FlipX FVar1;
  Action *this_00;
  
                    /* catch() { ... } // from try @ 00eda0e4 with catch @ 00eda074 */
  FVar1 = this[0x51];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00eda0b4 to 00fda0d7 has its CatchHandler @ 00eda210 */
    *(FlipX *)(this_00 + 0x51) = FVar1;
    *(undefined ***)this_00 = &PTR__Action_016f81c0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8220;
    Ref::autorelease((Ref *)this_00);
  }
                    /* try { // try from 00eda0d8 to 00fda0e3 has its CatchHandler @ 00eda20c */
  return this_00;
}

