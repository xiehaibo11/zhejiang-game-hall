
/* cocos2d::FontAtlasFrame::FontAtlasFrame(cocos2d::FontAtlasFrame&&) */

void __thiscall
cocos2d::FontAtlasFrame::FontAtlasFrame(FontAtlasFrame *this,FontAtlasFrame *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__FontAtlasFrame_01c6c348;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  Rect::Rect((Rect *)(this + 0x24));
  *(undefined8 *)(this + 0x3c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x44) = 0x100000000;
  uVar1 = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  Rect::operator=((Rect *)(this + 0x24),(Rect *)(param_1 + 0x24));
  uVar1 = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)(this + 0x34) = uVar1;
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

