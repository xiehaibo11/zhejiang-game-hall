
/* fairygui::GComponent::updateBounds() */

void __thiscall fairygui::GComponent::updateBounds(GComponent *this)

{
  long lVar1;
  long lVar2;
  float fVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar1 = *(long *)(this + 0x1e0);
  if (lVar1 == *(long *)(this + 0x1e8)) {
    fVar8 = 0.0;
    fVar7 = 0.0;
    fVar6 = 0.0;
    fVar3 = 0.0;
  }
  else {
    lVar2 = *(long *)(this + 0x1e8) - lVar1;
    if (lVar2 == 0) {
      fVar3 = 3.4028235e+38;
                    /* try { // try from 00a72204 to 00b72207 has its CatchHandler @ 00a7223c */
      fVar7 = -3.4028235e+38;
                    /* try { // try from 00a72208 to 00b7224f has its CatchHandler @ 00a721b8 */
      fVar8 = fVar7;
      fVar6 = fVar3;
    }
    else {
      fVar7 = -3.4028235e+38;
      fVar3 = 3.4028235e+38;
      uVar4 = 0;
      fVar8 = fVar7;
      fVar6 = fVar3;
      do {
        lVar5 = *(long *)(lVar1 + uVar4 * 8);
        uVar4 = uVar4 + 1;
        fVar11 = *(float *)(lVar5 + 0xc0);
        fVar9 = *(float *)(lVar5 + 0xc4);
        fVar10 = fVar11;
        if (fVar3 <= fVar11) {
          fVar10 = fVar3;
        }
                    /* try { // try from 00a721b8 to 00b72203 has its CatchHandler @ 00a721b8
                       catch() { ... } // from try @ 00a721b8 with catch @ 00a721b8
                       catch() { ... } // from try @ 00a72208 with catch @ 00a721b8 */
        fVar3 = fVar10;
        fVar11 = fVar11 + *(float *)(lVar5 + 200) * *(float *)(lVar5 + 0xe0);
        fVar10 = fVar9 + *(float *)(lVar5 + 0xcc) * *(float *)(lVar5 + 0xe4);
        if (fVar6 <= fVar9) {
          fVar9 = fVar6;
        }
        fVar6 = fVar9;
        if (fVar11 <= fVar8) {
          fVar11 = fVar8;
        }
        fVar8 = fVar11;
        if (fVar10 <= fVar7) {
          fVar10 = fVar7;
        }
        fVar7 = fVar10;
      } while (uVar4 < (ulong)(lVar2 >> 3));
    }
    fVar8 = fVar8 - fVar3;
    fVar7 = fVar7 - fVar6;
  }
  this[600] = (GComponent)0x0;
  if (*(ScrollPane **)(this + 0x230) != (ScrollPane *)0x0) {
    ScrollPane::setContentSize
              (*(ScrollPane **)(this + 0x230),(float)(int)(fVar8 + fVar3),
               (float)(int)(fVar7 + fVar6));
    return;
  }
                    /* catch() { ... } // from try @ 00a72204 with catch @ 00a7223c */
  return;
}

