
/* fairygui::ScrollPane::handleSizeChanged() */

void __thiscall fairygui::ScrollPane::handleSizeChanged(ScrollPane *this)

{
  Size *pSVar1;
  ScrollPane *pSVar2;
  ScrollPane *pSVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  GObject *pGVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  if (this[0x4e] != (ScrollPane)0x0) {
    this[0x43] = (ScrollPane)(*(float *)(this + 0x70) <= *(float *)(this + 0x68));
    this[0x44] = (ScrollPane)(*(float *)(this + 0x6c) <= *(float *)(this + 100));
  }
  if (*(GScrollBar **)(this + 0x118) != (GScrollBar *)0x0) {
    fVar10 = 0.0;
    if ((*(float *)(this + 0x70) != 0.0) &&
       (fVar10 = *(float *)(this + 0x68) / *(float *)(this + 0x70), 1.0 < fVar10)) {
      fVar10 = 1.0;
    }
    GScrollBar::setDisplayPerc(*(GScrollBar **)(this + 0x118),fVar10);
  }
  if (*(GScrollBar **)(this + 0x110) != (GScrollBar *)0x0) {
    fVar10 = 0.0;
    if ((*(float *)(this + 0x6c) != 0.0) &&
       (fVar10 = *(float *)(this + 100) / *(float *)(this + 0x6c), 1.0 < fVar10)) {
      fVar10 = 1.0;
    }
    GScrollBar::setDisplayPerc(*(GScrollBar **)(this + 0x110),fVar10);
  }
  updateScrollBarVisible(this);
                    /* try { // try from 00a94b70 to 00b94bc3 has its CatchHandler @ 00a94b70
                       catch() { ... } // from try @ 00a94b70 with catch @ 00a94b70
                       catch() { ... } // from try @ 00a94c68 with catch @ 00a94b70
                       catch() { ... } // from try @ 00a94cc8 with catch @ 00a94b70 */
  pSVar1 = (Size *)(this + 100);
  (**(code **)(**(long **)(this + 0x100) + 0x160))(*(long **)(this + 0x100),pSVar1);
  local_6c = *(undefined4 *)(*(long *)(this + 0xf8) + 0x24c);
  local_70 = -*(float *)(*(long *)(this + 0xf8) + 0x248);
  cocos2d::Rect::Rect((Rect *)&local_68,(Vec2 *)&local_70,pSVar1);
  if ((this[0x43] != (ScrollPane)0x0) && (*(long *)(this + 0x118) != 0)) {
                    /* try { // try from 00a94bc4 to 00b94bff has its CatchHandler @ 00a94d08 */
    local_60 = CONCAT44(local_60._4_4_,*(float *)(*(long *)(this + 0x118) + 200) + (float)local_60);
  }
  if ((this[0x44] != (ScrollPane)0x0) && (*(long *)(this + 0x110) != 0)) {
    local_60 = CONCAT44(*(float *)(*(long *)(this + 0x110) + 0xcc) + local_60._4_4_,(float)local_60)
    ;
  }
  if (this[0x5a] != (ScrollPane)0x0) {
    uVar12 = *(undefined8 *)(*(long *)(this + 0xf8) + 0x238);
    fVar10 = (float)uVar12;
    fVar11 = (float)((ulong)uVar12 >> 0x20);
    local_68 = CONCAT44((float)((ulong)local_68 >> 0x20) - fVar11,(float)local_68 - fVar10);
    uVar12 = *(undefined8 *)(*(long *)(this + 0xf8) + 0x240);
                    /* try { // try from 00a94c0c to 00b94c67 has its CatchHandler @ 00a94d0c */
    local_60 = CONCAT44((float)((ulong)local_60 >> 0x20) + fVar11 + (float)((ulong)uVar12 >> 0x20),
                        (float)local_60 + fVar10 + (float)uVar12);
  }
  FUIContainer::setClippingRegion(*(FUIContainer **)(this + 0x100),(Rect *)&local_68);
  if (*(long **)(this + 0x118) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x118) + 0x70))();
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 0x70))();
  }
  if (*(long **)(this + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x120) + 0x70))();
  }
  if (*(long **)(this + 0x128) != (long *)0x0) {
                    /* try { // try from 00a94c68 to 00b94c9b has its CatchHandler @ 00a94b70 */
    (**(code **)(**(long **)(this + 0x128) + 0x70))();
  }
  fVar11 = 0.0;
  fVar10 = 0.0;
  if ((*(uint *)(this + 0x24) | 2) == 2) {
    fVar10 = *(float *)(this + 0x6c) - *(float *)(this + 100);
                    /* try { // try from 00a94c9c to 00b94caf has its CatchHandler @ 00a94d08 */
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    fVar10 = (float)(int)fVar10;
  }
  *(float *)(this + 0x74) = fVar10;
  if (*(uint *)(this + 0x24) - 1 < 2) {
                    /* try { // try from 00a94cb4 to 00b94cc7 has its CatchHandler @ 00a94d0c */
    fVar11 = *(float *)(this + 0x70) - *(float *)(this + 0x68);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
                    /* try { // try from 00a94cc8 to 00b94d27 has its CatchHandler @ 00a94b70 */
    fVar11 = (float)(int)fVar11;
  }
  fVar15 = *(float *)(this + 0x5c);
  fVar13 = (float)NEON_fminnm(fVar10,0);
  *(float *)(this + 0x78) = fVar11;
  if (fVar13 <= fVar15) {
    fVar14 = fVar10;
    if (fVar10 <= 0.0) {
      fVar14 = 0.0;
    }
    fVar13 = fVar15;
    if (fVar14 <= fVar15) {
      fVar13 = fVar14;
    }
  }
  fVar14 = *(float *)(this + 0x60);
  fVar15 = (float)NEON_fminnm(fVar11,0);
  *(float *)(this + 0x5c) = fVar13;
                    /* catch() { ... } // from try @ 00a94bc4 with catch @ 00a94d08
                       catch() { ... } // from try @ 00a94c9c with catch @ 00a94d08 */
                    /* catch() { ... } // from try @ 00a94c0c with catch @ 00a94d0c
                       catch() { ... } // from try @ 00a94cb4 with catch @ 00a94d0c */
  if ((fVar15 <= fVar14) && (fVar15 = fVar14, fVar11 <= fVar14)) {
    fVar15 = fVar11;
  }
  iVar4 = *(int *)(this + 0x48);
  *(float *)(this + 0x60) = fVar15;
  if (iVar4 != 0) {
    fVar10 = fVar11;
  }
  if (fVar10 == 0.0) {
    pSVar2 = this + 0x6c;
    if (iVar4 != 0) {
      pSVar2 = this + 0x70;
    }
    pSVar3 = this + 100;
    if (iVar4 != 0) {
      pSVar3 = this + 0x68;
    }
    fVar11 = (*(float *)pSVar2 + (float)*(int *)(this + 0xcc)) - *(float *)pSVar3;
    fVar10 = 0.0;
    if (0.0 < fVar11) {
      fVar10 = fVar11;
    }
  }
  else {
    fVar10 = fVar10 + (float)*(int *)(this + 0xcc);
  }
  plVar8 = *(long **)(this + 0x108);
  fVar11 = (float)(**(code **)(*plVar8 + 0xe0))(plVar8);
  if (iVar4 == 0) {
    fVar10 = -fVar10;
    fVar15 = (float)*(int *)(this + 200);
    fVar13 = fVar15;
    if (fVar10 <= fVar15) {
      fVar13 = fVar10;
    }
    if (fVar13 <= fVar11) {
      if (fVar10 <= fVar15) {
        fVar10 = fVar15;
      }
      fVar13 = fVar11;
      if (fVar10 <= fVar11) {
        fVar13 = fVar10;
      }
    }
    lVar9 = *(long *)(this + 0x108);
    lVar6 = (**(code **)(**(long **)(lVar9 + 400) + 0x168))();
    fVar14 = *(float *)(this + 0x78);
    fVar15 = *(float *)(lVar6 + 4) - *(float *)(lVar9 + 0x54);
    fVar10 = -fVar14;
    fVar11 = 0.0;
                    /* try { // try from 00a94e90 to 00b94edf has its CatchHandler @ 00a94e90
                       catch() { ... } // from try @ 00a94e90 with catch @ 00a94e90
                       catch() { ... } // from try @ 00a94f2c with catch @ 00a94e90
                       catch() { ... } // from try @ 00a94f70 with catch @ 00a94e90 */
    if (0.0 <= fVar14) {
      fVar11 = fVar10;
    }
    if (fVar11 <= fVar15) {
      if (0.0 <= fVar14) {
        fVar10 = 0.0;
      }
      fVar11 = fVar15;
      if (fVar10 <= fVar15) {
        fVar11 = fVar10;
      }
    }
  }
  else {
    fVar14 = *(float *)(this + 0x74);
    fVar15 = -fVar14;
    fVar13 = 0.0;
    if (0.0 <= fVar14) {
      fVar13 = fVar15;
    }
    if (fVar13 <= fVar11) {
      if (0.0 <= fVar14) {
        fVar15 = 0.0;
      }
      fVar13 = fVar11;
      if (fVar15 <= fVar11) {
        fVar13 = fVar15;
      }
    }
    lVar9 = *(long *)(this + 0x108);
    lVar6 = (**(code **)(**(long **)(lVar9 + 400) + 0x168))();
    fVar10 = -fVar10;
    fVar15 = (float)*(int *)(this + 200);
    fVar11 = fVar15;
    if (fVar10 <= fVar15) {
      fVar11 = fVar10;
    }
    fVar14 = *(float *)(lVar6 + 4) - *(float *)(lVar9 + 0x54);
    if (fVar11 <= fVar14) {
      if (fVar10 <= fVar15) {
        fVar10 = fVar15;
      }
      fVar11 = fVar14;
      if (fVar10 <= fVar14) {
        fVar11 = fVar10;
      }
    }
  }
  lVar6 = (**(code **)(*(long *)plVar8[0x32] + 0x168))();
  (**(code **)(*plVar8 + 200))(fVar13,*(float *)(lVar6 + 4) - fVar11,plVar8);
  pGVar7 = *(GObject **)(this + 0x120);
  if (pGVar7 != (GObject *)0x0) {
                    /* try { // try from 00a94ee0 to 00b94f2b has its CatchHandler @ 00a94fb0 */
    if (*(int *)(this + 0x48) == 0) {
      fVar11 = *(float *)(this + 0x68);
      fVar10 = *(float *)(pGVar7 + 0xd0);
    }
    else {
      fVar10 = *(float *)pSVar1;
      fVar11 = *(float *)(pGVar7 + 0xd4);
    }
    GObject::setSize(pGVar7,fVar10,fVar11,false);
  }
  pGVar7 = *(GObject **)(this + 0x128);
  if (pGVar7 != (GObject *)0x0) {
    if (*(int *)(this + 0x48) == 0) {
      fVar11 = *(float *)(this + 0x68);
      fVar10 = *(float *)(pGVar7 + 0xd0);
    }
    else {
      fVar10 = *(float *)pSVar1;
      fVar11 = *(float *)(pGVar7 + 0xd4);
    }
                    /* try { // try from 00a94f2c to 00b94f5b has its CatchHandler @ 00a94e90 */
    GObject::setSize(pGVar7,fVar10,fVar11,false);
  }
  updateScrollBarPos(this);
  if (this[0x58] != (ScrollPane)0x0) {
    updatePageController(this);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a94f5c to 00b94f6f has its CatchHandler @ 00a94fb0 */
                    /* try { // try from 00a94f70 to 00b94fcb has its CatchHandler @ 00a94e90 */
  return;
}

