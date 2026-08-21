
/* cocos2d::ui::LayoutComponent::setPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::LayoutComponent::setPosition(LayoutComponent *this,Vec2 *param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_60;
  long local_58;
  
                    /* try { // try from 00defed8 to 00eefedf has its CatchHandler @ 00deff34 */
  lVar1 = tpidr_el0;
                    /* try { // try from 00defee0 to 00eeff4f has its CatchHandler @ 00defe9c */
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00defed8 with catch @ 00deff34 */
    (**(code **)(**(long **)(this + 0x28) + 0x98))(*(long **)(this + 0x28),param_1);
  }
  else {
    uVar11 = *(ulong *)param_1;
    local_60 = uVar11;
    pfVar3 = (float *)(**(code **)(*plVar2 + 0x168))();
    if (*pfVar3 == 0.0) {
      *(undefined4 *)(this + 0x6c) = 0;
      if ((this[0x68] != (LayoutComponent)0x0) || (*(int *)(this + 0x50) == 3)) {
        local_60 = local_60 & 0xffffffff00000000;
      }
    }
    else {
      *(float *)(this + 0x6c) = (float)uVar11 / *pfVar3;
    }
    if (pfVar3[1] == 0.0) {
      *(undefined4 *)(this + 0x74) = 0;
      if ((this[0x70] != (LayoutComponent)0x0) || (*(int *)(this + 0x54) == 3)) {
        local_60 = local_60 & 0xffffffff;
      }
    }
    else {
      *(float *)(this + 0x74) = (float)(uVar11 >> 0x20) / pfVar3[1];
    }
    (**(code **)(**(long **)(this + 0x28) + 0x98))(*(long **)(this + 0x28),&local_60);
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
                    /* catch() { ... } // from try @ 00df0008 with catch @ 00deffc8 */
    if (plVar2 != (long *)0x0) {
      pfVar3 = (float *)(**(code **)(**(long **)(this + 0x28) + 0xb0))();
      pfVar4 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
                    /* try { // try from 00df0000 to 00ef0007 has its CatchHandler @ 00df004c */
                    /* try { // try from 00df0008 to 00ef0067 has its CatchHandler @ 00deffc8 */
      pfVar5 = (float *)(**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      pfVar6 = (float *)(**(code **)(*plVar2 + 0x168))(plVar2);
      fVar12 = *pfVar4;
      fVar13 = *pfVar5;
      fVar14 = *pfVar3;
      *(float *)(this + 0x58) = fVar14 - fVar12 * fVar13;
                    /* catch() { ... } // from try @ 00df0000 with catch @ 00df004c */
      *(float *)(this + 0x5c) = *pfVar6 - (fVar14 + (1.0 - fVar12) * fVar13);
    }
    plVar2 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
                    /* catch() { ... } // from try @ 00df00a8 with catch @ 00df0068 */
    if (plVar2 != (long *)0x0) {
      lVar7 = (**(code **)(**(long **)(this + 0x28) + 0xb0))();
      lVar8 = (**(code **)(**(long **)(this + 0x28) + 0x150))(*(long **)(this + 0x28));
                    /* try { // try from 00df00a0 to 00ef00a7 has its CatchHandler @ 00df00f4 */
                    /* try { // try from 00df00a8 to 00ef010f has its CatchHandler @ 00df0068 */
      lVar9 = (**(code **)(**(long **)(this + 0x28) + 0x168))(*(long **)(this + 0x28));
      lVar10 = (**(code **)(*plVar2 + 0x168))(plVar2);
      fVar12 = *(float *)(lVar8 + 4);
      fVar13 = *(float *)(lVar9 + 4);
      fVar14 = *(float *)(lVar7 + 4);
      *(float *)(this + 0x60) = fVar14 - fVar12 * fVar13;
      *(float *)(this + 100) = *(float *)(lVar10 + 4) - (fVar14 + (1.0 - fVar12) * fVar13);
    }
  }
                    /* catch() { ... } // from try @ 00df00a0 with catch @ 00df00f4 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

