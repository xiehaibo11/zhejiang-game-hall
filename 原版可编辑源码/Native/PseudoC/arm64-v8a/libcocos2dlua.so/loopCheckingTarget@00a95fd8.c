
/* fairygui::ScrollPane::loopCheckingTarget(cocos2d::Vec2&) */

void __thiscall fairygui::ScrollPane::loopCheckingTarget(ScrollPane *this,Vec2 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(this + 0xc0) == 2) {
    fVar1 = *(float *)(param_1 + 4);
    if (fVar1 <= 0.0) {
      if (fVar1 < -*(float *)(this + 0x78)) {
        fVar3 = (*(float *)(this + 0x70) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f0)) * 0.5;
        fVar2 = *(float *)(this + 0xd8) + fVar3;
        if ((fVar2 <= 0.0) && (-*(float *)(this + 0x78) <= fVar2)) {
          *(float *)(param_1 + 4) = fVar1 + fVar3;
          *(float *)(this + 0xd8) = fVar2;
        }
      }
    }
    else {
      fVar3 = (*(float *)(this + 0x70) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f0)) * 0.5;
      fVar2 = *(float *)(this + 0xd8) - fVar3;
      if ((fVar2 <= 0.0) && (-*(float *)(this + 0x78) <= fVar2)) {
        *(float *)(param_1 + 4) = fVar1 - fVar3;
        *(float *)(this + 0xd8) = fVar2;
        return;
      }
    }
  }
  else if (*(int *)(this + 0xc0) == 1) {
    fVar1 = *(float *)param_1;
    if (fVar1 <= 0.0) {
      if (fVar1 < -*(float *)(this + 0x74)) {
        fVar3 = (*(float *)(this + 0x6c) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f4)) * 0.5;
        fVar2 = *(float *)(this + 0xd4) + fVar3;
        if ((fVar2 <= 0.0) && (-*(float *)(this + 0x74) <= fVar2)) {
          *(float *)param_1 = fVar1 + fVar3;
          *(float *)(this + 0xd4) = fVar2;
          return;
        }
      }
    }
    else {
      fVar3 = (*(float *)(this + 0x6c) + (float)*(int *)(*(long *)(this + 0xf8) + 0x2f4)) * 0.5;
      fVar2 = *(float *)(this + 0xd4) - fVar3;
      if ((fVar2 <= 0.0) && (-*(float *)(this + 0x74) <= fVar2)) {
        *(float *)param_1 = fVar1 - fVar3;
        *(float *)(this + 0xd4) = fVar2;
        return;
      }
    }
  }
  return;
}

