
/* fairygui::GObject::getYMin() const */

float __thiscall fairygui::GObject::getYMin(GObject *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0xc4);
  if (this[0xe8] != (GObject)0x0) {
    fVar1 = fVar1 - *(float *)(this + 0xcc) * *(float *)(this + 0xdc);
  }
                    /* try { // try from 00a83ad8 to 00b83adb has its CatchHandler @ 00a83b10 */
  return fVar1;
}

