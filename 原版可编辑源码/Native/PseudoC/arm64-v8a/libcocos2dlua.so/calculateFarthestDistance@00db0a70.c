
/* cocos2d::ui::Layout::calculateFarthestDistance(cocos2d::ui::Widget*) */

float cocos2d::ui::Layout::calculateFarthestDistance(Widget *param_1)

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
  
                    /* catch() { ... } // from try @ 00db095c with catch @ 00db0a90
                       catch() { ... } // from try @ 00db0a40 with catch @ 00db0a90 */
                    /* catch() { ... } // from try @ 00db086c with catch @ 00db0a94 */
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00db0ab0 to 00eb0aef has its CatchHandler @ 00db0ab0
                       catch() { ... } // from try @ 00db0ab0 with catch @ 00db0ab0
                       catch() { ... } // from try @ 00db0b10 with catch @ 00db0ab0 */
  if ((in_x1 == (Node *)0x0) || (lVar5 = __dynamic_cast(), lVar5 == 0)) {
    pSVar8 = (Size *)(**(code **)(*(long *)in_x1 + 0x168))();
                    /* try { // try from 00db0af0 to 00eb0b0f has its CatchHandler @ 00db0b4c */
    Size::Size((Size *)&local_80,pSVar8);
  }
  else {
    getLayoutAccumulatedSize();
  }
  local_88 = CONCAT44(fStack_7c * 0.5,local_80 * 0.5);
  fVar9 = (float)Node::convertToWorldSpace(in_x1,(Vec2 *)&local_88);
                    /* try { // try from 00db0b10 to 00eb0b67 has its CatchHandler @ 00db0ab0 */
  plVar1 = *(long **)(param_1 + 0x178);
  plVar2 = *(long **)(param_1 + 0x180);
  if (plVar1 != plVar2) {
    lVar5 = *plVar1;
    fVar11 = in_s1;
    fVar4 = -3.4028235e+38;
    do {
      fVar12 = fVar4;
      if (lVar5 != 0) {
        pWVar6 = (Widget *)__dynamic_cast(lVar5,&Node::typeinfo,&typeinfo,0);
        if (pWVar6 == (Widget *)0x0) {
          pWVar6 = (Widget *)__dynamic_cast(lVar5,&Node::typeinfo,&Widget::typeinfo,0);
          if ((pWVar6 == (Widget *)0x0) ||
             (uVar7 = Widget::isFocusEnabled(pWVar6), (uVar7 & 1) == 0)) goto LAB_00db0b68;
          lVar5 = __dynamic_cast(pWVar6,&Widget::typeinfo,&typeinfo,0);
          if (lVar5 == 0) {
            pSVar8 = (Size *)(**(code **)(*(long *)pWVar6 + 0x168))(pWVar6);
                    /* try { // try from 00db0bec to 00eb0c2f has its CatchHandler @ 00db0e08 */
            Size::Size((Size *)&local_80,pSVar8);
          }
          else {
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
          fVar10 = (float)calculateFarthestDistance(pWVar6);
        }
        fVar12 = (float)(int)fVar10;
        if ((float)(int)fVar10 <= fVar4) {
          fVar12 = fVar4;
        }
      }
LAB_00db0b68:
                    /* try { // try from 00db0b68 to 00eb0beb has its CatchHandler @ 00db0b68
                       catch() { ... } // from try @ 00db0b68 with catch @ 00db0b68
                       catch() { ... } // from try @ 00db0dc0 with catch @ 00db0b68 */
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) goto LAB_00db0c30;
      lVar5 = *plVar1;
      fVar4 = fVar12;
    } while( true );
  }
  fVar12 = -3.4028235e+38;
LAB_00db0c30:
                    /* try { // try from 00db0c30 to 00eb0c47 has its CatchHandler @ 00db0e04 */
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return fVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

