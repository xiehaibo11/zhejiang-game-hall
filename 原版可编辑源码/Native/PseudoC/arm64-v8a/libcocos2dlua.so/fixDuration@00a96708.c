
/* fairygui::ScrollPane::fixDuration(int, float) */

void __thiscall fairygui::ScrollPane::fixDuration(ScrollPane *this,int param_1,float param_2)

{
  ScrollPane *pSVar1;
  float fVar2;
  
  pSVar1 = this + 0xdc;
  if (param_1 != 0) {
    pSVar1 = this + 0xe0;
  }
  fVar2 = *(float *)pSVar1;
  if ((fVar2 != 0.0) && (ABS(fVar2) < ABS(param_2))) {
    pSVar1 = this + 0xec;
    if (param_1 != 0) {
      pSVar1 = this + 0xf0;
    }
    fVar2 = ABS(fVar2 / param_2) * *(float *)pSVar1;
    if (fVar2 <= 0.3) {
      fVar2 = 0.3;
    }
    if (param_1 == 0) {
      *(float *)(this + 0xec) = fVar2;
      return;
    }
    *(float *)(this + 0xf0) = fVar2;
  }
  return;
}

