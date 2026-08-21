
/* fairygui::GObject::setPixelSnapping(bool) */

void __thiscall fairygui::GObject::setPixelSnapping(GObject *this,bool param_1)

{
                    /* catch() { ... } // from try @ 00a83ad8 with catch @ 00a83b10 */
  if (this[0x120] == (GObject)param_1) {
    return;
  }
  this[0x120] = (GObject)param_1;
                    /* WARNING: Could not recover jumptable at 0x00a83b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00a83b24 to 00b83c83 has its CatchHandler @ 00a83b24
                       catch() { ... } // from try @ 00a83b24 with catch @ 00a83b24
                       catch() { ... } // from try @ 00a83d04 with catch @ 00a83b24 */
  (**(code **)(*(long *)this + 0x70))();
  return;
}

