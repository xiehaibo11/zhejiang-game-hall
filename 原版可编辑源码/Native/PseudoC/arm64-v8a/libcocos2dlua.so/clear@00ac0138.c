
/* fairygui::GPath::clear() */

void __thiscall fairygui::GPath::clear(GPath *this)

{
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
  return;
}

