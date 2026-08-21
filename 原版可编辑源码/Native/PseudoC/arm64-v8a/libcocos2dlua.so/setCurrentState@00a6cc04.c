
/* fairygui::GButton::setCurrentState() */

void __thiscall fairygui::GButton::setCurrentState(GButton *this)

{
  ulong uVar1;
  undefined1 *puVar2;
  basic_string *pbVar3;
  
  if ((this[0xf6] != (GButton)0x0) && (*(GController **)(this + 0x298) != (GController *)0x0)) {
                    /* try { // try from 00a6cc2c to 00b6cc43 has its CatchHandler @ 00a6d000 */
    uVar1 = GController::hasPage(*(GController **)(this + 0x298),(basic_string *)DISABLED);
    if ((uVar1 & 1) != 0) {
      pbVar3 = (basic_string *)DISABLED;
                    /* try { // try from 00a6cc48 to 00b6cc57 has its CatchHandler @ 00a6cff4 */
      if (this[0x33c] != (GButton)0x0) {
        pbVar3 = (basic_string *)&SELECTED_DISABLED;
      }
      goto LAB_00a6cc88;
    }
  }
                    /* try { // try from 00a6cc58 to 00b6cc67 has its CatchHandler @ 00a6cff0 */
  if (this[0x33c] == (GButton)0x0) {
                    /* try { // try from 00a6cc70 to 00b6cc87 has its CatchHandler @ 00a6cfec */
    puVar2 = UP;
    pbVar3 = (basic_string *)&OVER;
  }
  else {
    puVar2 = &DOWN;
    pbVar3 = (basic_string *)&SELECTED_OVER;
  }
  if (this[0x33d] == (GButton)0x0) {
    pbVar3 = (basic_string *)puVar2;
  }
LAB_00a6cc88:
  setState(this,pbVar3);
  return;
}

