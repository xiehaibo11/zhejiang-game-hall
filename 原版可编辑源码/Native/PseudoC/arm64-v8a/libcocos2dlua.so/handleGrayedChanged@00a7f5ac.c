
/* fairygui::GLoader::handleGrayedChanged() */

void __thiscall fairygui::GLoader::handleGrayedChanged(GLoader *this)

{
  GObject::handleGrayedChanged((GObject *)this);
  FUISprite::setGrayed(*(FUISprite **)(this + 0x220),(bool)this[0xf7]);
  if (*(GObject **)(this + 0x228) != (GObject *)0x0) {
    GObject::setGrayed(*(GObject **)(this + 0x228),(bool)this[0xf7]);
    return;
  }
  return;
}

