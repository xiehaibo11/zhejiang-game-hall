
/* cocos2d::ui::ScrollView::setInnerContainerSize(cocos2d::Size const&) */

void __thiscall cocos2d::ui::ScrollView::setInnerContainerSize(ScrollView *this,Size *param_1)

{
  long lVar1;
  Size *pSVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(this + 0x80);
  fVar8 = *(float *)(this + 0x84);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
                    /* try { // try from 00dbb588 to 00ebb58b has its CatchHandler @ 00dbb5ec */
  Size::Size(aSStack_50,pSVar2);
  plVar6 = *(long **)(this + 0x7b8);
  if (*(float *)(this + 0x80) <= *(float *)param_1) {
    fVar7 = *(float *)param_1;
  }
  if (*(float *)(this + 0x84) <= *(float *)(param_1 + 4)) {
    fVar8 = *(float *)(param_1 + 4);
  }
  Size::Size((Size *)&local_58,fVar7,fVar8);
  (**(code **)(*plVar6 + 0x160))(plVar6,&local_58);
  puVar3 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_58 = *puVar3;
  fVar7 = (float)Widget::getLeftBoundary(*(Widget **)(this + 0x7b8));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb588 with catch @ 00dbb5ec
                        */
  if (fVar7 != 0.0) {
    pfVar4 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x150))();
    fVar7 = *pfVar4;
    pfVar4 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
    local_58 = CONCAT44(local_58._4_4_,fVar7 * *pfVar4);
  }
  fVar7 = (float)Widget::getTopBoundary(*(Widget **)(this + 0x7b8));
  fVar8 = *(float *)(this + 0x84);
  if (fVar7 != fVar8) {
                    /* try { // try from 00dbb640 to 00ebb64b has its CatchHandler @ 00dbb6fc */
    lVar5 = (**(code **)(**(long **)(this + 0x7b8) + 0x150))();
    fVar7 = *(float *)(lVar5 + 4);
    lVar5 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))(*(long **)(this + 0x7b8));
    local_58 = CONCAT44(fVar8 - (1.0 - fVar7) * *(float *)(lVar5 + 4),(undefined4)local_58);
  }
  setInnerContainerPosition(this,(Vec2 *)&local_58);
  plVar6 = *(long **)(this + 0x858);
  if (plVar6 != (long *)0x0) {
                    /* try { // try from 00dbb694 to 00ebb697 has its CatchHandler @ 00dbb6e8 */
    (**(code **)(*plVar6 + 0x580))(plVar6,&Vec2::ZERO);
  }
  plVar6 = *(long **)(this + 0x860);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x580))(plVar6,&Vec2::ZERO);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb694 with catch @ 00dbb6e8
                        */
  __stack_chk_fail();
}

