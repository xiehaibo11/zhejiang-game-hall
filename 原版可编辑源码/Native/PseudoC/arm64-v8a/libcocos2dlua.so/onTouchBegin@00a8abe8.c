
/* fairygui::GScrollBar::onTouchBegin(fairygui::EventContext*) */

void fairygui::GScrollBar::onTouchBegin(EventContext *param_1)

{
  long in_x1;
  float fVar1;
  float in_s1;
  
  *(undefined1 *)(in_x1 + 0x28) = 1;
  fVar1 = (float)GObject::globalToLocal(*(Vec2 **)(param_1 + 0x288));
  if (param_1[0x2b0] == (EventContext)0x0) {
    if (fVar1 < 0.0) {
      ScrollPane::scrollLeft(*(ScrollPane **)(param_1 + 0x2a8),4.0,false);
      return;
    }
    ScrollPane::scrollRight(*(ScrollPane **)(param_1 + 0x2a8),4.0,false);
    return;
  }
  if (in_s1 < 0.0) {
    ScrollPane::scrollUp(*(ScrollPane **)(param_1 + 0x2a8),4.0,false);
    return;
  }
  ScrollPane::scrollDown(*(ScrollPane **)(param_1 + 0x2a8),4.0,false);
  return;
}

