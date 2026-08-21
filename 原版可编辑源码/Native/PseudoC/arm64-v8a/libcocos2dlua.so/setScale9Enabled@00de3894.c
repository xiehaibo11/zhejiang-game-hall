
/* cocos2d::ui::Scale9Sprite::setScale9Enabled(bool) */

void __thiscall cocos2d::ui::Scale9Sprite::setScale9Enabled(Scale9Sprite *this,bool param_1)

{
  if (*(int *)(this + 0x42c) == 1) {
    return;
  }
  setRenderingType(this,param_1);
  Sprite::setStretchEnabled((Sprite *)this,param_1);
  return;
}

