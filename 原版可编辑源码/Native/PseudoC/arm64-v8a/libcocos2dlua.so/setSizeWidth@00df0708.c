
/* cocos2d::ui::LayoutComponent::setSizeWidth(float) */

void __thiscall cocos2d::ui::LayoutComponent::setSizeWidth(LayoutComponent *this,float param_1)

{
  long lVar1;
  Size *pSVar2;
  long *plVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_60 [2];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x28) + 0x168))();
  Size::Size((Size *)local_60,pSVar2);
  local_60[0] = param_1;
  plVar3 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar3 == (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),local_60);
  }
  else {
    pfVar4 = (float *)(**(code **)(*plVar3 + 0x168))();
    if (*pfVar4 == 0.0) {
      *(undefined4 *)(this + 0x7c) = 0;
      if (this[0x80] != (LayoutComponent)0x0) {
        local_60[0] = 0.0;
      }
    }
    else {
      *(float *)(this + 0x7c) = local_60[0] / *pfVar4;
    }
                    /* try { // try from 00df07c8 to 00ef07cf has its CatchHandler @ 00df089c */
    (**(code **)(**(long **)(this + 0x28) + 0x160))(*(long **)(this + 0x28),local_60);
                    /* try { // try from 00df07d0 to 00ef08e3 has its CatchHandler @ 00df063c */
    plVar3 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (plVar3 != (long *)0x0) {
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
      pfVar5 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
      pfVar6 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      pfVar7 = (float *)(**(code **)(*plVar3 + 0x168))(plVar3);
      fVar8 = *pfVar5;
      fVar9 = *pfVar6;
      fVar10 = *pfVar4;
      *(float *)(this + 0x58) = fVar10 - fVar8 * fVar9;
      *(float *)(this + 0x5c) = *pfVar7 - (fVar10 + (1.0 - fVar8) * fVar9);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00df07c8 with catch @ 00df089c */
  __stack_chk_fail();
}

