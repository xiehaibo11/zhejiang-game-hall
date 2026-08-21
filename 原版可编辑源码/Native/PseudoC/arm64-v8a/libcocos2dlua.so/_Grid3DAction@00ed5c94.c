
/* non-virtual thunk to cocos2d::Grid3DAction::~Grid3DAction() */

void __thiscall cocos2d::Grid3DAction::~Grid3DAction(Grid3DAction *this)

{
                    /* catch() { ... } // from try @ 00ed5c44 with catch @ 00ed5c94 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

