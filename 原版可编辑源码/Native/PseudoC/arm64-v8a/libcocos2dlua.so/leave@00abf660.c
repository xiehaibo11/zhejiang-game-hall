
/* fairygui::PlayTransitionAction::leave(fairygui::GController*) */

void fairygui::PlayTransitionAction::leave(GController *param_1)

{
                    /* try { // try from 00abf678 to 00bbf683 has its CatchHandler @ 00abf6b8 */
  if ((param_1[0x58] != (GController)0x0) && (*(Transition **)(param_1 + 0x60) != (Transition *)0x0)
     ) {
    Transition::stop(*(Transition **)(param_1 + 0x60));
                    /* try { // try from 00abf684 to 00bbf6cb has its CatchHandler @ 00abf604 */
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}

