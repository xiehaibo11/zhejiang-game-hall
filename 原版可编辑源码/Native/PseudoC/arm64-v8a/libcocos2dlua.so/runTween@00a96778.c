
/* fairygui::ScrollPane::runTween(int, float) */

float __thiscall fairygui::ScrollPane::runTween(ScrollPane *this,int param_1,float param_2)

{
  ScrollPane *pSVar1;
  ScrollPane *pSVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar7 = *(float *)(this + 0xdc);
  fVar8 = *(float *)(this + 0xe0);
  fVar6 = fVar7;
  if (param_1 != 0) {
    fVar6 = fVar8;
  }
  if (fVar6 == 0.0) {
    lVar5 = *(long *)(this + 0x108);
    fVar7 = *(float *)(lVar5 + 0x50);
    lVar4 = (**(code **)(**(long **)(lVar5 + 400) + 0x168))();
    if (param_1 == 0) {
      return fVar7;
    }
    return *(float *)(lVar4 + 4) - *(float *)(lVar5 + 0x54);
  }
  if (param_1 == 0) {
    fVar9 = *(float *)(this + 0xe8);
    fVar11 = *(float *)(this + 0xe4) + param_2;
    *(float *)(this + 0xe4) = fVar11;
  }
  else {
    fVar11 = *(float *)(this + 0xe4);
    fVar9 = *(float *)(this + 0xe8) + param_2;
    *(float *)(this + 0xe8) = fVar9;
  }
  pSVar1 = this + 0xec;
  if (param_1 != 0) {
    pSVar1 = this + 0xf0;
  }
  if (param_1 != 0) {
    fVar11 = fVar9;
  }
  if (*(float *)pSVar1 <= fVar11) {
    pSVar1 = this + 0xd4;
    if (param_1 != 0) {
      pSVar1 = this + 0xd8;
    }
    fVar6 = fVar6 + *(float *)pSVar1;
    if (param_1 == 0) {
      *(undefined4 *)(this + 0xdc) = 0;
      fVar7 = 0.0;
    }
    else {
      *(undefined4 *)(this + 0xe0) = 0;
      fVar8 = 0.0;
    }
  }
  else {
    fVar11 = fVar11 / *(float *)pSVar1 + -1.0;
    pSVar1 = this + 0xd4;
    if (param_1 != 0) {
      pSVar1 = this + 0xd8;
    }
    fVar6 = *(float *)pSVar1 + (float)(int)(fVar6 * (fVar11 * fVar11 * fVar11 + 1.0));
  }
  pSVar1 = this + 0x74;
  if (param_1 != 0) {
    pSVar1 = this + 0x78;
  }
  fVar11 = *(float *)pSVar1;
  if (*(int *)(this + 200) < 1) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = (float)*(int *)(this + 200);
    if (*(int *)(this + 0x48) != param_1) {
      fVar9 = 0.0;
    }
  }
  iVar3 = *(int *)(this + 0xcc);
  fVar10 = -fVar11;
  if ((0 < iVar3) && (*(int *)(this + 0x48) == param_1)) {
    if (fVar11 == 0.0) {
      pSVar1 = this + 0x6c;
      if (param_1 != 0) {
        pSVar1 = this + 0x70;
      }
      pSVar2 = this + 100;
      if (param_1 != 0) {
        pSVar2 = this + 0x68;
      }
      fVar11 = (*(float *)pSVar1 + (float)iVar3) - *(float *)pSVar2;
      fVar10 = 0.0;
      if (0.0 < fVar11) {
        fVar10 = fVar11;
      }
    }
    else {
      fVar10 = fVar11 + (float)iVar3;
    }
    fVar10 = -fVar10;
  }
  if ((*(int *)(this + 0xd0) != 2) || (this[0x40] == (ScrollPane)0x0)) {
    if (fVar9 < fVar6) {
      if (param_1 != 0) {
        *(undefined4 *)(this + 0xe0) = 0;
        return fVar9;
      }
      *(undefined4 *)(this + 0xdc) = 0;
      return fVar9;
    }
    if (fVar10 <= fVar6) {
      return fVar6;
    }
    if (param_1 != 0) {
      *(undefined4 *)(this + 0xe0) = 0;
      return fVar10;
    }
    *(undefined4 *)(this + 0xdc) = 0;
    return fVar10;
  }
  fVar11 = fVar7;
  if (param_1 != 0) {
    fVar11 = fVar8;
  }
  if ((fVar6 <= fVar9 + 20.0) || (fVar11 <= 0.0)) {
    fVar11 = fVar7;
    if (param_1 != 0) {
      fVar11 = fVar8;
    }
    if ((fVar6 <= fVar9) || (fVar11 != 0.0)) {
      fVar11 = fVar7;
      if (param_1 != 0) {
        fVar11 = fVar8;
      }
      if ((fVar10 + -20.0 <= fVar6) || (0.0 <= fVar11)) {
        if (param_1 != 0) {
          fVar7 = fVar8;
        }
        if (fVar10 <= fVar6) {
          return fVar6;
        }
        if (fVar7 != 0.0) {
          return fVar6;
        }
      }
      if (param_1 == 0) {
        *(undefined4 *)(this + 0xe4) = 0;
        goto LAB_00a96a60;
      }
      *(undefined4 *)(this + 0xe8) = 0;
      goto LAB_00a96a34;
    }
  }
  fVar10 = fVar9;
  if (param_1 == 0) {
    *(undefined4 *)(this + 0xe4) = 0;
LAB_00a96a60:
    *(undefined4 *)(this + 0xec) = 0x3e99999a;
    *(float *)(this + 0xdc) = fVar10 - fVar6;
    *(float *)(this + 0xd4) = fVar6;
    return fVar6;
  }
  *(undefined4 *)(this + 0xe8) = 0;
LAB_00a96a34:
  *(undefined4 *)(this + 0xf0) = 0x3e99999a;
  *(float *)(this + 0xe0) = fVar10 - fVar6;
  *(float *)(this + 0xd8) = fVar6;
  return fVar6;
}

