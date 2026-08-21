
/* fairygui::FUISprite::FUISprite() */

void __thiscall fairygui::FUISprite::FUISprite(FUISprite *this)

{
  cocos2d::Sprite::Sprite((Sprite *)this);
  *(undefined4 *)(this + 0x538) = 0;
  *(undefined2 *)(this + 0x53c) = 0;
  *(undefined4 *)(this + 0x540) = 0;
  *(undefined ***)this = &PTR__FUISprite_016a8e20;
  *(undefined ***)(this + 0x2f8) = &PTR__FUISprite_016a94a0;
  *(undefined8 *)(this + 0x530) = 0x200000000;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x560) = 0;
  return;
}

