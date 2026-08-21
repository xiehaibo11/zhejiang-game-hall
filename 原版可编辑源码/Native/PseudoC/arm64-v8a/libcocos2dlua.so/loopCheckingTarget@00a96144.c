
/* fairygui::ScrollPane::loopCheckingTarget(cocos2d::Vec2&, int) */

void __thiscall fairygui::ScrollPane::loopCheckingTarget(ScrollPane *this,Vec2 *param_1,int param_2)

{
  long lVar1;
  ScrollPane *pSVar2;
  ScrollPane *pSVar3;
  ScrollPane *pSVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar6 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = fVar6;
  if (param_2 != 0) {
    fVar8 = fVar7;
  }
  if (fVar8 <= 0.0) {
    pSVar2 = this + 0x74;
    if (param_2 != 0) {
      pSVar2 = this + 0x78;
    }
    if (fVar8 < -*(float *)pSVar2) {
      bVar5 = param_2 != 0;
      lVar1 = 0x2f4;
      if (bVar5) {
        lVar1 = 0x2f0;
      }
      pSVar3 = this + 0x6c;
      if (bVar5) {
        pSVar3 = this + 0x70;
      }
      pSVar4 = this + 0xd4;
      if (bVar5) {
        pSVar4 = this + 0xd8;
      }
      fVar9 = (*(float *)pSVar3 + (float)*(int *)(*(long *)(this + 0xf8) + lVar1)) * 0.5;
      fVar8 = *(float *)pSVar4 + fVar9;
      if ((fVar8 <= 0.0) && (-*(float *)pSVar2 <= fVar8)) {
        if (param_2 == 0) {
          *(float *)param_1 = fVar6 + fVar9;
          *(float *)(this + 0xd4) = fVar8;
          return;
        }
        *(float *)(param_1 + 4) = fVar7 + fVar9;
        *(float *)(this + 0xd8) = fVar8;
      }
    }
  }
  else {
    bVar5 = param_2 != 0;
    lVar1 = 0x2f4;
    if (bVar5) {
      lVar1 = 0x2f0;
    }
    pSVar2 = this + 0x6c;
    if (bVar5) {
      pSVar2 = this + 0x70;
    }
    pSVar3 = this + 0xd4;
    if (bVar5) {
      pSVar3 = this + 0xd8;
    }
    fVar9 = (*(float *)pSVar2 + (float)*(int *)(*(long *)(this + 0xf8) + lVar1)) * 0.5;
    fVar8 = *(float *)pSVar3 - fVar9;
    if (fVar8 <= 0.0) {
      pSVar2 = this + 0x74;
      if (param_2 != 0) {
        pSVar2 = this + 0x78;
      }
      if (-*(float *)pSVar2 <= fVar8) {
        if (param_2 != 0) {
          *(float *)(param_1 + 4) = fVar7 - fVar9;
          *(float *)(this + 0xd8) = fVar8;
          return;
        }
        *(float *)param_1 = fVar6 - fVar9;
        *(float *)(this + 0xd4) = fVar8;
        return;
      }
    }
  }
  return;
}

