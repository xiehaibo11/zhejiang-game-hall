
/* fairygui::GRichTextField::applyTextFormat() */

void __thiscall fairygui::GRichTextField::applyTextFormat(GRichTextField *this)

{
  FUIRichText::applyTextFormat(*(FUIRichText **)(this + 0x200));
  GObject::updateGear((GObject *)this,4);
  if (this[0x98] != (GRichTextField)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a87f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xf0))(this);
  return;
}

