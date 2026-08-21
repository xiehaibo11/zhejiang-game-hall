
/* cocos2d::ui::LoadingBar::handleSpriteFlipX() */

void __thiscall cocos2d::ui::LoadingBar::handleSpriteFlipX(LoadingBar *this)

{
  if (*(int *)(this + 0x4f0) == 0) {
    if (this[0x524] == (LoadingBar)0x0) {
      Sprite::setFlippedX(*(Sprite **)(this + 0x500),false);
      return;
    }
  }
  else if (this[0x524] == (LoadingBar)0x0) {
    Sprite::setFlippedX(*(Sprite **)(this + 0x500),true);
    return;
  }
  return;
}

