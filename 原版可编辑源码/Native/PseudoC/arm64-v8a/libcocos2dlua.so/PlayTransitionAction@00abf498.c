
/* fairygui::PlayTransitionAction::PlayTransitionAction() */

void __thiscall fairygui::PlayTransitionAction::PlayTransitionAction(PlayTransitionAction *this)

{
  ControllerAction::ControllerAction((ControllerAction *)this);
                    /* try { // try from 00abf4ac to 00bbf4c7 has its CatchHandler @ 00abf560 */
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x58] = (PlayTransitionAction)0x0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 1;
                    /* try { // try from 00abf4c8 to 00bbf58b has its CatchHandler @ 00abf418 */
  *(undefined ***)this = &PTR__PlayTransitionAction_016aaaf0;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

