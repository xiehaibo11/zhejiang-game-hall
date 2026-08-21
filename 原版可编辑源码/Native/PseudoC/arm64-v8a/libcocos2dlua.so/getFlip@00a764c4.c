
/* fairygui::GImage::getFlip() const */

undefined4 __thiscall fairygui::GImage::getFlip(GImage *this)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = cocos2d::Sprite::isFlippedX(*(Sprite **)(this + 0x1d8));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = cocos2d::Sprite::isFlippedY(*(Sprite **)(this + 0x1d8)), (uVar1 & 1) == 0)) {
    uVar1 = cocos2d::Sprite::isFlippedX(*(Sprite **)(this + 0x1d8));
    if ((uVar1 & 1) == 0) {
      uVar1 = cocos2d::Sprite::isFlippedY(*(Sprite **)(this + 0x1d8));
                    /* try { // try from 00a76510 to 00b7655f has its CatchHandler @ 00a76510
                       catch() { ... } // from try @ 00a76510 with catch @ 00a76510
                       catch() { ... } // from try @ 00a76598 with catch @ 00a76510
                       catch() { ... } // from try @ 00a765dc with catch @ 00a76510 */
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

