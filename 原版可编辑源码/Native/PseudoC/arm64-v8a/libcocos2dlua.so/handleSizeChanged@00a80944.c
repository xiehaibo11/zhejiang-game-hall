
/* fairygui::GLoader3D::handleSizeChanged() */

void __thiscall fairygui::GLoader3D::handleSizeChanged(GLoader3D *this)

{
  GObject::handleSizeChanged((GObject *)this);
  if (this[0x201] != (GLoader3D)0x0) {
    return;
  }
  updateLayout(this);
  return;
}

