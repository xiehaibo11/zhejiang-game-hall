
/* fairygui::GImage::setFlip(fairygui::FlipType) */

void __thiscall fairygui::GImage::setFlip(GImage *this,uint param_2)

{
  cocos2d::Sprite::setFlippedX(*(Sprite **)(this + 0x1d8),(param_2 | 2) == 3);
                    /* try { // try from 00a76560 to 00b76597 has its CatchHandler @ 00a7661c */
  cocos2d::Sprite::setFlippedY(*(Sprite **)(this + 0x1d8),(param_2 | 1) == 3);
  return;
}

