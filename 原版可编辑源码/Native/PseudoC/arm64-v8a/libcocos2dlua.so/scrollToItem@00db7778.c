
/* cocos2d::ui::ListView::scrollToItem(long, cocos2d::Vec2 const&, cocos2d::Vec2 const&, float) */

void __thiscall
cocos2d::ui::ListView::scrollToItem
          (ListView *this,long param_1,Vec2 *param_2,Vec2 *param_3,float param_4)

{
  long lVar1;
  undefined8 *puVar2;
  Size *pSVar3;
  Widget *this_00;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  long local_58;
  
                    /* try { // try from 00db778c to 00eb779f has its CatchHandler @ 00db7820 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00db77c0 to 00eb77c3 has its CatchHandler @ 00db7818 */
  if (((-1 < param_1) && (param_1 < *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3)) &&
     (this_00 = *(Widget **)(*(long *)(this + 0x8b8) + param_1 * 8), this_00 != (Widget *)0x0)) {
                    /* try { // try from 00db77c4 to 00eb7833 has its CatchHandler @ 00db76fc */
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))(this);
    uVar6 = *puVar2;
    uVar7 = *(undefined8 *)param_2;
    fVar4 = (float)Widget::getLeftBoundary(this_00);
    fVar5 = (float)Widget::getBottomBoundary(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db77c0 with catch @ 00db7818
                        */
    pSVar3 = (Size *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db775c with catch @ 00db781c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db778c with catch @ 00db7820
                        */
    Size::Size((Size *)&local_60,pSVar3);
                    /* try { // try from 00db7834 to 00eb7837 has its CatchHandler @ 00db789c */
    local_60 = CONCAT44(-((fVar5 + (float)((ulong)local_60 >> 0x20) *
                                   (float)((ulong)*(undefined8 *)param_3 >> 0x20)) -
                         ((float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar7 >> 0x20) + 0.0)),
                        -((fVar4 + (float)local_60 * (float)*(undefined8 *)param_3) -
                         ((float)uVar6 * (float)uVar7 + 0.0)));
    ScrollView::startAutoScrollToDestination((ScrollView *)this,(Vec2 *)&local_60,param_4,true);
  }
                    /* try { // try from 00db786c to 00eb786f has its CatchHandler @ 00db78b0 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00db7870 to 00eb78c3 has its CatchHandler @ 00db76fc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

