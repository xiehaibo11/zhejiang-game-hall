
/* cocos2d::Speed::setInnerAction(cocos2d::ActionInterval*) */

void __thiscall cocos2d::Speed::setInnerAction(Speed *this,ActionInterval *param_1)

{
  Ref *this_00;
  
                    /* catch() { ... } // from try @ 00ecb5c8 with catch @ 00ecb59c */
  this_00 = *(Ref **)(this + 0x50);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(ActionInterval **)(this + 0x50) = param_1;
                    /* try { // try from 00ecb5c0 to 00fcb5c7 has its CatchHandler @ 00ecb60c */
    if (param_1 != (ActionInterval *)0x0) {
                    /* try { // try from 00ecb5c8 to 00fcb627 has its CatchHandler @ 00ecb59c */
      Ref::retain((Ref *)param_1);
      return;
    }
  }
  return;
}

