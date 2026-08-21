
/* fairygui::ChangePageAction::~ChangePageAction() */

void __thiscall fairygui::ChangePageAction::~ChangePageAction(ChangePageAction *this)

{
  ChangePageAction CVar1;
  
                    /* catch() { ... } // from try @ 00abf330 with catch @ 00abf3c8 */
  *(undefined ***)this = &PTR__ChangePageAction_016aaaa0;
                    /* catch() { ... } // from try @ 00abf348 with catch @ 00abf3cc */
  if (((byte)this[0x68] & 1) == 0) {
    CVar1 = this[0x50];
  }
  else {
                    /* catch() { ... } // from try @ 00abf2fc with catch @ 00abf3fc */
    operator_delete(*(void **)(this + 0x78));
    CVar1 = this[0x50];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    CVar1 = this[0x38];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  ControllerAction::~ControllerAction((ControllerAction *)this);
  return;
}

