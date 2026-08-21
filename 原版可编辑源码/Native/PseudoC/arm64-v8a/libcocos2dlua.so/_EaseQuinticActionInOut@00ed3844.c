
/* non-virtual thunk to cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut() */

void __thiscall
cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut(EaseQuinticActionInOut *this)

{
  Action *this_00;
  
                    /* catch() { ... } // from try @ 00ed37ec with catch @ 00ed3858 */
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
                    /* catch() { ... } // from try @ 00ed38a0 with catch @ 00ed3874 */
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

