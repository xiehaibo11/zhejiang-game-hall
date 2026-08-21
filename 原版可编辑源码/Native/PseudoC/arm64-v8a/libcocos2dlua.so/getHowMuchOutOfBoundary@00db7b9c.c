
/* cocos2d::ui::ListView::getHowMuchOutOfBoundary(cocos2d::Vec2 const&) */

undefined1  [16] __thiscall
cocos2d::ui::ListView::getHowMuchOutOfBoundary(ListView *this,Vec2 *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  Size *pSVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Size aSStack_a0 [8];
  float local_98;
  float fStack_94;
  Size aSStack_90 [8];
  long local_88;
  
                    /* catch() { ... } // from try @ 00db79c8 with catch @ 00db7bc4 */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00db79dc with catch @ 00db7bc8 */
  local_88 = *(long *)(lVar1 + 0x28);
  if (this[0x8d8] != (ListView)0x0) {
    lVar5 = *(long *)(this + 0x8b8);
    lVar6 = *(long *)(this + 0x8c0);
    if ((lVar5 != lVar6) && ((*(uint *)(this + 0x8d4) | 2) != 2)) {
      if ((*(float *)param_1 == 0.0) &&
         ((*(float *)(param_1 + 4) == 0.0 && (this[0x850] == (ListView)0x0)))) {
                    /* try { // try from 00db7d4c to 00eb7d53 has its CatchHandler @ 00db7e18 */
        auVar8 = ZEXT416(*(uint *)(this + 0x848));
        goto LAB_00db7c10;
      }
      fVar15 = *(float *)(this + 0x7cc);
      fVar14 = *(float *)(this + 2000);
      fVar16 = *(float *)(this + 0x7c4);
      fVar13 = *(float *)(this + 0x7c8);
      pSVar4 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
      Size::Size(aSStack_90,pSVar4);
      if (*(int *)(this + 0x8d4) - 1U < 6) {
        fVar9 = 0.0;
                    /* try { // try from 00db7cdc to 00eb7d1f has its CatchHandler @ 00db7cdc
                       catch() { ... } // from try @ 00db7cdc with catch @ 00db7cdc
                       catch() { ... } // from try @ 00db7ddc with catch @ 00db7cdc */
        lVar5 = (lVar6 - lVar5 >> 3) + -1;
        fVar18 = 0.0;
        fVar17 = 0.0;
        fVar10 = 0.0;
        switch(*(int *)(this + 0x8d4)) {
        case 1:
                    /* try { // try from 00db7d64 to 00eb7ddb has its CatchHandler @ 00db7e24 */
          pSVar4 = (Size *)(**(code **)(*(long *)**(undefined8 **)(this + 0x8b8) + 0x168))();
          Size::operator-(aSStack_90,pSVar4);
          Size::operator/(aSStack_a0,2.0);
          fVar18 = fStack_94;
          fVar9 = local_98;
          pSVar4 = (Size *)(**(code **)(**(long **)(*(long *)(this + 0x8b8) + lVar5 * 8) + 0x168))()
          ;
          Size::operator-(aSStack_90,pSVar4);
          Size::operator/(aSStack_a0,2.0);
          fVar17 = fStack_94;
          fVar10 = local_98;
          break;
        case 2:
          break;
        default:
          pSVar4 = (Size *)(**(code **)(**(long **)(*(long *)(this + 0x8b8) + lVar5 * 8) + 0x168))()
          ;
          Size::operator-(aSStack_90,pSVar4);
          fVar18 = 0.0;
          fVar9 = 0.0;
          fVar17 = fStack_94;
          fVar10 = local_98;
          break;
        case 4:
        case 6:
                    /* try { // try from 00db7d20 to 00eb7d2b has its CatchHandler @ 00db7e20 */
          pSVar4 = (Size *)(**(code **)(*(long *)**(undefined8 **)(this + 0x8b8) + 0x168))();
                    /* try { // try from 00db7d38 to 00eb7d3f has its CatchHandler @ 00db7e1c */
          Size::operator-(aSStack_90,pSVar4);
          fVar9 = local_98;
          goto LAB_00db7dd4;
        }
      }
      else {
        fStack_94 = 0.0;
        fVar9 = 0.0;
LAB_00db7dd4:
        fVar18 = fStack_94;
        fVar17 = 0.0;
        fVar10 = 0.0;
      }
                    /* try { // try from 00db7ddc to 00eb7e3f has its CatchHandler @ 00db7cdc */
      fVar7 = (float)Widget::getLeftBoundary(*(Widget **)(this + 0x7b8));
      if (fVar7 + *(float *)param_1 <= fVar15 + fVar9) {
                    /* catch() { ... } // from try @ 00db7d4c with catch @ 00db7e18 */
        fVar15 = (float)Widget::getRightBoundary(*(Widget **)(this + 0x7b8));
                    /* catch() { ... } // from try @ 00db7d38 with catch @ 00db7e1c */
                    /* catch() { ... } // from try @ 00db7d20 with catch @ 00db7e20 */
        uVar11 = 0;
                    /* catch() { ... } // from try @ 00db7d64 with catch @ 00db7e24 */
        if (fVar15 + *(float *)param_1 < fVar14 - fVar10) {
          fVar15 = (float)Widget::getRightBoundary(*(Widget **)(this + 0x7b8));
          uVar11 = (ulong)(uint)((fVar14 - fVar10) - (fVar15 + *(float *)param_1));
        }
      }
      else {
        fVar14 = (float)Widget::getLeftBoundary(*(Widget **)(this + 0x7b8));
        uVar11 = (ulong)(uint)((fVar15 + fVar9) - (fVar14 + *(float *)param_1));
      }
      uVar12 = 0;
      fVar14 = (float)Widget::getTopBoundary(*(Widget **)(this + 0x7b8));
      if (fVar16 - fVar18 <= fVar14 + *(float *)(param_1 + 4)) {
        fVar14 = (float)Widget::getBottomBoundary(*(Widget **)(this + 0x7b8));
        fVar9 = *(float *)(param_1 + 4);
        fVar15 = 0.0;
        if (fVar13 + fVar17 < fVar14 + fVar9) {
          fVar14 = (float)Widget::getBottomBoundary(*(Widget **)(this + 0x7b8));
          fVar9 = *(float *)(param_1 + 4);
          fVar15 = (fVar13 + fVar17) - (fVar14 + fVar9);
        }
      }
      else {
        fVar13 = (float)Widget::getTopBoundary(*(Widget **)(this + 0x7b8));
        fVar9 = *(float *)(param_1 + 4);
        fVar15 = (fVar16 - fVar18) - (fVar13 + fVar9);
      }
      auVar3._8_8_ = uVar12;
      auVar3._0_8_ = uVar11;
      auVar2._8_8_ = uVar12;
      auVar2._0_8_ = uVar11;
      auVar8._8_8_ = uVar12;
      auVar8._0_8_ = uVar11;
      if ((*(float *)param_1 == 0.0) && (auVar8 = auVar2, fVar9 == 0.0)) {
        *(int *)(this + 0x848) = (int)uVar11;
        *(float *)(this + 0x84c) = fVar15;
        this[0x850] = (ListView)0x0;
        auVar8 = auVar3;
      }
      goto LAB_00db7c10;
    }
  }
  auVar8 = ScrollView::getHowMuchOutOfBoundary((ScrollView *)this,param_1);
LAB_00db7c10:
  if (*(long *)(lVar1 + 0x28) == local_88) {
    return auVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

