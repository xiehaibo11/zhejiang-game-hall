
/* fairygui::GTextField::setUBBEnabled(bool) */

void __thiscall fairygui::GTextField::setUBBEnabled(GTextField *this,bool param_1)

{
  if (this[0x1f0] == (GTextField)param_1) {
    return;
  }
  this[0x1f0] = (GTextField)param_1;
  (**(code **)(*(long *)this + 0xe8))();
                    /* WARNING: Could not recover jumptable at 0x00a8bbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

