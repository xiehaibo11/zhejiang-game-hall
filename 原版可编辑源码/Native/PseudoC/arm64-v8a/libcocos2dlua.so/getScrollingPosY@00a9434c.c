
/* fairygui::ScrollPane::getScrollingPosY() const */

float __thiscall fairygui::ScrollPane::getScrollingPosY(ScrollPane *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(long *)(this + 0x108);
  lVar1 = (**(code **)(**(long **)(lVar2 + 400) + 0x168))();
  fVar5 = *(float *)(this + 0x78);
  fVar4 = -(*(float *)(lVar1 + 4) - *(float *)(lVar2 + 0x54));
  fVar3 = (float)NEON_fminnm(fVar5,0);
  if (fVar3 <= fVar4) {
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar3 = fVar4;
    if (fVar5 <= fVar4) {
      fVar3 = fVar5;
    }
  }
  return fVar3;
}

