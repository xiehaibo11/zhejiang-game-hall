
/* fairygui::GObject::handleSizeChanged() */

void __thiscall fairygui::GObject::handleSizeChanged(GObject *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0xa8);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* try { // try from 00a85704 to 00b8574f has its CatchHandler @ 00a85704
                       catch() { ... } // from try @ 00a85704 with catch @ 00a85704
                       catch() { ... } // from try @ 00a85754 with catch @ 00a85704 */
  if (((*(int *)(this + 0xb8) != 0) && (*(float *)(this + 0x78) != 0.0)) &&
     (*(float *)(this + 0x7c) != 0.0)) {
                    /* WARNING: Could not recover jumptable at 0x00a8574c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))
              ((*(float *)(this + 0xe0) * *(float *)(this + 200)) / *(float *)(this + 0x78),
               (*(float *)(this + 0xe4) * *(float *)(this + 0xcc)) / *(float *)(this + 0x7c));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a85724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x160))(plVar1,this + 200);
  return;
}

