
/* fairygui::GScrollBar::onArrowButton2Click(fairygui::EventContext*) */

void __thiscall fairygui::GScrollBar::onArrowButton2Click(GScrollBar *this,EventContext *param_1)

{
  param_1[0x28] = (EventContext)0x1;
  if (this[0x2b0] != (GScrollBar)0x0) {
    ScrollPane::scrollDown(*(ScrollPane **)(this + 0x2a8),1.0,false);
    return;
  }
  ScrollPane::scrollRight(*(ScrollPane **)(this + 0x2a8),1.0,false);
  return;
}

