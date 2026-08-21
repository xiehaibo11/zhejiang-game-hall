
/* fairygui::GTextField::GTextField() */

void __thiscall fairygui::GTextField::GTextField(GTextField *this)

{
  GObject::GObject((GObject *)this);
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  this[0x1f0] = (GTextField)0x0;
  *(undefined4 *)(this + 500) = 1;
  *(undefined ***)this = &PTR__GBasicTextField_016a6b60;
  *(undefined8 *)(this + 0x1f8) = 0;
  return;
}

