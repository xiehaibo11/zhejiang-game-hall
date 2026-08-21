
/* non-virtual thunk to cocos2d::ActionTween::~ActionTween() */

void __thiscall cocos2d::ActionTween::~ActionTween(ActionTween *this)

{
  *(undefined ***)(this + -0x28) = &PTR__ActionTween_016fa340;
  *(undefined ***)this = &PTR_clone_016fa3a0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Action::~Action((Action *)(this + -0x28));
  return;
}

