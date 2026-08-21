
/* cocos2d::ui::Layout::getWorldCenterPoint(cocos2d::ui::Widget*) const */

void __thiscall cocos2d::ui::Layout::getWorldCenterPoint(Layout *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  Size *pSVar3;
  undefined8 local_38;
  Size local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00db07dc to 00eb0807 has its CatchHandler @ 00db06c8 */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00db0808 to 00eb080f has its CatchHandler @ 00db0814 */
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&Widget::typeinfo,&typeinfo,0), lVar2 == 0)) {
    pSVar3 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
                    /* try { // try from 00db0830 to 00eb086b has its CatchHandler @ 00db0830
                       catch() { ... } // from try @ 00db0830 with catch @ 00db0830
                       catch() { ... } // from try @ 00db09b4 with catch @ 00db0830
                       catch() { ... } // from try @ 00db09e8 with catch @ 00db0830
                       catch() { ... } // from try @ 00db0a48 with catch @ 00db0830 */
    Size::Size(local_30,pSVar3);
  }
  else {
                    /* try { // try from 00db0810 to 00eb082f has its CatchHandler @ 00db06c8 */
    getLayoutAccumulatedSize();
                    /* catch() { ... } // from try @ 00db0754 with catch @ 00db0814
                       catch() { ... } // from try @ 00db0808 with catch @ 00db0814 */
  }
  local_38 = CONCAT44(local_30._4_4_ * 0.5,local_30._0_4_ * 0.5);
  Node::convertToWorldSpace((Node *)param_1,(Vec2 *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00db086c to 00eb08d3 has its CatchHandler @ 00db0a94 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

