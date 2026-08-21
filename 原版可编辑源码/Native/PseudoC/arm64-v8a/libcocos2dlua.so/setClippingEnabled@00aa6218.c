
/* fairygui::FUIContainer::setClippingEnabled(bool) */

void __thiscall fairygui::FUIContainer::setClippingEnabled(FUIContainer *this,bool param_1)

{
  Rect *this_00;
  
  this_00 = *(Rect **)(this + 0x300);
  if (this_00 == (Rect *)0x0) {
    if (!param_1) {
      return;
    }
    this_00 = operator_new(0xe0);
    cocos2d::Rect::Rect(this_00);
    *(undefined2 *)(this_00 + 0x10) = 0;
    cocos2d::Rect::Rect(this_00 + 0x14);
    cocos2d::Rect::Rect(this_00 + 0x24);
    this_00[0x34] = (Rect)0x1;
    cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this_00 + 0x40));
    cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this_00 + 0x90));
    *(Rect **)(this + 0x300) = this_00;
  }
  this_00[0x10] = (Rect)param_1;
  return;
}

