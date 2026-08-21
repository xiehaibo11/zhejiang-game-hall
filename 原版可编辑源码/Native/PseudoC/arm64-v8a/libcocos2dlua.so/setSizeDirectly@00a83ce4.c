
/* fairygui::GObject::setSizeDirectly(float, float) */

void __thiscall fairygui::GObject::setSizeDirectly(GObject *this,float param_1,float param_2)

{
  *(float *)(this + 0xd0) = param_1;
  *(float *)(this + 0xd4) = param_2;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(this + 200) = param_1;
  *(float *)(this + 0xcc) = param_2;
  return;
}

