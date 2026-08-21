
/* fairygui::PopupMenu::onEnter(fairygui::EventContext*) */

void fairygui::PopupMenu::onEnter(EventContext *param_1)

{
  GList::setSelectedIndex(*(GList **)(param_1 + 0x30),-1);
  GList::resizeToFit(*(GList **)(param_1 + 0x30),0x7fffffff,10);
  return;
}

