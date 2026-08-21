
/* fairygui::GLoader3D::setShrinkOnly(bool) */

void __thiscall fairygui::GLoader3D::setShrinkOnly(GLoader3D *this,bool param_1)

{
  if (this[0x200] == (GLoader3D)param_1) {
    return;
  }
  this[0x200] = (GLoader3D)param_1;
  updateLayout(this);
  return;
}

