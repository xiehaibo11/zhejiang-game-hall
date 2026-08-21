
/* cocos2d::FontAtlas::FontAtlas(cocos2d::PixelMode, int, int, bool) */

void __thiscall
cocos2d::FontAtlas::FontAtlas
          (FontAtlas *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,byte param_5)

{
  *(undefined ***)this = &PTR__FontAtlas_01c6c368;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined ***)(this + 0x30) = &PTR__FontAtlasFrame_01c6c348;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  Rect::Rect((Rect *)(this + 0x54));
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = param_3;
  *(undefined4 *)(this + 0xa8) = param_4;
  *(undefined4 *)(this + 0xac) = param_2;
  *(undefined8 *)(this + 0x74) = 0x100000000;
  *(undefined8 *)(this + 0x6c) = 0x200000002;
  this[0xb0] = (FontAtlas)(param_5 & 1);
  return;
}

