
/* fairygui::GScrollBar::onGripTouchBegin(fairygui::EventContext*) */

void fairygui::GScrollBar::onGripTouchBegin(EventContext *param_1)

{
  long in_x1;
  float fVar1;
  float in_s1;
  
  if (*(long *)(param_1 + 0x2a0) != 0) {
    *(undefined1 *)(in_x1 + 0x28) = 1;
    *(undefined4 *)(in_x1 + 0x2c) = 1;
    param_1[0x280] = (EventContext)0x1;
    ScrollPane::updateScrollBarVisible(*(ScrollPane **)(param_1 + 0x2a8));
    fVar1 = (float)GObject::globalToLocal(param_1);
    *(ulong *)(param_1 + 700) =
         CONCAT44(in_s1 - (float)((ulong)*(undefined8 *)(*(long *)(param_1 + 0x288) + 0xc0) >> 0x20)
                  ,fVar1 - (float)*(undefined8 *)(*(long *)(param_1 + 0x288) + 0xc0));
  }
  return;
}

