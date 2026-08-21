
/* non-virtual thunk to cocos2d::ui::Scale9Sprite::~Scale9Sprite() */

void __thiscall cocos2d::ui::Scale9Sprite::~Scale9Sprite(Scale9Sprite *this)

{
  Sprite::~Sprite((Sprite *)(this + -0x2f8));
  operator_delete((Sprite *)(this + -0x2f8));
  return;
}

