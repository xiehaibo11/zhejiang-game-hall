
/* non-virtual thunk to cocos2d::EaseCubicActionOut::~EaseCubicActionOut() */

void __thiscall cocos2d::EaseCubicActionOut::~EaseCubicActionOut(EaseCubicActionOut *this)

{
                    /* try { // try from 00ed3df4 to 00fd3e0f has its CatchHandler @ 00ed412c */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

