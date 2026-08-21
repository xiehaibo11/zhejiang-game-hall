
/* fairygui::GObject::setYMin(float) */

void __thiscall fairygui::GObject::setYMin(GObject *this,float param_1)

{
                    /* try { // try from 00a83adc to 00b83b23 has its CatchHandler @ 00a83a8c */
  if (this[0xe8] != (GObject)0x0) {
    param_1 = *(float *)(this + 0xcc) * *(float *)(this + 0xdc) + param_1;
  }
  setPosition(this,*(float *)(this + 0xc0),param_1);
  return;
}

