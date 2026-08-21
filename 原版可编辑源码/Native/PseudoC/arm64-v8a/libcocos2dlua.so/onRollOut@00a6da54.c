
/* fairygui::GButton::onRollOut(fairygui::EventContext*) */

void fairygui::GButton::onRollOut(EventContext *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  
                    /* try { // try from 00a6da58 to 00b6da6b has its CatchHandler @ 00a6dac0 */
                    /* try { // try from 00a6da70 to 00b6da83 has its CatchHandler @ 00a6dac4 */
                    /* try { // try from 00a6da84 to 00b6db17 has its CatchHandler @ 00a6d778 */
                    /* catch() { ... } // from try @ 00a6d828 with catch @ 00a6daa8 */
                    /* catch() { ... } // from try @ 00a6d818 with catch @ 00a6daac */
  if ((((*(GController **)(param_1 + 0x298) != (GController *)0x0) &&
       (uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)&OVER),
       (uVar2 & 1) != 0)) &&
      (param_1[0x33d] = (EventContext)0x0, param_1[0x33e] == (EventContext)0x0)) &&
     ((param_1[0xf6] == (EventContext)0x0 ||
      (uVar2 = GController::hasPage(*(GController **)(param_1 + 0x298),(basic_string *)DISABLED),
      (uVar2 & 1) == 0)))) {
                    /* catch() { ... } // from try @ 00a6d7dc with catch @ 00a6dab0
                       catch() { ... } // from try @ 00a6d854 with catch @ 00a6dab0
                       catch() { ... } // from try @ 00a6da34 with catch @ 00a6dab0 */
                    /* catch() { ... } // from try @ 00a6d878 with catch @ 00a6dac0
                       catch() { ... } // from try @ 00a6da58 with catch @ 00a6dac0 */
                    /* catch() { ... } // from try @ 00a6d914 with catch @ 00a6dac4
                       catch() { ... } // from try @ 00a6da70 with catch @ 00a6dac4 */
    pbVar1 = (basic_string *)UP;
    if (param_1[0x33c] != (EventContext)0x0) {
      pbVar1 = (basic_string *)&DOWN;
    }
    setState((GButton *)param_1,pbVar1);
    return;
  }
  return;
}

