
/* fairygui::GComboBox::onRollover(fairygui::EventContext*) */

void fairygui::GComboBox::onRollover(EventContext *param_1)

{
  param_1[0x309] = (EventContext)0x1;
  if ((param_1[0x308] == (EventContext)0x0) &&
     ((*(long *)(param_1 + 0x288) == 0 || (*(long *)(*(long *)(param_1 + 0x288) + 0xa0) == 0)))) {
    setCurrentState((GComboBox *)param_1);
    return;
  }
  return;
}

