
/* fairygui::GScrollBar::onGripTouchMove(fairygui::EventContext*) */

void fairygui::GScrollBar::onGripTouchMove(EventContext *param_1)

{
  long lVar1;
  float fVar2;
  float in_s1;
  float fVar3;
  
  fVar2 = (float)GObject::globalToLocal(param_1);
  lVar1 = *(long *)(param_1 + 0x2a0);
  if (param_1[0x2b0] != (EventContext)0x0) {
    fVar2 = *(float *)(lVar1 + 0xcc) - *(float *)(*(long *)(param_1 + 0x288) + 0xcc);
    if (fVar2 == 0.0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = ((in_s1 - *(float *)(param_1 + 0x2c0)) - *(float *)(lVar1 + 0xc4)) / fVar2;
    }
    ScrollPane::setPercY(*(ScrollPane **)(param_1 + 0x2a8),fVar2,false);
    return;
  }
  fVar3 = *(float *)(lVar1 + 200) - *(float *)(*(long *)(param_1 + 0x288) + 200);
  if (fVar3 == 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = ((fVar2 - *(float *)(param_1 + 700)) - *(float *)(lVar1 + 0xc0)) / fVar3;
  }
  ScrollPane::setPercX(*(ScrollPane **)(param_1 + 0x2a8),fVar3,false);
  return;
}

