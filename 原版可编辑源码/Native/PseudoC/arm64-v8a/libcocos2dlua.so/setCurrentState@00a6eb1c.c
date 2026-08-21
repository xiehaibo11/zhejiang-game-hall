
/* fairygui::GComboBox::setCurrentState() */

void __thiscall fairygui::GComboBox::setCurrentState(GComboBox *this)

{
  ulong uVar1;
  GController *this_00;
  basic_string *pbVar2;
  
  if (((this[0xf6] == (GComboBox)0x0) || (*(GController **)(this + 0x300) == (GController *)0x0)) ||
     (uVar1 = GController::hasPage
                        (*(GController **)(this + 0x300),(basic_string *)GButton::DISABLED),
     (uVar1 & 1) == 0)) {
    if ((*(long *)(this + 0x288) == 0) || (*(long *)(*(long *)(this + 0x288) + 0xa0) == 0)) {
      this_00 = *(GController **)(this + 0x300);
      if (this_00 == (GController *)0x0) {
        return;
      }
      pbVar2 = (basic_string *)GButton::UP;
      if (this[0x309] != (GComboBox)0x0) {
        pbVar2 = (basic_string *)&GButton::OVER;
      }
    }
    else {
      this_00 = *(GController **)(this + 0x300);
      if (this_00 == (GController *)0x0) {
        return;
      }
      pbVar2 = (basic_string *)&GButton::DOWN;
    }
  }
  else {
    this_00 = *(GController **)(this + 0x300);
    if (this_00 == (GController *)0x0) {
      return;
    }
    pbVar2 = (basic_string *)GButton::DISABLED;
  }
  GController::setSelectedPage(this_00,pbVar2,true);
  return;
}

