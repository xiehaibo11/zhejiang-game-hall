
/* fairygui::PopupMenu::addSeperator() */

void __thiscall fairygui::PopupMenu::addSeperator(PopupMenu *this)

{
  ulong uVar1;
  
  uVar1 = (ulong)(UIConfig::popupMenu_seperator >> 1);
  if ((UIConfig::popupMenu_seperator & 1) != 0) {
    uVar1 = DAT_017827b0;
  }
  if (uVar1 != 0) {
    GList::addItemFromPool(*(GList **)(this + 0x30),(basic_string *)&UIConfig::popupMenu_seperator);
    return;
  }
  return;
}

