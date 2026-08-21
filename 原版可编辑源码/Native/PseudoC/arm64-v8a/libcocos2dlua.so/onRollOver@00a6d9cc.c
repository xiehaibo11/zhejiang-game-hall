
/* fairygui::GButton::onRollOver(fairygui::EventContext*) */

void fairygui::GButton::onRollOver(EventContext *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  
  if (*(GController **)(param_1 + 0x298) != (GController *)0x0) {
    uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)&OVER);
    if ((((uVar2 & 1) != 0) &&
        (param_1[0x33d] = (EventContext)0x1, param_1[0x33e] == (EventContext)0x0)) &&
       ((param_1[0xf6] == (EventContext)0x0 ||
        (uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)DISABLED),
        (uVar2 & 1) == 0)))) {
                    /* try { // try from 00a6da34 to 00b6da47 has its CatchHandler @ 00a6dab0 */
      pbVar1 = (basic_string *)&OVER;
      if (param_1[0x33c] != (EventContext)0x0) {
        pbVar1 = (basic_string *)&SELECTED_OVER;
      }
      setState((GButton *)param_1,pbVar1);
      return;
    }
  }
  return;
}

