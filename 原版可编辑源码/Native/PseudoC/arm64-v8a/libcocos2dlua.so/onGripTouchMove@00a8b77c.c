
/* fairygui::GSlider::onGripTouchMove(fairygui::EventContext*) */

void fairygui::GSlider::onGripTouchMove(EventContext *param_1)

{
  float fVar1;
  float in_s1;
  float fVar2;
  
  if (param_1[0x281] != (EventContext)0x0) {
    fVar1 = (float)GObject::globalToLocal(param_1);
    if (*(long *)(param_1 + 0x2b0) == 0) {
      fVar2 = *(float *)(param_1 + 0x2c4);
      fVar1 = in_s1 - *(float *)(param_1 + 0x2dc);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2c0);
      fVar1 = fVar1 - *(float *)(param_1 + 0x2d8);
    }
    if (param_1[0x2a4] != (EventContext)0x0) {
      fVar1 = -fVar1;
    }
    updateWithPercent((GSlider *)param_1,*(float *)(param_1 + 0x2e0) + fVar1 / fVar2,true);
    return;
  }
  return;
}

