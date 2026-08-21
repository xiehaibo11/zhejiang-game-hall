
/* cocos2d::ui::ListView::jumpToItem(long, cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void __thiscall
cocos2d::ui::ListView::jumpToItem(ListView *this,long param_1,Vec2 *param_2,Vec2 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  Size *pSVar3;
  Widget *this_00;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((-1 < param_1) && (param_1 < *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3)) &&
     (this_00 = *(Widget **)(*(long *)(this + 0x8b8) + param_1 * 8), this_00 != (Widget *)0x0)) {
    (**(code **)(*(long *)this + 0x6b0))(this);
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))(this);
    uVar6 = *puVar2;
    uVar7 = *(undefined8 *)param_2;
    fVar4 = (float)Widget::getLeftBoundary(this_00);
    fVar5 = (float)Widget::getBottomBoundary(this_00);
    pSVar3 = (Size *)(**(code **)(*(long *)this_00 + 0x168))(this_00);
    Size::Size((Size *)&local_50,pSVar3);
    local_50 = CONCAT44(-((fVar5 + (float)((ulong)local_50 >> 0x20) *
                                   (float)((ulong)*(undefined8 *)param_3 >> 0x20)) -
                         ((float)((ulong)uVar6 >> 0x20) * (float)((ulong)uVar7 >> 0x20) + 0.0)),
                        -((fVar4 + (float)local_50 * (float)*(undefined8 *)param_3) -
                         ((float)uVar6 * (float)uVar7 + 0.0)));
    if (this[0x845] == (ListView)0x0) {
                    /* try { // try from 00db76fc to 00eb775b has its CatchHandler @ 00db76fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00db76fc with catch @ 00db76fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00db77c4 with catch @ 00db76fc
                       catch(type#1 @ 00000000) { ... } // from try @ 00db7870 with catch @ 00db76fc
                        */
      puVar2 = (undefined8 *)ScrollView::getInnerContainerPosition((ScrollView *)this);
      uVar6 = *puVar2;
      local_58 = CONCAT44((float)((ulong)local_50 >> 0x20) - (float)((ulong)uVar6 >> 0x20),
                          (float)local_50 - (float)uVar6);
      fVar4 = (float)(**(code **)(*(long *)this + 0x7b8))(this,&local_58);
      local_50 = CONCAT44((float)uVar6 + (float)((ulong)local_50 >> 0x20),fVar4 + (float)local_50);
    }
    ScrollView::jumpToDestination((ScrollView *)this,(Vec2 *)&local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00db775c to 00eb775f has its CatchHandler @ 00db781c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

