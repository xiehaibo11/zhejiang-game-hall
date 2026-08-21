
/* cocos2d::ActionTween::~ActionTween() */

void __thiscall cocos2d::ActionTween::~ActionTween(ActionTween *this)

{
  *(undefined ***)this = &PTR__ActionTween_016fa340;
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa3a0;
  if (((byte)this[0x58] & 1) != 0) {
    operator_delete(*(void **)(this + 0x68));
  }
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

