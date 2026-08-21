
/* cocos2d::ui::Layout::calculateNearestDistance(cocos2d::ui::Widget*) */

float cocos2d::ui::Layout::calculateNearestDistance(Widget *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  Widget *pWVar6;
  ulong uVar7;
  Size *pSVar8;
  Node *in_x1;
  float fVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  float fVar12;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if ((in_x1 == (Node *)0x0) || (lVar5 = __dynamic_cast(), lVar5 == 0)) {
    pSVar8 = (Size *)(**(code **)(*(long *)in_x1 + 0x168))();
    Size::Size((Size *)&local_80,pSVar8);
  }
  else {
                    /* try { // try from 00db08d4 to 00eb08e3 has its CatchHandler @ 00db0a48 */
    getLayoutAccumulatedSize();
  }
  local_88 = CONCAT44(fStack_7c * 0.5,local_80 * 0.5);
  fVar9 = (float)Node::convertToWorldSpace(in_x1,(Vec2 *)&local_88);
  plVar1 = *(long **)(param_1 + 0x178);
  plVar2 = *(long **)(param_1 + 0x180);
  if (plVar1 != plVar2) {
    lVar5 = *plVar1;
    fVar11 = in_s1;
    fVar4 = 3.4028235e+38;
    do {
      fVar12 = fVar4;
      if (lVar5 != 0) {
        pWVar6 = (Widget *)__dynamic_cast(lVar5,&Node::typeinfo,&typeinfo,0);
        if (pWVar6 == (Widget *)0x0) {
          pWVar6 = (Widget *)__dynamic_cast(lVar5,&Node::typeinfo,&Widget::typeinfo,0);
                    /* try { // try from 00db09b4 to 00eb09d7 has its CatchHandler @ 00db0830 */
          if ((pWVar6 == (Widget *)0x0) ||
             (uVar7 = Widget::isFocusEnabled(pWVar6), (uVar7 & 1) == 0)) goto LAB_00db096c;
          lVar5 = __dynamic_cast(pWVar6,&Widget::typeinfo,&typeinfo,0);
          if (lVar5 == 0) {
                    /* try { // try from 00db09e8 to 00eb0a3f has its CatchHandler @ 00db0830 */
            pSVar8 = (Size *)(**(code **)(*(long *)pWVar6 + 0x168))(pWVar6);
            Size::Size((Size *)&local_80,pSVar8);
          }
          else {
                    /* try { // try from 00db09d8 to 00eb09e7 has its CatchHandler @ 00db0a60 */
            getLayoutAccumulatedSize();
          }
          local_88 = CONCAT44(fStack_7c * 0.5,local_80 * 0.5);
          local_80 = (float)Node::convertToWorldSpace((Node *)pWVar6,(Vec2 *)&local_88);
          local_80 = local_80 - fVar9;
          fVar11 = fVar11 - in_s1;
          fStack_7c = fVar11;
          fVar10 = (float)Vec2::length((Vec2 *)&local_80);
        }
        else {
          fVar10 = (float)calculateNearestDistance(pWVar6);
        }
                    /* try { // try from 00db095c to 00eb09b3 has its CatchHandler @ 00db0a90 */
        fVar12 = (float)(int)fVar10;
        if (fVar4 <= (float)(int)fVar10) {
          fVar12 = fVar4;
        }
      }
LAB_00db096c:
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) goto LAB_00db0a34;
      lVar5 = *plVar1;
      fVar4 = fVar12;
    } while( true );
  }
  fVar12 = 3.4028235e+38;
LAB_00db0a34:
                    /* try { // try from 00db0a40 to 00eb0a47 has its CatchHandler @ 00db0a90 */
  if (*(long *)(lVar3 + 0x28) == local_78) {
                    /* catch() { ... } // from try @ 00db08d4 with catch @ 00db0a48
                       try { // try from 00db0a48 to 00eb0aaf has its CatchHandler @ 00db0830 */
                    /* catch() { ... } // from try @ 00db09d8 with catch @ 00db0a60 */
    return fVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

