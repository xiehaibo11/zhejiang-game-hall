
/* fairygui::GLoader3D::setFill(fairygui::LoaderFillType) */

void __thiscall fairygui::GLoader3D::setFill(GLoader3D *this,int param_2)

{
  if (*(int *)(this + 0x1fc) == param_2) {
    return;
  }
  *(int *)(this + 0x1fc) = param_2;
  updateLayout(this);
  return;
}

