
/* fairygui::GComboBox::updateDropdownList() */

void __thiscall fairygui::GComboBox::updateDropdownList(GComboBox *this)

{
  if (this[0x2f8] != (GComboBox)0x0) {
    this[0x2f8] = (GComboBox)0x0;
    renderDropdownList(this);
    GList::resizeToFit(*(GList **)(this + 0x2a0),*(int *)(this + 0x280),0);
    return;
  }
  return;
}

