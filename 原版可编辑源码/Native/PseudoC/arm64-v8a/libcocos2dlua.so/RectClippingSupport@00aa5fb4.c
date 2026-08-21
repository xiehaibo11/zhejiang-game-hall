
/* fairygui::RectClippingSupport::RectClippingSupport() */

void __thiscall fairygui::RectClippingSupport::RectClippingSupport(RectClippingSupport *this)

{
  cocos2d::Rect::Rect((Rect *)this);
  *(undefined2 *)(this + 0x10) = 0;
  cocos2d::Rect::Rect((Rect *)(this + 0x14));
  cocos2d::Rect::Rect((Rect *)(this + 0x24));
  this[0x34] = (RectClippingSupport)0x1;
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x40));
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x90));
  return;
}

