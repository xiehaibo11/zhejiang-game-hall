
/* fairygui::GScrollBar::getMinSize() */

float __thiscall fairygui::GScrollBar::getMinSize(GScrollBar *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(this + 0x290);
  fVar3 = 0.0;
  fVar2 = 0.0;
  if (this[0x2b0] == (GScrollBar)0x0) {
    if (lVar1 != 0) {
      fVar2 = *(float *)(lVar1 + 200);
    }
    if (*(long *)(this + 0x298) != 0) {
      fVar3 = *(float *)(*(long *)(this + 0x298) + 200);
    }
  }
  else {
    if (lVar1 != 0) {
      fVar2 = *(float *)(lVar1 + 0xcc);
    }
                    /* try { // try from 00a8a670 to 00b8a6bb has its CatchHandler @ 00a8a670
                       catch() { ... } // from try @ 00a8a670 with catch @ 00a8a670
                       catch() { ... } // from try @ 00a8a6c0 with catch @ 00a8a670 */
    if (*(long *)(this + 0x298) != 0) {
      return fVar2 + *(float *)(*(long *)(this + 0x298) + 0xcc);
    }
  }
  return fVar2 + fVar3;
}

