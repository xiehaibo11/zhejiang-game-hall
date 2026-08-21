
/* non-virtual thunk to cocos2d::EaseExponentialInOut::~EaseExponentialInOut() */

void __thiscall cocos2d::EaseExponentialInOut::~EaseExponentialInOut(EaseExponentialInOut *this)

{
                    /* try { // try from 00ed23b8 to 00fd23c3 has its CatchHandler @ 00ed27c4 */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* try { // try from 00ed23dc to 00fd23e3 has its CatchHandler @ 00ed2874 */
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

