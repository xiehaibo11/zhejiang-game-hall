
/* fairygui::GMovieClip::getFlip() const */

undefined4 __thiscall fairygui::GMovieClip::getFlip(GMovieClip *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = cocos2d::Sprite::isFlippedX(*(Sprite **)(this + 0x1d8));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = cocos2d::Sprite::isFlippedY(*(Sprite **)(this + 0x1d8)), (uVar1 & 1) == 0)) {
    uVar1 = cocos2d::Sprite::isFlippedX(*(Sprite **)(this + 0x1d8));
    if ((uVar1 & 1) == 0) {
      uVar1 = cocos2d::Sprite::isFlippedY(*(Sprite **)(this + 0x1d8));
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}

