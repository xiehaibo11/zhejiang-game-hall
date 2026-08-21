
/* non-virtual thunk to cocos2d::EaseBackOut::~EaseBackOut() */

void __thiscall cocos2d::EaseBackOut::~EaseBackOut(EaseBackOut *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* try { // try from 00ed2cdc to 00fd2ce3 has its CatchHandler @ 00ed2d2c */
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00ed2ce4 to 00fd2d47 has its CatchHandler @ 00ed2ca0 */
  Action::~Action((Action *)(this + -0x28));
  return;
}

