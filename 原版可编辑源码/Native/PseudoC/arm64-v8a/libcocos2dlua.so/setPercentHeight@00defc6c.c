
/* cocos2d::ui::LayoutComponent::setPercentHeight(float) */

void __thiscall cocos2d::ui::LayoutComponent::setPercentHeight(LayoutComponent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Size aSStack_50 [4];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x84) = param_1;
  if ((this[0x88] != (LayoutComponent)0x0) &&
     (plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))(), plVar2 != (long *)0x0)) {
                    /* catch() { ... } // from try @ 00defc60 with catch @ 00defcb4 */
    pSVar3 = (Size *)(**(code **)(**(long **)(this + 0x28) + 0x168))();
                    /* catch() { ... } // from try @ 00defd14 with catch @ 00defcd0 */
    Size::Size(aSStack_50,pSVar3);
    lVar4 = (**(code **)(*plVar2 + 0x168))(plVar2);
    local_4c = *(float *)(lVar4 + 4) * *(float *)(this + 0x84);
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),aSStack_50);
                    /* try { // try from 00defd0c to 00eefd13 has its CatchHandler @ 00defd68 */
                    /* try { // try from 00defd14 to 00eefd83 has its CatchHandler @ 00defcd0 */
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar2 != (long *)0x0) {
      lVar4 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
      lVar5 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      lVar6 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
                    /* catch() { ... } // from try @ 00defd0c with catch @ 00defd68 */
      lVar7 = (**(code **)(*plVar2 + 0x168))(plVar2);
      fVar8 = *(float *)(lVar5 + 4);
      fVar9 = *(float *)(lVar6 + 4);
      fVar10 = *(float *)(lVar4 + 4);
      *(float *)(this + 0x60) = fVar10 - fVar8 * fVar9;
      *(float *)(this + 100) = *(float *)(lVar7 + 4) - (fVar10 + (1.0 - fVar8) * fVar9);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

