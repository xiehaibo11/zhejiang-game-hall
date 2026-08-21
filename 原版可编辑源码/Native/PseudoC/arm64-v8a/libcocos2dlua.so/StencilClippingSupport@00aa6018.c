
/* fairygui::StencilClippingSupport::StencilClippingSupport() */

void __thiscall
fairygui::StencilClippingSupport::StencilClippingSupport(StencilClippingSupport *this)

{
  StencilStateManager *this_00;
  
  *(undefined8 *)this = 0;
  this_00 = operator_new(0x34);
  cocos2d::StencilStateManager::StencilStateManager(this_00);
  *(StencilStateManager **)(this + 8) = this_00;
  cocos2d::GroupCommand::GroupCommand((GroupCommand *)(this + 0x10));
  *(undefined8 *)(this + 0x30) = 0;
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x40));
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0x90));
  cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this + 0xe0));
  return;
}

