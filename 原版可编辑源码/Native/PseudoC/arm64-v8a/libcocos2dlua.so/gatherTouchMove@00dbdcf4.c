
/* cocos2d::ui::ScrollView::gatherTouchMove(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::gatherTouchMove(ScrollView *this,Vec2 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(this + 0x7f0);
  while (4 < uVar4) {
    plVar1 = *(long **)(this + 0x7e8);
    lVar2 = *plVar1;
    *(long *)(lVar2 + 8) = plVar1[1];
    *(long *)plVar1[1] = lVar2;
    *(ulong *)(this + 0x7f0) = uVar4 - 1;
    operator_delete(plVar1);
    plVar1 = *(long **)(this + 0x800);
    lVar2 = *plVar1;
    *(long *)(lVar2 + 8) = plVar1[1];
    *(long *)plVar1[1] = lVar2;
    *(long *)(this + 0x808) = *(long *)(this + 0x808) + -1;
    operator_delete(plVar1);
    uVar4 = *(ulong *)(this + 0x7f0);
  }
  plVar1 = operator_new(0x18);
  lVar2 = *(long *)param_1;
  plVar1[1] = (long)(this + 0x7e0);
  plVar1[2] = lVar2;
  lVar2 = *(long *)(this + 0x7e0);
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  *(long **)(this + 0x7e0) = plVar1;
  *(ulong *)(this + 0x7f0) = uVar4 + 1;
  lVar2 = utils::getTimeInMilliseconds();
  lVar3 = *(long *)(this + 0x810);
  plVar1 = operator_new(0x18);
  *(float *)(plVar1 + 2) = (float)(lVar2 - lVar3) / 1000.0;
  lVar3 = *(long *)(this + 0x7f8);
  *plVar1 = lVar3;
  plVar1[1] = (long)(this + 0x7f8);
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(this + 0x7f8) = plVar1;
  *(long *)(this + 0x810) = lVar2;
  *(long *)(this + 0x808) = *(long *)(this + 0x808) + 1;
                    /* try { // try from 00dbddf8 to 00ebddff has its CatchHandler @ 00dbe254 */
  return;
}

