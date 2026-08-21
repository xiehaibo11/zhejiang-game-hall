
/* cocos2d::renderer::ForwardRenderer::submitOtherStagesUniforms() */

void __thiscall cocos2d::renderer::ForwardRenderer::submitOtherStagesUniforms(ForwardRenderer *this)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  Light *this_00;
  long lVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
                    /* try { // try from 009cb770 to 00acb77b has its CatchHandler @ 009cbb58 */
  lVar7 = *(long *)(this + 200);
  lVar6 = *(long *)(this + 0xd0);
                    /* try { // try from 009cb77c to 00acb787 has its CatchHandler @ 009cbb54 */
  pfVar4 = (float *)RecyclePool<float>::add(*(RecyclePool<float> **)(this + 0xf0));
                    /* try { // try from 009cb788 to 00acb84f has its CatchHandler @ 009cbb6c */
                    /* try { // try from 009cb888 to 00acb88f has its CatchHandler @ 009cbb2c */
  if (((DAT_01d38200 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_01d38200), iVar3 != 0)) {
    DAT_01d381f8 = operator_new__(0x100);
    __cxa_guard_release(&DAT_01d38200);
  }
  lVar6 = lVar6 - lVar7;
  uVar5 = lVar6 >> 3;
  if (lVar6 != 0) {
    lVar7 = 0;
    iVar3 = 0;
    uVar8 = 0;
    do {
      this_00 = *(Light **)(*(long *)(this + 200) + uVar8 * 8);
      puVar2 = (undefined8 *)((long)DAT_01d381f8 + lVar7);
      uVar10 = *(undefined8 *)(this_00 + 0xbc);
      uVar12 = *(undefined8 *)(this_00 + 0xd4);
      uVar11 = *(undefined8 *)(this_00 + 0xcc);
      uVar14 = *(undefined8 *)(this_00 + 0xa4);
      uVar13 = *(undefined8 *)(this_00 + 0x9c);
      uVar16 = *(undefined8 *)(this_00 + 0xb4);
      uVar15 = *(undefined8 *)(this_00 + 0xac);
      puVar2[5] = *(undefined8 *)(this_00 + 0xc4);
      puVar2[4] = uVar10;
      puVar2[7] = uVar12;
      puVar2[6] = uVar11;
      puVar2[1] = uVar14;
      *puVar2 = uVar13;
      puVar2[3] = uVar16;
      puVar2[2] = uVar15;
      fVar9 = (float)Light::getShadowMinDepth(this_00);
      pfVar1 = pfVar4 + iVar3;
      *pfVar1 = fVar9;
      fVar9 = (float)Light::getShadowMaxDepth(this_00);
      pfVar1[1] = fVar9;
      uVar8 = uVar8 + 1;
      iVar3 = iVar3 + 4;
      fVar9 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0x80));
      pfVar1[2] = fVar9;
      lVar7 = lVar7 + 0x40;
      pfVar1[3] = *(float *)(this_00 + 0x88);
    } while (uVar8 < uVar5);
  }
  DeviceGraphics::setUniformfv
            (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_shadow_lightViewProjMatrix,lVar6 * 2
             ,DAT_01d381f8,uVar5);
                    /* try { // try from 009cb850 to 00acb863 has its CatchHandler @ 009cbb44 */
  DeviceGraphics::setUniformfv
            (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_shadow_info,lVar6 >> 1,pfVar4,uVar5)
  ;
  return;
}

