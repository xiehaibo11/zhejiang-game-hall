
/* fairygui::GMovieClip::setFlip(fairygui::FlipType) */

void __thiscall fairygui::GMovieClip::setFlip(GMovieClip *this,uint param_2)

{
  cocos2d::Sprite::setFlippedX(*(Sprite **)(this + 0x1d8),(param_2 | 2) == 3);
  cocos2d::Sprite::setFlippedY(*(Sprite **)(this + 0x1d8),(param_2 | 1) == 3);
  return;
}

