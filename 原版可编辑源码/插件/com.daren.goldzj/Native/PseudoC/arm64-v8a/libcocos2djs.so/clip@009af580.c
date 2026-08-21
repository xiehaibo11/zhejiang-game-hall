
/* cocos2d::TextRowSpace::clip(cocos2d::Rect const&) */

void __thiscall cocos2d::TextRowSpace::clip(TextRowSpace *this,Rect *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 local_c0;
  undefined4 uStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  Rect aRStack_98 [16];
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  Rect::Rect(aRStack_98,*(float *)(this + 0x10) + *(float *)this,
             *(float *)(this + 0x14) + *(float *)(this + 4),*(float *)(this + 8) - *(float *)this,
             *(float *)(this + 0xc) - *(float *)(this + 4));
  uVar4 = Rect::intersectsRect(param_1,aRStack_98);
  if ((uVar4 & 1) == 0) {
    this[0x30] = (TextRowSpace)0x1;
  }
  else {
    lVar1 = *(long *)(this + 0x18);
    lVar2 = *(long *)(this + 0x20);
    uVar14 = *(undefined8 *)(this + 0x10);
    Rect::Rect((Rect *)&local_a8);
    Rect::Rect((Rect *)&local_b8);
    if (lVar2 - lVar1 != 0) {
      lVar6 = 0;
      uVar4 = 0;
      uVar7 = (lVar2 - lVar1 >> 3) * -0x3333333333333333;
      do {
        Size::operator=((Size *)&local_a0,(Size *)(*(long *)(this + 0x18) + lVar6 + 8));
        local_a8 = CONCAT44((float)((ulong)uVar14 >> 0x20) +
                            (float)((ulong)*(undefined8 *)(*(long *)(this + 0x18) + lVar6) >> 0x20),
                            (float)uVar14 + (float)*(undefined8 *)(*(long *)(this + 0x18) + lVar6));
        uVar5 = Rect::intersectsRect(param_1,(Rect *)&local_a8);
        if ((uVar5 & 1) == 0) {
          *(undefined1 *)(*(long *)(this + 0x18) + lVar6 + 0x24) = 1;
        }
        else {
          uVar5 = Rect::containsPoint(param_1,(Vec2 *)&local_a8);
          if ((uVar5 & 1) != 0) {
                    /* try { // try from 009af688 to 00aaf6cb has its CatchHandler @ 009af688
                       catch() { ... } // from try @ 009af688 with catch @ 009af688
                       catch() { ... } // from try @ 009af6e4 with catch @ 009af688 */
            uVar8 = Rect::getMaxX((Rect *)&local_a8);
            uStack_bc = Rect::getMaxY((Rect *)&local_a8);
            local_c0 = uVar8;
            uVar5 = Rect::containsPoint(param_1,(Vec2 *)&local_c0);
            if ((uVar5 & 1) != 0) {
              *(undefined8 *)(*(long *)(this + 0x18) + lVar6) = local_a8;
              goto LAB_009af7ec;
            }
          }
                    /* try { // try from 009af6cc to 00aaf6e3 has its CatchHandler @ 009af714 */
          fVar9 = (float)Rect::getMinX((Rect *)&local_a8);
          fVar10 = (float)Rect::getMaxX((Rect *)&local_a8);
                    /* try { // try from 009af6e4 to 00aaf727 has its CatchHandler @ 009af688 */
          fVar11 = (float)Rect::getMinX(param_1);
          fVar12 = (float)Rect::getMaxX(param_1);
          local_b8 = fVar11;
          if (fVar11 <= fVar9) {
            local_b8 = fVar9;
          }
          if (fVar9 <= fVar11) {
            fVar9 = fVar11;
          }
          if (fVar12 <= fVar10) {
            fVar10 = fVar12;
            local_b8 = fVar9;
          }
                    /* catch() { ... } // from try @ 009af6cc with catch @ 009af714 */
          fVar9 = (float)Rect::getMinY((Rect *)&local_a8);
                    /* catch() { ... } // from try @ 009af788 with catch @ 009af728 */
          fVar11 = (float)Rect::getMaxY((Rect *)&local_a8);
          fVar12 = (float)Rect::getMinY(param_1);
          fVar13 = (float)Rect::getMaxY(param_1);
          local_b4 = fVar12;
          if (fVar12 <= fVar9) {
            local_b4 = fVar9;
          }
          if (fVar9 <= fVar12) {
            fVar9 = fVar12;
          }
          if (fVar13 <= fVar11) {
            fVar11 = fVar13;
            local_b4 = fVar9;
          }
                    /* try { // try from 009af774 to 00aaf787 has its CatchHandler @ 009afa28 */
          Size::setSize((Size *)&local_b0,fVar10 - local_b8,fVar11 - local_b4);
          Rect::operator=((Rect *)(*(long *)(this + 0x18) + lVar6),(Rect *)&local_b8);
                    /* try { // try from 009af788 to 00aafa43 has its CatchHandler @ 009af728 */
          lVar1 = *(long *)(this + 0x18) + lVar6;
          fVar10 = *(float *)(lVar1 + 0x1c);
          fVar9 = (local_ac / fStack_9c) * fVar10;
          Rect::setRect((Rect *)(lVar1 + 0x10),
                        ((local_b8 - (float)local_a8) / local_a0) * *(float *)(lVar1 + 0x18) +
                        *(float *)(lVar1 + 0x10),
                        *(float *)(lVar1 + 0x14) +
                        ((fVar10 - fVar9) - ((local_b4 - local_a8._4_4_) / fStack_9c) * fVar10),
                        (local_b0 / local_a0) * *(float *)(lVar1 + 0x18),fVar9);
        }
LAB_009af7ec:
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 0x28;
      } while (uVar4 <= uVar7 && uVar7 - uVar4 != 0);
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

