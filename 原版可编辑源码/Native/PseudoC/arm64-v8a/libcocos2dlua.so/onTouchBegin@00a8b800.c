
/* fairygui::GSlider::onTouchBegin(fairygui::EventContext*) */

void fairygui::GSlider::onTouchBegin(EventContext *param_1)

{
  long in_x1;
  float fVar1;
  float in_s1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((param_1[0x280] != (EventContext)0x0) && (*(int *)(*(long *)(in_x1 + 8) + 0x24) == 0)) {
    fVar1 = (float)GObject::globalToLocal(*(Vec2 **)(param_1 + 0x2d0));
    fVar2 = (float)((*(double *)(param_1 + 0x298) - *(double *)(param_1 + 0x288)) /
                   (*(double *)(param_1 + 0x290) - *(double *)(param_1 + 0x288)));
    fVar5 = (float)NEON_fminnm(fVar2,0x3f800000);
    fVar4 = 0.0;
    fVar3 = fVar4;
    if (0.0 <= fVar2) {
      fVar3 = fVar5;
    }
    if (*(long *)(param_1 + 0x2b0) != 0) {
      fVar4 = fVar1 / *(float *)(param_1 + 0x2c0);
    }
    if (*(long *)(param_1 + 0x2b8) != 0) {
      fVar4 = in_s1 / *(float *)(param_1 + 0x2c4);
    }
    if (param_1[0x2a4] != (EventContext)0x0) {
      fVar4 = -fVar4;
    }
    updateWithPercent((GSlider *)param_1,fVar3 + fVar4,true);
    return;
  }
  return;
}

