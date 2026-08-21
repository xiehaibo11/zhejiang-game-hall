
/* cocos2d::SpriteFrame::SpriteFrame() */

void __thiscall cocos2d::SpriteFrame::SpriteFrame(SpriteFrame *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__SpriteFrame_017110f8;
  *(undefined ***)(this + 0x28) = &PTR_clone_01711120;
  Size::Size((Size *)(this + 0x40));
  Rect::Rect((Rect *)(this + 0x48));
  this[0x58] = (SpriteFrame)0x0;
  Rect::Rect((Rect *)(this + 0x5c));
  Rect::Rect((Rect *)(this + 0x6c));
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  Size::Size((Size *)(this + 0x84));
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  PolygonInfo::PolygonInfo((PolygonInfo *)(this + 0xb0));
  return;
}

