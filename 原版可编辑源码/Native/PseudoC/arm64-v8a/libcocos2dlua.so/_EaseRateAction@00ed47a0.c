
/* cocos2d::EaseRateAction::~EaseRateAction() */

void __thiscall cocos2d::EaseRateAction::~EaseRateAction(EaseRateAction *this)

{
  *(undefined ***)this = &PTR__ActionEase_016f5ab0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4784 with catch @ 00ed47c8
                        */
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  Action::~Action((Action *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed482c with catch @ 00ed47dc
                        */
  operator_delete(this);
  return;
}

