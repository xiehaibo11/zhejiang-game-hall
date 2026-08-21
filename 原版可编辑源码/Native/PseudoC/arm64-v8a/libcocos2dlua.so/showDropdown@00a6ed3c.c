
/* fairygui::GComboBox::showDropdown() */

void __thiscall fairygui::GComboBox::showDropdown(GComboBox *this)

{
  if (this[0x2f8] != (GComboBox)0x0) {
    this[0x2f8] = (GComboBox)0x0;
    renderDropdownList(this);
    GList::resizeToFit(*(GList **)(this + 0x2a0),*(int *)(this + 0x280),0);
  }
  if (*(int *)(*(GList **)(this + 0x2a0) + 0x304) == 0) {
    GList::setSelectedIndex(*(GList **)(this + 0x2a0),-1);
  }
  GObject::setSize(*(GObject **)(this + 0x288),*(float *)(this + 200),
                   *(float *)(*(GObject **)(this + 0x288) + 0xd4),false);
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0x2a0));
  GRoot::togglePopup(GRoot::_inst,*(undefined8 *)(this + 0x288),this,*(undefined4 *)(this + 0x284));
  if ((*(long *)(*(long *)(this + 0x288) + 0xa0) != 0) &&
     (*(GController **)(this + 0x300) != (GController *)0x0)) {
    GController::setSelectedPage
              (*(GController **)(this + 0x300),(basic_string *)&GButton::DOWN,true);
    return;
  }
  return;
}

