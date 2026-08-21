
/* non-virtual thunk to cocos2d::EaseBounceInOut::~EaseBounceInOut() */

void __thiscall cocos2d::EaseBounceInOut::~EaseBounceInOut(EaseBounceInOut *this)

{
  Action *this_00;
  
                    /* catch() { ... } // from try @ 00ed2b20 with catch @ 00ed2ac8 */
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
                    /* try { // try from 00ed2af0 to 00fd2b1f has its CatchHandler @ 00ed2b2c */
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

