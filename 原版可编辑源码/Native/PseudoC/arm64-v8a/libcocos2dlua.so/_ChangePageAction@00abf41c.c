
/* fairygui::ChangePageAction::~ChangePageAction() */

void __thiscall fairygui::ChangePageAction::~ChangePageAction(ChangePageAction *this)

{
  ChangePageAction CVar1;
  
  *(undefined ***)this = &PTR__ChangePageAction_016aaaa0;
  if (((byte)this[0x68] & 1) == 0) {
    CVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    CVar1 = this[0x50];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x38];
  }
  else {
                    /* try { // try from 00abf488 to 00bbf48f has its CatchHandler @ 00abf574 */
    operator_delete(*(void **)(this + 0x60));
    CVar1 = this[0x38];
                    /* try { // try from 00abf490 to 00bbf4a7 has its CatchHandler @ 00abf564 */
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  ControllerAction::~ControllerAction((ControllerAction *)this);
                    /* try { // try from 00abf46c to 00bbf483 has its CatchHandler @ 00abf578 */
  operator_delete(this);
  return;
}

