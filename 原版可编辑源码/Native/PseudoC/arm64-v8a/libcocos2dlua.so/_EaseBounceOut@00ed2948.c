
/* non-virtual thunk to cocos2d::EaseBounceOut::~EaseBounceOut() */

void __thiscall cocos2d::EaseBounceOut::~EaseBounceOut(EaseBounceOut *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
                    /* catch() { ... } // from try @ 00ed2a0c with catch @ 00ed2970 */
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

