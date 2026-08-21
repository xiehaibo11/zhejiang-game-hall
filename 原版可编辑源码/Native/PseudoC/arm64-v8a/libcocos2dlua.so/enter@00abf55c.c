
/* fairygui::PlayTransitionAction::enter(fairygui::GController*) */

void __thiscall
fairygui::PlayTransitionAction::enter(PlayTransitionAction *this,GController *param_1)

{
  long lVar1;
  Transition *this_00;
  code *pcVar2;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 00abf4ac with catch @ 00abf560 */
                    /* catch() { ... } // from try @ 00abf490 with catch @ 00abf564 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00abf488 with catch @ 00abf574 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00abf46c with catch @ 00abf578 */
  this_00 = (Transition *)
            GComponent::getTransition
                      (*(GComponent **)(param_1 + 0x68),(basic_string *)(this + 0x38));
  if (this_00 == (Transition *)0x0) goto LAB_00abf600;
  if ((*(long *)(this + 0x60) == 0) || (*(char *)(*(long *)(this + 0x60) + 0x68) == '\0')) {
                    /* WARNING: Load size is inaccurate */
    local_50 = (long *)0x0;
    Transition::play(*(Transition **)(this + 0x54),this_00,*(undefined4 *)(this + 0x50),alStack_70);
    if (alStack_70 == local_50) {
      pcVar2 = *(code **)(*local_50 + 0x20);
    }
    else {
      if (local_50 == (long *)0x0) goto LAB_00abf5fc;
      pcVar2 = *(code **)(*local_50 + 0x28);
    }
    (*pcVar2)();
  }
  else {
    Transition::changePlayTimes(this_00,*(int *)(this + 0x50));
  }
LAB_00abf5fc:
  *(Transition **)(this + 0x60) = this_00;
LAB_00abf600:
                    /* try { // try from 00abf604 to 00bbf677 has its CatchHandler @ 00abf604
                       catch() { ... } // from try @ 00abf604 with catch @ 00abf604
                       catch() { ... } // from try @ 00abf684 with catch @ 00abf604 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

