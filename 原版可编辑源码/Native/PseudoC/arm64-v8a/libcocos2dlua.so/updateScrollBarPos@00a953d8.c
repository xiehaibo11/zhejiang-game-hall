
/* fairygui::ScrollPane::updateScrollBarPos() */

void __thiscall fairygui::ScrollPane::updateScrollBarPos(ScrollPane *this)

{
  long lVar1;
  GScrollBar *pGVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pGVar2 = *(GScrollBar **)(this + 0x118);
                    /* catch() { ... } // from try @ 00a952f4 with catch @ 00a953f0
                       catch() { ... } // from try @ 00a95398 with catch @ 00a953f0 */
  if (pGVar2 != (GScrollBar *)0x0) {
    fVar4 = 0.0;
    if (*(float *)(this + 0x78) != 0.0) {
      lVar3 = *(long *)(this + 0x108);
      lVar1 = (**(code **)(**(long **)(lVar3 + 400) + 0x168))();
      fVar5 = *(float *)(this + 0x78);
      fVar7 = -(*(float *)(lVar1 + 4) - *(float *)(lVar3 + 0x54));
      fVar4 = (float)NEON_fminnm(fVar5,0);
      if (fVar4 <= fVar7) {
        fVar6 = fVar5;
        if (fVar5 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar4 = fVar7;
        if (fVar6 <= fVar7) {
          fVar4 = fVar6;
        }
      }
      fVar4 = fVar4 / fVar5;
    }
    GScrollBar::setScrollPerc(pGVar2,fVar4);
  }
  pGVar2 = *(GScrollBar **)(this + 0x110);
  if (pGVar2 != (GScrollBar *)0x0) {
    fVar4 = 0.0;
    if (*(float *)(this + 0x74) != 0.0) {
      fVar5 = (float)(**(code **)(**(long **)(this + 0x108) + 0xe0))();
      fVar7 = *(float *)(this + 0x74);
      fVar5 = -fVar5;
      fVar4 = (float)NEON_fminnm(fVar7,0);
      if (fVar4 <= fVar5) {
        fVar6 = fVar7;
        if (fVar7 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar4 = fVar5;
        if (fVar6 <= fVar5) {
          fVar4 = fVar6;
        }
      }
      fVar4 = fVar4 / fVar7;
    }
    GScrollBar::setScrollPerc(pGVar2,fVar4);
  }
  checkRefreshBar(this);
  return;
}

