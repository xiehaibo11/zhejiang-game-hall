
/* fairygui::GObject::setAlpha(float) */

void __thiscall fairygui::GObject::setAlpha(GObject *this,float param_1)

{
  long *plVar1;
  
  if (*(float *)(this + 0xec) != param_1) {
    *(float *)(this + 0xec) = param_1;
    (**(code **)(*(long *)this + 0x80))();
    if ((((this[0x98] == (GObject)0x0) && (this[0x99] == (GObject)0x0)) &&
        (plVar1 = *(long **)(this + 0x158), plVar1 != (long *)0x0)) && (plVar1[2] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00a83fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}

