
/* fairygui::GMovieClip::handleGrayedChanged() */

void __thiscall fairygui::GMovieClip::handleGrayedChanged(GMovieClip *this)

{
  GObject::handleGrayedChanged((GObject *)this);
  FUISprite::setGrayed(*(FUISprite **)(this + 0x1d8),(bool)this[0xf7]);
  return;
}

