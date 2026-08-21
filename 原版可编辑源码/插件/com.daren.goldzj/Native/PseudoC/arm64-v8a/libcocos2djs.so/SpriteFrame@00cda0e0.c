
/* cocos2d::middleware::SpriteFrame::SpriteFrame() */

void __thiscall cocos2d::middleware::SpriteFrame::SpriteFrame(SpriteFrame *this)

{
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined ***)this = &PTR__SpriteFrame_01c8e1d0;
  Rect::Rect((Rect *)(this + 0x14));
  this[0x24] = (SpriteFrame)0x0;
  *(undefined8 *)(this + 0x28) = 0;
  Size::Size((Size *)(this + 0x30));
  *(undefined8 *)(this + 0x38) = 0;
  return;
}

