
/* fairygui::GComboBox::onTouchBegin(fairygui::EventContext*) */

void __thiscall fairygui::GComboBox::onTouchBegin(GComboBox *this,EventContext *param_1)

{
  long lVar1;
  
  if ((*(int *)((long)*(long **)(param_1 + 8) + 0x24) == 0) &&
     ((lVar1 = **(long **)(param_1 + 8), lVar1 == 0 ||
      (lVar1 = __dynamic_cast(lVar1,&GObject::typeinfo,&GTextInput::typeinfo,0), lVar1 == 0)))) {
    this[0x308] = (GComboBox)0x1;
    if (*(long *)(this + 0x288) != 0) {
      showDropdown(this);
    }
    *(undefined4 *)(param_1 + 0x2c) = 1;
  }
  return;
}

