
/* cocos2d::ui::ScrollView::calculateTouchMoveVelocity() const */

void __thiscall cocos2d::ui::ScrollView::calculateTouchMoveVelocity(ScrollView *this)

{
  ScrollView *pSVar1;
  ScrollView *pSVar2;
  float fVar3;
  
  pSVar2 = *(ScrollView **)(this + 0x800);
  if (this + 0x7f8 != pSVar2) {
    fVar3 = 0.0;
    do {
      pSVar1 = pSVar2 + 0x10;
      pSVar2 = *(ScrollView **)(pSVar2 + 8);
      fVar3 = fVar3 + *(float *)pSVar1;
    } while (this + 0x7f8 != pSVar2);
                    /* try { // try from 00dbbd74 to 00ebbd7b has its CatchHandler @ 00dbbe2c */
    if ((fVar3 != 0.0) && (fVar3 < *(float *)(this + 0x818))) {
      for (pSVar2 = *(ScrollView **)(this + 0x7e8); this + 0x7e0 != pSVar2;
          pSVar2 = *(ScrollView **)(pSVar2 + 8)) {
      }
                    /* try { // try from 00dbbda4 to 00ebbdab has its CatchHandler @ 00dbbe1c */
                    /* try { // try from 00dbbdac to 00ebbe3f has its CatchHandler @ 00dbbd28 */
      return;
    }
  }
  return;
}

