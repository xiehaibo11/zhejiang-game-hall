
/* cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut() */

void __thiscall
cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut(EaseQuinticActionInOut *this)

{
                    /* try { // try from 00ed3798 to 00fd37eb has its CatchHandler @ 00ed3798
                       catch() { ... } // from try @ 00ed3798 with catch @ 00ed3798
                       catch() { ... } // from try @ 00ed37f4 with catch @ 00ed3798 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

