
/* fairygui::PlayTransitionAction::~PlayTransitionAction() */

void __thiscall fairygui::PlayTransitionAction::~PlayTransitionAction(PlayTransitionAction *this)

{
  *(undefined ***)this = &PTR__PlayTransitionAction_016aaaf0;
                    /* catch() { ... } // from try @ 00abf678 with catch @ 00abf6b8 */
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
                    /* try { // try from 00abf6cc to 00bbf73f has its CatchHandler @ 00abf6cc
                       catch() { ... } // from try @ 00abf6cc with catch @ 00abf6cc
                       catch() { ... } // from try @ 00abf74c with catch @ 00abf6cc */
  ControllerAction::~ControllerAction((ControllerAction *)this);
  return;
}

