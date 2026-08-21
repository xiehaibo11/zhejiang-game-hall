
/* non-virtual thunk to cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut() */

void __thiscall
cocos2d::EaseQuinticActionInOut::~EaseQuinticActionInOut(EaseQuinticActionInOut *this)

{
                    /* try { // try from 00ed37ec to 00fd37f3 has its CatchHandler @ 00ed3858 */
                    /* try { // try from 00ed37f4 to 00fd3873 has its CatchHandler @ 00ed3798 */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

