
/* fairygui::GButton::onExit(fairygui::EventContext*) */

void fairygui::GButton::onExit(EventContext *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  
  if ((((param_1[0x33d] != (EventContext)0x0) &&
       (*(GController **)(param_1 + 0x298) != (GController *)0x0)) &&
      (uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)&OVER),
      (uVar2 & 1) != 0)) &&
     ((param_1[0x33d] = (EventContext)0x0, param_1[0x33e] == (EventContext)0x0 &&
      ((param_1[0xf6] == (EventContext)0x0 ||
       (uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)DISABLED),
       (uVar2 & 1) == 0)))))) {
    pbVar1 = (basic_string *)UP;
    if (param_1[0x33c] != (EventContext)0x0) {
      pbVar1 = (basic_string *)&DOWN;
    }
    setState((GButton *)param_1,pbVar1);
    return;
  }
  return;
}

