
/* non-virtual thunk to cocos2d::ActionTween::~ActionTween() */

void __thiscall cocos2d::ActionTween::~ActionTween(ActionTween *this)

{
  Action *this_00;
  
  this_00 = (Action *)(this + -0x28);
  *(undefined ***)this_00 = &PTR__ActionTween_016fa340;
  *(undefined ***)this = &PTR_clone_016fa3a0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  Action::~Action(this_00);
  operator_delete(this_00);
  return;
}

