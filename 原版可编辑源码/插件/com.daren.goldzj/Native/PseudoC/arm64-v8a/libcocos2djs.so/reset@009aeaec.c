
/* cocos2d::TextRenderGroupItem::reset() */

void __thiscall cocos2d::TextRenderGroupItem::reset(TextRenderGroupItem *this)

{
  middleware::MeshBuffer::reset(*(MeshBuffer **)(this + 8));
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  return;
}

