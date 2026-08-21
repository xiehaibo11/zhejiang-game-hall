
/* fairygui::GImage::handleGrayedChanged() */

void __thiscall fairygui::GImage::handleGrayedChanged(GImage *this)

{
  GObject::handleGrayedChanged((GObject *)this);
  FUISprite::setGrayed(*(FUISprite **)(this + 0x1d8),(bool)this[0xf7]);
  return;
}

