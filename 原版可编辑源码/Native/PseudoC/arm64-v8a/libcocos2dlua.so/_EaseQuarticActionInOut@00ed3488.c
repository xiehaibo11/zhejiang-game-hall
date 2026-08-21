
/* non-virtual thunk to cocos2d::EaseQuarticActionInOut::~EaseQuarticActionInOut() */

void __thiscall
cocos2d::EaseQuarticActionInOut::~EaseQuarticActionInOut(EaseQuarticActionInOut *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* try { // try from 00ed34bc to 00fd34c3 has its CatchHandler @ 00ed3528 */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00ed34c4 to 00fd3543 has its CatchHandler @ 00ed3468 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

