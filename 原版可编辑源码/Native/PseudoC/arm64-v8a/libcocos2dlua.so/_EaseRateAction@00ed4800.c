
/* non-virtual thunk to cocos2d::EaseRateAction::~EaseRateAction() */

void __thiscall cocos2d::EaseRateAction::~EaseRateAction(EaseRateAction *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
                    /* try { // try from 00ed4828 to 00fd482b has its CatchHandler @ 00ed49b0 */
                    /* try { // try from 00ed482c to 00fd4903 has its CatchHandler @ 00ed47dc */
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

