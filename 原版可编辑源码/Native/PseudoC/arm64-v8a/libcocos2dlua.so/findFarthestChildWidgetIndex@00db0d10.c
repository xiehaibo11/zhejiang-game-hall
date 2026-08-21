
/* cocos2d::ui::Layout::findFarthestChildWidgetIndex(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

ulong cocos2d::ui::Layout::findFarthestChildWidgetIndex
                (undefined1 param_1 [16],float param_2,Node *param_3,uint param_4,Node *param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Widget *pWVar5;
  ulong uVar6;
  Size *pSVar7;
  float fVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  Size local_a0 [8];
  long local_98;
  
                    /* try { // try from 00db0d14 to 00eb0d23 has its CatchHandler @ 00db0e0c */
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(*(long *)param_3 + 0x240))();
                    /* try { // try from 00db0d64 to 00eb0d73 has its CatchHandler @ 00db0e14 */
  lVar11 = plVar2[1] - *plVar2;
  if ((param_5 == (Node *)0x0) || (param_3 == param_5)) {
                    /* try { // try from 00db0db0 to 00eb0dbf has its CatchHandler @ 00db0dfc */
    if (0 < lVar11) {
                    /* try { // try from 00db0dc0 to 00eb0e5f has its CatchHandler @ 00db0b68 */
      uVar10 = 0;
      do {
        lVar3 = *(long *)(*(long *)(param_3 + 0x178) + uVar10 * 8);
                    /* catch() { ... } // from try @ 00db0db0 with catch @ 00db0dfc */
        if (((lVar3 != 0) &&
            (pWVar5 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0),
            pWVar5 != (Widget *)0x0)) && (uVar6 = Widget::isFocusEnabled(pWVar5), (uVar6 & 1) != 0))
        goto LAB_00db0e7c;
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < lVar11 >> 3);
    }
  }
  else if (param_4 < 4) {
                    /* try { // try from 00db0d98 to 00eb0daf has its CatchHandler @ 00db0e00 */
    lVar3 = __dynamic_cast(param_5,&Widget::typeinfo,&typeinfo,0);
    if (lVar3 == 0) {
                    /* catch() { ... } // from try @ 00db0c30 with catch @ 00db0e04 */
                    /* catch() { ... } // from try @ 00db0bec with catch @ 00db0e08 */
                    /* catch() { ... } // from try @ 00db0d14 with catch @ 00db0e0c */
                    /* catch() { ... } // from try @ 00db0cc4 with catch @ 00db0e10 */
      pSVar7 = (Size *)(**(code **)(*(long *)param_5 + 0x168))(param_5);
                    /* catch() { ... } // from try @ 00db0d64 with catch @ 00db0e14 */
      Size::Size(local_a0,pSVar7);
    }
    else {
      getLayoutAccumulatedSize();
    }
    local_a8 = CONCAT44(local_a0._4_4_ * 0.5,local_a0._0_4_ * 0.5);
                    /* catch() { ... } // from try @ 00db0ca0 with catch @ 00db0e34 */
    fVar12 = (float)Node::convertToWorldSpace(param_5,(Vec2 *)&local_a8);
    if (0 < lVar11) {
                    /* catch() { ... } // from try @ 00db0c7c with catch @ 00db0e4c */
                    /* try { // try from 00db0e60 to 00eb0ecf has its CatchHandler @ 00db0e60
                       catch() { ... } // from try @ 00db0e60 with catch @ 00db0e60
                       catch() { ... } // from try @ 00db1378 with catch @ 00db0e60
                       catch() { ... } // from try @ 00db13f8 with catch @ 00db0e60 */
      lVar3 = 0;
      uVar10 = 0;
      fVar8 = -3.4028235e+38;
      fVar15 = param_2;
      do {
        plVar2 = (long *)(**(code **)(*(long *)param_3 + 0x240))(param_3);
        lVar4 = *(long *)(*plVar2 + lVar3 * 8);
                    /* try { // try from 00db0f18 to 00eb0f47 has its CatchHandler @ 00db141c */
        if (((lVar4 != 0) &&
            (pWVar5 = (Widget *)__dynamic_cast(lVar4,&Node::typeinfo,&Widget::typeinfo,0),
            pWVar5 != (Widget *)0x0)) && (uVar6 = Widget::isFocusEnabled(pWVar5), (uVar6 & 1) != 0))
        {
          lVar4 = __dynamic_cast(pWVar5,&Widget::typeinfo,&typeinfo,0);
          if (lVar4 == 0) {
                    /* try { // try from 00db0f50 to 00eb0f63 has its CatchHandler @ 00db1418 */
            pSVar7 = (Size *)(**(code **)(*(long *)pWVar5 + 0x168))(pWVar5);
            Size::Size(local_a0,pSVar7);
            fVar14 = fVar15;
          }
          else {
            getLayoutAccumulatedSize();
            fVar14 = fVar15;
          }
                    /* try { // try from 00db0f68 to 00eb0f7f has its CatchHandler @ 00db1414 */
          local_a8 = CONCAT44(local_a0._4_4_ * 0.5,local_a0._0_4_ * 0.5);
          fVar13 = (float)Node::convertToWorldSpace((Node *)pWVar5,(Vec2 *)&local_a8);
          fVar15 = fVar14;
          pWVar5 = (Widget *)__dynamic_cast(pWVar5,&Widget::typeinfo,&typeinfo,0);
          if (pWVar5 == (Widget *)0x0) {
            fVar15 = (fVar14 - param_2) * (fVar14 - param_2);
                    /* try { // try from 00db0ed0 to 00eb0f0f has its CatchHandler @ 00db1424 */
            fVar14 = SQRT((fVar13 - fVar12) * (fVar13 - fVar12) + fVar15);
          }
          else {
            fVar14 = (float)calculateFarthestDistance(pWVar5);
                    /* try { // try from 00db0fa8 to 00eb0fbf has its CatchHandler @ 00db1444 */
          }
          uVar9 = (uint)lVar3;
          if (fVar14 <= fVar8) {
            uVar9 = (uint)uVar10;
            fVar14 = fVar8;
          }
          fVar8 = fVar14;
          uVar10 = (ulong)uVar9;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar11 >> 3);
      goto LAB_00db0e7c;
    }
  }
  uVar10 = 0;
LAB_00db0e7c:
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}

