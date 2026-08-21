
/* fairygui::GScrollBar::onGripTouchEnd(fairygui::EventContext*) */

void fairygui::GScrollBar::onGripTouchEnd(EventContext *param_1)

{
  param_1[0x280] = (EventContext)0x0;
  ScrollPane::updateScrollBarVisible(*(ScrollPane **)(param_1 + 0x2a8));
  return;
}

