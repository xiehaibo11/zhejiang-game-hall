
/* fairygui::GComboBox::handleGrayedChanged() */

void __thiscall fairygui::GComboBox::handleGrayedChanged(GComboBox *this)

{
  ulong uVar1;
  GController *this_00;
  undefined1 *puVar2;
  
  if ((*(GController **)(this + 0x300) != (GController *)0x0) &&
     (uVar1 = GController::hasPage
                        (*(GController **)(this + 0x300),(basic_string *)GButton::DISABLED),
     (uVar1 & 1) != 0)) {
    this_00 = *(GController **)(this + 0x300);
    if (this[0xf6] == (GComboBox)0x0) {
      if (this_00 == (GController *)0x0) {
        return;
      }
      puVar2 = GButton::UP;
    }
    else {
      if (this_00 == (GController *)0x0) {
        return;
      }
      puVar2 = GButton::DISABLED;
    }
    GController::setSelectedPage(this_00,(basic_string *)puVar2,true);
    return;
  }
  GComponent::handleGrayedChanged((GComponent *)this);
  return;
}

