
/* fairygui::GLoader::handleSizeChanged() */

void __thiscall fairygui::GLoader::handleSizeChanged(GLoader *this)

{
  GObject::handleSizeChanged((GObject *)this);
  if (this[0x201] != (GLoader)0x0) {
    return;
  }
  updateLayout(this);
  return;
}

