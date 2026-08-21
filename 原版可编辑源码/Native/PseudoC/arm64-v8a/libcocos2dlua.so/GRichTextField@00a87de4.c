
/* fairygui::GRichTextField::GRichTextField() */

void __thiscall fairygui::GRichTextField::GRichTextField(GRichTextField *this)

{
  GTextField::GTextField((GTextField *)this);
  *(undefined8 *)(this + 0x200) = 0;
  this[0x208] = (GRichTextField)0x0;
  *(undefined ***)this = &PTR__GRichTextField_016a64d8;
  return;
}

