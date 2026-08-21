
/* cocos2d::ui::LayoutComponent::setPercentWidth(float) */

void __thiscall cocos2d::ui::LayoutComponent::setPercentWidth(LayoutComponent *this,float param_1)

{
  long lVar1;
  long *plVar2;
  Size *pSVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_50 [2];
  long local_48;
  
                    /* catch() { ... } // from try @ 00defab4 with catch @ 00defb10 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x7c) = param_1;
  if ((this[0x80] != (LayoutComponent)0x0) &&
     (plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))(), plVar2 != (long *)0x0)) {
    pSVar3 = (Size *)(**(code **)(**(long **)(this + 0x28) + 0x168))();
    Size::Size((Size *)local_50,pSVar3);
    pfVar4 = (float *)(**(code **)(*plVar2 + 0x168))(plVar2);
    local_50[0] = *pfVar4 * *(float *)(this + 0x7c);
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),local_50);
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar2 != (long *)0x0) {
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
      pfVar5 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      pfVar6 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      pfVar7 = (float *)(**(code **)(*plVar2 + 0x168))(plVar2);
      fVar8 = *pfVar5;
      fVar9 = *pfVar6;
      fVar10 = *pfVar4;
                    /* catch() { ... } // from try @ 00defc68 with catch @ 00defc24 */
      *(float *)(this + 0x58) = fVar10 - fVar8 * fVar9;
      *(float *)(this + 0x5c) = *pfVar7 - (fVar10 + (1.0 - fVar8) * fVar9);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00defc60 to 00eefc67 has its CatchHandler @ 00defcb4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00defc68 to 00eefccf has its CatchHandler @ 00defc24 */
  __stack_chk_fail();
}

