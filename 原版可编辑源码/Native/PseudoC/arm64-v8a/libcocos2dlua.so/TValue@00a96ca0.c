
/* fairygui::TValue::TValue() */

void __thiscall fairygui::TValue::TValue(TValue *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined2 *)(this + 0x10) = 0x101;
  this[0x12] = (TValue)0x0;
  return;
}

