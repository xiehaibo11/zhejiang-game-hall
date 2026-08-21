
/* cocos2d::TextRenderGroupItem::TextRenderGroupItem(cocos2d::renderer::Texture*) */

void __thiscall
cocos2d::TextRenderGroupItem::TextRenderGroupItem(TextRenderGroupItem *this,Texture *param_1)

{
  MeshBuffer *this_00;
  
  *(Texture **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__TextRenderGroupItem_01c6ab98;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this_00 = operator_new(400);
  middleware::MeshBuffer::MeshBuffer(this_00,5);
  *(MeshBuffer **)(this + 8) = this_00;
  return;
}

