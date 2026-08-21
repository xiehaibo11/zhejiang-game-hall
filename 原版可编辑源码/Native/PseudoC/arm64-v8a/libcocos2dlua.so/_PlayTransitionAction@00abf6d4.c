
/* fairygui::PlayTransitionAction::~PlayTransitionAction() */

void __thiscall fairygui::PlayTransitionAction::~PlayTransitionAction(PlayTransitionAction *this)

{
  *(undefined ***)this = &PTR__PlayTransitionAction_016aaaf0;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  ControllerAction::~ControllerAction((ControllerAction *)this);
  operator_delete(this);
  return;
}

