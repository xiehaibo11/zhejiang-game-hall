
/* fairygui::GBasicTextField::applyTextFormat() */

void __thiscall fairygui::GBasicTextField::applyTextFormat(GBasicTextField *this)

{
  FUILabel::applyTextFormat(*(FUILabel **)(this + 0x200));
  GObject::updateGear((GObject *)this,4);
  if (this[0x98] != (GBasicTextField)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a8ca9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

