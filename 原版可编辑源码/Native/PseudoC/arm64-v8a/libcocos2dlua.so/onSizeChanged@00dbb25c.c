
/* cocos2d::ui::ScrollView::onSizeChanged() */

void __thiscall cocos2d::ui::ScrollView::onSizeChanged(ScrollView *this)

{
  long lVar1;
  Size *pSVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined4 local_48;
  float local_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb1dc with catch @ 00dbb280
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb1f4 with catch @ 00dbb284
                        */
  Layout::onSizeChanged((Layout *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb0dc with catch @ 00dbb288
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb220 with catch @ 00dbb28c
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb0f0 with catch @ 00dbb290
                        */
  *(undefined4 *)(this + 0x7c4) = *(undefined4 *)(this + 0x84);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb120 with catch @ 00dbb294
                        */
  *(undefined4 *)(this + 2000) = *(undefined4 *)(this + 0x80);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x7b8) + 0x168))();
                    /* try { // try from 00dbb2a8 to 00ebb2ab has its CatchHandler @ 00dbb2d8 */
                    /* try { // try from 00dbb2ac to 00ebb2eb has its CatchHandler @ 00dbaff0 */
  Size::Size((Size *)&local_40,pSVar2);
  plVar4 = *(long **)(this + 0x7b8);
  if (local_40 <= *(float *)(this + 0x80)) {
    local_40 = *(float *)(this + 0x80);
  }
  fVar5 = fStack_3c;
  if (fStack_3c <= *(float *)(this + 0x84)) {
    fVar5 = *(float *)(this + 0x84);
  }
  Size::Size((Size *)&local_48,local_40,fVar5);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb2a8 with catch @ 00dbb2d8
                        */
  (**(code **)(*plVar4 + 0x160))(plVar4,&local_48);
  fVar6 = *(float *)(this + 0x84);
  lVar3 = (**(code **)(**(long **)(this + 0x7b8) + 0x168))();
  local_48 = 0;
  local_44 = fVar6 - *(float *)(lVar3 + 4);
                    /* try { // try from 00dbb310 to 00ebb313 has its CatchHandler @ 00dbb354 */
  setInnerContainerPosition(this,(Vec2 *)&local_48);
  plVar4 = *(long **)(this + 0x858);
  if (plVar4 != (long *)0x0) {
    local_48 = (**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
    local_44 = fVar5;
    (**(code **)(*plVar4 + 0x580))(plVar4,&local_48);
  }
  plVar4 = *(long **)(this + 0x860);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb310 with catch @ 00dbb354
                        */
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 00dbb368 to 00ebb3c3 has its CatchHandler @ 00dbb368
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbb368 with catch @ 00dbb368
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbb4e8 with catch @ 00dbb368
                        */
    local_48 = (**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
    local_44 = fVar5;
    (**(code **)(*plVar4 + 0x580))(plVar4,&local_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

