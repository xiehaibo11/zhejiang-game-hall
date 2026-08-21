
/* fairygui::GObject::getXMin() const */

float __thiscall fairygui::GObject::getXMin(GObject *this)

{
  float fVar1;
  
  fVar1 = *(float *)(this + 0xc0);
  if (this[0xe8] != (GObject)0x0) {
                    /* try { // try from 00a83a8c to 00b83ad7 has its CatchHandler @ 00a83a8c
                       catch() { ... } // from try @ 00a83a8c with catch @ 00a83a8c
                       catch() { ... } // from try @ 00a83adc with catch @ 00a83a8c */
    fVar1 = fVar1 - *(float *)(this + 200) * *(float *)(this + 0xd8);
  }
  return fVar1;
}

