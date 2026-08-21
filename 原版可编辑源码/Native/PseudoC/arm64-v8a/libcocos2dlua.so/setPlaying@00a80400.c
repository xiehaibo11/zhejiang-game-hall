
/* fairygui::GLoader3D::setPlaying(bool) */

void __thiscall fairygui::GLoader3D::setPlaying(GLoader3D *this,bool param_1)

{
  if (this[0x210] == (GLoader3D)param_1) {
    return;
  }
  this[0x210] = (GLoader3D)param_1;
  GObject::updateGear((GObject *)this,5);
  return;
}

