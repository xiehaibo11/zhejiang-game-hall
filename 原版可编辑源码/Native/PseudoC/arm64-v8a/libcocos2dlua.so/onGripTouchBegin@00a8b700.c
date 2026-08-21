
/* fairygui::GSlider::onGripTouchBegin(fairygui::EventContext*) */

void fairygui::GSlider::onGripTouchBegin(EventContext *param_1)

{
  long in_x1;
  undefined4 uVar1;
  float fVar2;
  undefined4 in_s1;
  undefined4 uVar3;
  
  if (*(int *)(*(long *)(in_x1 + 8) + 0x24) == 0) {
    param_1[0x281] = (EventContext)0x1;
    *(undefined1 *)(in_x1 + 0x28) = 1;
    *(undefined4 *)(in_x1 + 0x2c) = 1;
    uVar1 = GObject::globalToLocal(param_1);
    *(undefined4 *)(param_1 + 0x2d8) = uVar1;
    *(undefined4 *)(param_1 + 0x2dc) = in_s1;
    fVar2 = (float)((*(double *)(param_1 + 0x298) - *(double *)(param_1 + 0x288)) /
                   (*(double *)(param_1 + 0x290) - *(double *)(param_1 + 0x288)));
    uVar3 = NEON_fminnm(fVar2,0x3f800000);
    uVar1 = 0;
    if (0.0 <= fVar2) {
      uVar1 = uVar3;
    }
    *(undefined4 *)(param_1 + 0x2e0) = uVar1;
  }
  return;
}

