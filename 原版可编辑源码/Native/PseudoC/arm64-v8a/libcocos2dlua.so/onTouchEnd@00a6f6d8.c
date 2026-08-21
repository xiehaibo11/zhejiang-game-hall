
/* fairygui::GComboBox::onTouchEnd(fairygui::EventContext*) */

void __thiscall fairygui::GComboBox::onTouchEnd(GComboBox *this,EventContext *param_1)

{
  if ((*(int *)(*(long *)(param_1 + 8) + 0x24) == 0) && (this[0x308] != (GComboBox)0x0)) {
    this[0x308] = (GComboBox)0x0;
    if ((*(long *)(this + 0x288) != 0) && (*(long *)(*(long *)(this + 0x288) + 0xa0) != 0)) {
      setCurrentState(this);
      return;
    }
  }
  return;
}

