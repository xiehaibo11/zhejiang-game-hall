
/* non-virtual thunk to cocos2d::JumpBy::~JumpBy() */

void __thiscall cocos2d::JumpBy::~JumpBy(JumpBy *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee5868 with catch @ 00ee57f4
                        */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

