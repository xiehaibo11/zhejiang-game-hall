
/* fairygui::GObject::updateGear(int) */

void __thiscall fairygui::GObject::updateGear(GObject *this,int param_1)

{
  long *plVar1;
  
                    /* try { // try from 00a838dc to 00b8399f has its CatchHandler @ 00a83830 */
  if ((((this[0x98] == (GObject)0x0) && (this[0x99] == (GObject)0x0)) &&
      (plVar1 = *(long **)(this + (long)param_1 * 8 + 0x140), plVar1 != (long *)0x0)) &&
     (plVar1[2] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00a83900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
  return;
}

