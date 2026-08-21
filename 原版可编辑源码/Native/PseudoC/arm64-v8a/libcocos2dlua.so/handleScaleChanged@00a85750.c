
/* fairygui::GObject::handleScaleChanged() */

void __thiscall fairygui::GObject::handleScaleChanged(GObject *this)

{
                    /* try { // try from 00a85750 to 00b85753 has its CatchHandler @ 00a85788 */
                    /* try { // try from 00a85754 to 00b8579b has its CatchHandler @ 00a85704 */
  if (((*(int *)(this + 0xb8) != 0) && (*(float *)(this + 0x78) != 0.0)) &&
     (*(float *)(this + 0x7c) != 0.0)) {
                    /* catch() { ... } // from try @ 00a85750 with catch @ 00a85788 */
                    /* try { // try from 00a8579c to 00b85b3b has its CatchHandler @ 00a8579c
                       catch() { ... } // from try @ 00a8579c with catch @ 00a8579c
                       catch() { ... } // from try @ 00a85bbc with catch @ 00a8579c */
                    /* WARNING: Could not recover jumptable at 0x00a857b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0xa8) + 0x90))
              ((*(float *)(this + 0xe0) * *(float *)(this + 200)) / *(float *)(this + 0x78),
               (*(float *)(this + 0xe4) * *(float *)(this + 0xcc)) / *(float *)(this + 0x7c),
               *(long **)(this + 0xa8));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a85784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0xa8) + 0x90))
            (*(undefined4 *)(this + 0xe0),*(undefined4 *)(this + 0xe4),*(long **)(this + 0xa8));
  return;
}

