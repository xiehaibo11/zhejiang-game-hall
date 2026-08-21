
/* cocos2d::ui::Layout::findNearestChildWidgetIndex(cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*) */

ulong cocos2d::ui::Layout::findNearestChildWidgetIndex
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
  
                    /* try { // try from 00dae5c8 to 00eae5d7 has its CatchHandler @ 00daee90 */
  lVar1 = tpidr_el0;
  local_98 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dae5dc to 00eae5eb has its CatchHandler @ 00daee7c */
  plVar2 = (long *)(**(code **)(*(long *)param_3 + 0x240))();
  lVar11 = plVar2[1] - *plVar2;
                    /* try { // try from 00dae5fc to 00eae60b has its CatchHandler @ 00daee70 */
  if ((param_5 == (Node *)0x0) || (param_3 == param_5)) {
    if (0 < lVar11) {
                    /* try { // try from 00dae648 to 00eae657 has its CatchHandler @ 00daeda0 */
      uVar10 = 0;
      do {
        lVar3 = *(long *)(*(long *)(param_3 + 0x178) + uVar10 * 8);
                    /* try { // try from 00dae684 to 00eae693 has its CatchHandler @ 00daed98 */
        if (((lVar3 != 0) &&
            (pWVar5 = (Widget *)__dynamic_cast(lVar3,&Node::typeinfo,&Widget::typeinfo,0),
            pWVar5 != (Widget *)0x0)) && (uVar6 = Widget::isFocusEnabled(pWVar5), (uVar6 & 1) != 0))
        goto LAB_00dae708;
                    /* try { // try from 00dae658 to 00eae66b has its CatchHandler @ 00daed9c */
        uVar10 = uVar10 + 1;
      } while ((long)uVar10 < lVar11 >> 3);
    }
  }
  else if (param_4 < 4) {
                    /* try { // try from 00dae60c to 00eae61b has its CatchHandler @ 00daedc8 */
                    /* try { // try from 00dae61c to 00eae62f has its CatchHandler @ 00daeda4 */
    lVar3 = __dynamic_cast(param_5,&Widget::typeinfo,&typeinfo,0);
    if (lVar3 == 0) {
                    /* try { // try from 00dae694 to 00eae6a7 has its CatchHandler @ 00daed94 */
      pSVar7 = (Size *)(**(code **)(*(long *)param_5 + 0x168))(param_5);
      Size::Size(local_a0,pSVar7);
    }
    else {
      getLayoutAccumulatedSize();
    }
    local_a8 = CONCAT44(local_a0._4_4_ * 0.5,local_a0._0_4_ * 0.5);
                    /* try { // try from 00dae6c0 to 00eae6cf has its CatchHandler @ 00daed90 */
    fVar12 = (float)Node::convertToWorldSpace(param_5,(Vec2 *)&local_a8);
    if (0 < lVar11) {
                    /* try { // try from 00dae6d0 to 00eae6e3 has its CatchHandler @ 00daed8c */
      lVar3 = 0;
      uVar10 = 0;
                    /* try { // try from 00dae6fc to 00eae70b has its CatchHandler @ 00daed88 */
      fVar8 = 3.4028235e+38;
      fVar15 = param_2;
      do {
                    /* try { // try from 00dae784 to 00eae797 has its CatchHandler @ 00daed74 */
        plVar2 = (long *)(**(code **)(*(long *)param_3 + 0x240))(param_3);
        lVar4 = *(long *)(*plVar2 + lVar3 * 8);
                    /* try { // try from 00dae7b0 to 00eae7bf has its CatchHandler @ 00daed70 */
        if (((lVar4 != 0) &&
            (pWVar5 = (Widget *)__dynamic_cast(lVar4,&Node::typeinfo,&Widget::typeinfo,0),
            pWVar5 != (Widget *)0x0)) && (uVar6 = Widget::isFocusEnabled(pWVar5), (uVar6 & 1) != 0))
        {
                    /* try { // try from 00dae7c0 to 00eae7d3 has its CatchHandler @ 00daed6c */
          lVar4 = __dynamic_cast(pWVar5,&Widget::typeinfo,&typeinfo,0);
          if (lVar4 == 0) {
            pSVar7 = (Size *)(**(code **)(*(long *)pWVar5 + 0x168))(pWVar5);
                    /* try { // try from 00dae7ec to 00eae7fb has its CatchHandler @ 00daed68 */
            Size::Size(local_a0,pSVar7);
            fVar14 = fVar15;
          }
          else {
            getLayoutAccumulatedSize();
            fVar14 = fVar15;
          }
                    /* try { // try from 00dae7fc to 00eae80f has its CatchHandler @ 00daed64 */
          local_a8 = CONCAT44(local_a0._4_4_ * 0.5,local_a0._0_4_ * 0.5);
          fVar13 = (float)Node::convertToWorldSpace((Node *)pWVar5,(Vec2 *)&local_a8);
          fVar15 = fVar14;
          pWVar5 = (Widget *)__dynamic_cast(pWVar5,&Widget::typeinfo,&typeinfo,0);
                    /* try { // try from 00dae828 to 00eae837 has its CatchHandler @ 00daed60 */
          if (pWVar5 == (Widget *)0x0) {
                    /* try { // try from 00dae748 to 00eae75b has its CatchHandler @ 00daed7c */
            fVar15 = (fVar14 - param_2) * (fVar14 - param_2);
            fVar14 = SQRT((fVar13 - fVar12) * (fVar13 - fVar12) + fVar15);
          }
          else {
            fVar14 = (float)calculateNearestDistance(pWVar5);
          }
          uVar9 = (uint)lVar3;
          if (fVar8 <= fVar14) {
            uVar9 = (uint)uVar10;
            fVar14 = fVar8;
          }
          fVar8 = fVar14;
          uVar10 = (ulong)uVar9;
        }
        lVar3 = lVar3 + 1;
                    /* try { // try from 00dae774 to 00eae783 has its CatchHandler @ 00daed78 */
      } while (lVar3 < lVar11 >> 3);
      goto LAB_00dae708;
    }
  }
  uVar10 = 0;
LAB_00dae708:
                    /* try { // try from 00dae70c to 00eae71f has its CatchHandler @ 00daed84 */
  if (*(long *)(lVar1 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dae838 to 00eae84b has its CatchHandler @ 00daed5c */
    __stack_chk_fail();
  }
                    /* try { // try from 00dae738 to 00eae747 has its CatchHandler @ 00daed80 */
  return uVar10 & 0xffffffff;
}

