
/* fairygui::Transition::onOwnerAddedToStage() */

void __thiscall fairygui::Transition::onOwnerAddedToStage(Transition *this)

{
  long lVar1;
  code *pcVar2;
  long alStack_60 [4];
  long *local_40;
  long local_28;
  
                    /* catch() { ... } // from try @ 00a98fb4 with catch @ 00a9904c */
                    /* catch() { ... } // from try @ 00a98fcc with catch @ 00a99050 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((this[0xbc] != (Transition)0x0) && (this[0x68] == (Transition)0x0)) {
                    /* WARNING: Load size is inaccurate */
    local_40 = (long *)0x0;
                    /* catch() { ... } // from try @ 00a98f80 with catch @ 00a99080 */
    play(*(Transition **)(this + 0xc4),this,*(undefined4 *)(this + 0xc0),alStack_60);
    if (alStack_60 == local_40) {
      pcVar2 = *(code **)(*local_40 + 0x20);
    }
    else {
      if (local_40 == (long *)0x0) goto LAB_00a990b4;
      pcVar2 = *(code **)(*local_40 + 0x28);
    }
    (*pcVar2)();
  }
LAB_00a990b4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

