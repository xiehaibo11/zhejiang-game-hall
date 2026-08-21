
/* fairygui::GButton::onTouchBegin(fairygui::EventContext*) */

void __thiscall fairygui::GButton::onTouchBegin(GButton *this,EventContext *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  if (*(int *)(*(long *)(param_1 + 8) + 0x24) == 0) {
    this[0x33e] = (GButton)0x1;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    if (*(int *)(this + 0x280) == 0) {
      if (((this[0xf6] == (GButton)0x0) || (*(GController **)(this + 0x298) == (GController *)0x0))
         || (uVar1 = GController::hasPage(*(GController **)(this + 0x298),(basic_string *)DISABLED),
            (uVar1 & 1) == 0)) {
        pbVar2 = (basic_string *)&DOWN;
      }
      else {
        pbVar2 = (basic_string *)&SELECTED_DISABLED;
      }
      setState(this,pbVar2);
      return;
    }
  }
  return;
}

