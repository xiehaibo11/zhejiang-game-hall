
/* cocos2d::EaseQuarticActionIn::~EaseQuarticActionIn() */

void __thiscall cocos2d::EaseQuarticActionIn::~EaseQuarticActionIn(EaseQuarticActionIn *this)

{
                    /* try { // try from 00ed31e8 to 00fd323b has its CatchHandler @ 00ed31e8
                       catch() { ... } // from try @ 00ed31e8 with catch @ 00ed31e8
                       catch() { ... } // from try @ 00ed3244 with catch @ 00ed31e8 */
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

