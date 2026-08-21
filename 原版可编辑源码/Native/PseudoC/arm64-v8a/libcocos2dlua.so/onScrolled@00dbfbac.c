
/* cocos2d::ui::ScrollViewBar::onScrolled(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollViewBar::onScrolled(ScrollViewBar *this,Vec2 *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (this[0x34d] != (ScrollViewBar)0x0) {
    *(undefined4 *)(this + 0x354) = *(undefined4 *)(this + 0x350);
    Node::setOpacity((Node *)this,(uchar)this[0x340]);
  }
  plVar3 = (long *)ScrollView::getInnerContainer(*(ScrollView **)(this + 0x318));
  if (*(int *)(this + 800) == 2) {
    pfVar5 = (float *)(**(code **)(*plVar3 + 0x168))(plVar3);
    fVar10 = *pfVar5;
    pfVar5 = (float *)(**(code **)(**(long **)(this + 0x318) + 0x168))(*(long **)(this + 0x318));
    fVar11 = *pfVar5;
    fVar12 = *(float *)param_1;
    pcVar6 = *(code **)(*plVar3 + 0xe0);
  }
  else {
    if (*(int *)(this + 800) != 1) {
      bVar2 = false;
      fVar10 = 0.0;
      fVar7 = 0.0;
      fVar12 = 0.0;
      fVar11 = 0.0;
      fVar8 = 0.0;
      goto LAB_00dbfce0;
    }
    lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3);
    fVar10 = *(float *)(lVar4 + 4);
    lVar4 = (**(code **)(**(long **)(this + 0x318) + 0x168))(*(long **)(this + 0x318));
    fVar11 = *(float *)(lVar4 + 4);
    fVar12 = *(float *)(param_1 + 4);
    pcVar6 = *(code **)(*plVar3 + 0xf0);
  }
  fVar7 = (float)(*pcVar6)(plVar3);
  fVar7 = -fVar7;
  if (fVar12 == 0.0) {
    bVar2 = false;
    fVar8 = fVar10;
  }
  else {
    fVar8 = fVar12;
    if (fVar12 < 0.0) {
      fVar8 = -fVar12;
    }
    bVar2 = true;
    fVar8 = fVar10 + fVar8 * 20.0;
  }
LAB_00dbfce0:
  fVar9 = *(float *)(this + 0x348);
  fVar12 = ABS(fVar12) + (fVar10 - fVar11);
  if (!bVar2) {
    fVar12 = fVar10 - fVar11;
  }
  fVar10 = (fVar11 / fVar8) * ABS(fVar11 - (fVar9 + fVar9));
  if (fVar12 == 0.0) {
    fVar12 = 0.0;
  }
  else {
    fVar7 = fVar7 / fVar12;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar12 = (float)NEON_fminnm(fVar7,0x3f800000);
  }
  fVar9 = fVar9 + ((fVar11 - fVar10) - (fVar9 + fVar9)) * fVar12;
  if (*(int *)(this + 800) == 1) {
    pfVar5 = (float *)(**(code **)(**(long **)(this + 0x318) + 0x168))();
                    /* catch() { ... } // from try @ 00dc0064 with catch @ 00dbfd58 */
    fStack_5c = fVar9;
    fVar9 = *pfVar5 - *(float *)(this + 0x344);
  }
  else {
    fStack_5c = *(float *)(this + 0x344);
  }
  local_60 = fVar9;
  (**(code **)(**(long **)(this + 0x338) + 0x60))
            (fVar10 / *(float *)((long)*(long **)(this + 0x338) + 0x414));
  plVar3 = *(long **)(this + 0x328);
                    /* try { // try from 00dbfd98 to 00ec0063 has its CatchHandler @ 00dc0070 */
  fVar11 = (float)(**(code **)(**(long **)(this + 0x338) + 0xf0))();
  (**(code **)(*plVar3 + 0xe8))(fVar10 + fVar11,plVar3);
  (**(code **)(*(long *)this + 0x98))(this,&local_60);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

