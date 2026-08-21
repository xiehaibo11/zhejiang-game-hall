
/* fairygui::GObject::setGrayed(bool) */

void __thiscall fairygui::GObject::setGrayed(GObject *this,bool param_1)

{
  long *plVar1;
  
  if ((this[0xf6] != (GObject)param_1) || (this[0xf7] != this[0xf6])) {
    this[0xf6] = (GObject)param_1;
    (**(code **)(*(long *)this + 0x68))(this);
    if ((this[0x98] == (GObject)0x0) &&
       (((this[0x99] == (GObject)0x0 && (plVar1 = *(long **)(this + 0x158), plVar1 != (long *)0x0))
        && (plVar1[2] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00a84068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}

