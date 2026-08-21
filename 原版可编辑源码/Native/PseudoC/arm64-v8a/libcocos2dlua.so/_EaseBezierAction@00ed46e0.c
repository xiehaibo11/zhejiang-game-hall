
/* non-virtual thunk to cocos2d::EaseBezierAction::~EaseBezierAction() */

void __thiscall cocos2d::EaseBezierAction::~EaseBezierAction(EaseBezierAction *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4674 with catch @ 00ed4700
                        */
  *(undefined ***)(this + -0x28) = &PTR__ActionEase_016f5ab0;
  *(undefined ***)this = &PTR_clone_016f5b18;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed46c8 with catch @ 00ed4714
                        */
    Ref::release(*(Ref **)(this + 0x30));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

