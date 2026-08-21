
/* fairygui::GObject::setXMin(float) */

void __thiscall fairygui::GObject::setXMin(GObject *this,float param_1)

{
  if (this[0xe8] != (GObject)0x0) {
    param_1 = *(float *)(this + 200) * *(float *)(this + 0xd8) + param_1;
  }
  setPosition(this,param_1,*(float *)(this + 0xc4));
  return;
}

