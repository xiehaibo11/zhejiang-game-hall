
/* fairygui::GLoader3D::setFrame(int) */

void __thiscall fairygui::GLoader3D::setFrame(GLoader3D *this,int param_1)

{
  if (*(int *)(this + 0x214) == param_1) {
    return;
  }
  *(int *)(this + 0x214) = param_1;
  GObject::updateGear((GObject *)this,5);
  return;
}

