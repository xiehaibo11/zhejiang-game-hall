
/* cocos2d::FlipX::reverse() const */

Action * __thiscall cocos2d::FlipX::reverse(FlipX *this)

{
  FlipX FVar1;
  Action *this_00;
  
  FVar1 = this[0x51];
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00ed902c to 00fd9037 has its CatchHandler @ 00ed9058 */
    this_00[0x51] = (Action)((byte)FVar1 ^ 1);
                    /* try { // try from 00ed9038 to 00fd903f has its CatchHandler @ 00ed9040 */
    *(undefined ***)this_00 = &PTR__Action_016f81c0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed8d08 with catch @ 00ed9040
                       catch(type#1 @ 00000000) { ... } // from try @ 00ed9038 with catch @ 00ed9040
                       try { // try from 00ed9040 to 00fd90a7 has its CatchHandler @ 00ed8adc */
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8220;
    Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

