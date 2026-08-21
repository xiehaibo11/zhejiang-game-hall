
/* fairygui::FUIContainer::setClippingRegion(cocos2d::Rect const&) */

void __thiscall fairygui::FUIContainer::setClippingRegion(FUIContainer *this,Rect *param_1)

{
  Rect *this_00;
  
                    /* try { // try from 00aa62e4 to 00ba6323 has its CatchHandler @ 00aa62e4
                       catch() { ... } // from try @ 00aa62e4 with catch @ 00aa62e4
                       catch() { ... } // from try @ 00aa6404 with catch @ 00aa62e4
                       catch() { ... } // from try @ 00aa64b4 with catch @ 00aa62e4 */
  this_00 = *(Rect **)(this + 0x300);
  if (this_00 == (Rect *)0x0) {
    this_00 = operator_new(0xe0);
    cocos2d::Rect::Rect(this_00);
    *(undefined2 *)(this_00 + 0x10) = 0;
    cocos2d::Rect::Rect(this_00 + 0x14);
    cocos2d::Rect::Rect(this_00 + 0x24);
    this_00[0x34] = (Rect)0x1;
                    /* try { // try from 00aa6324 to 00ba633f has its CatchHandler @ 00aa64dc */
    cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this_00 + 0x40));
    cocos2d::CustomCommand::CustomCommand((CustomCommand *)(this_00 + 0x90));
    *(Rect **)(this + 0x300) = this_00;
  }
  cocos2d::Rect::operator=(this_00,(Rect *)param_1);
  return;
}

