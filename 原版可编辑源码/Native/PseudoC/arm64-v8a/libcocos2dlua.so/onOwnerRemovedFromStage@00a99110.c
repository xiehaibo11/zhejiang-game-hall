
/* fairygui::Transition::onOwnerRemovedFromStage() */

void __thiscall fairygui::Transition::onOwnerRemovedFromStage(Transition *this)

{
                    /* try { // try from 00a99114 to 00b991a7 has its CatchHandler @ 00a99114
                       catch() { ... } // from try @ 00a99114 with catch @ 00a99114
                       catch() { ... } // from try @ 00a991b0 with catch @ 00a99114 */
  if ((*(uint *)(this + 0xb0) >> 1 & 1) == 0) {
    stop(this,(bool)((byte)(*(uint *)(this + 0xb0) >> 2) & 1),false);
    return;
  }
  return;
}

