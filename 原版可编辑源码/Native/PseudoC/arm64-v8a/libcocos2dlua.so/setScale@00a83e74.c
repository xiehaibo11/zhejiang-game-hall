
/* fairygui::GObject::setScale(float, float) */

void __thiscall fairygui::GObject::setScale(GObject *this,float param_1,float param_2)

{
  long *plVar1;
  
  if ((*(float *)(this + 0xe0) != param_1) || (*(float *)(this + 0xe4) != param_2)) {
    *(float *)(this + 0xe0) = param_1;
    *(float *)(this + 0xe4) = param_2;
    (**(code **)(*(long *)this + 0x60))(this);
    if ((this[0x98] == (GObject)0x0) &&
       (((this[0x99] == (GObject)0x0 && (plVar1 = *(long **)(this + 0x150), plVar1 != (long *)0x0))
        && (plVar1[2] != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00a83eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))();
      return;
    }
  }
  return;
}

