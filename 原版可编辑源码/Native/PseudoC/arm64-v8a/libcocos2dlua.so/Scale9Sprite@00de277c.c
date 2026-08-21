
/* cocos2d::ui::Scale9Sprite::Scale9Sprite() */

void __thiscall cocos2d::ui::Scale9Sprite::Scale9Sprite(Scale9Sprite *this)

{
  Sprite::Sprite((Sprite *)this);
  this[0x52d] = (Scale9Sprite)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined8 *)(this + 0x530) = 0;
  *(undefined ***)this = &PTR__Scale9Sprite_016e4b08;
  *(undefined ***)(this + 0x2f8) = &PTR__Scale9Sprite_016e51e8;
  *(undefined8 *)(this + 0x540) = 0x100000000;
  return;
}

