
/* non-virtual thunk to cocos2d::EaseCubicActionIn::~EaseCubicActionIn() */

void __thiscall cocos2d::EaseCubicActionIn::~EaseCubicActionIn(EaseCubicActionIn *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
                    /* try { // try from 00ed3ca8 to 00fd3cc3 has its CatchHandler @ 00ed413c */
  Action::~Action((Action *)(this + -0x28));
  return;
}

