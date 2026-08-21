
/* cocos2d::renderer::ForwardRenderer::submitLightsUniforms() */

void __thiscall cocos2d::renderer::ForwardRenderer::submitLightsUniforms(ForwardRenderer *this)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar10 = *(long *)(this + 0xb8) - *(long *)(this + 0xb0);
  if (uVar10 != 0) {
    uVar4 = (long)(uVar10 * 0x20000000) >> 0x20;
    if (3 < (int)(uVar10 >> 3)) {
      uVar4 = 4;
    }
    pfVar7 = (float *)RecyclePool<float>::add(*(RecyclePool<float> **)(this + 0xf0));
    pfVar8 = (float *)RecyclePool<float>::add(*(RecyclePool<float> **)(this + 0xf0));
    pfVar9 = (float *)RecyclePool<float>::add(*(RecyclePool<float> **)(this + 0xf0));
    Vec3::Vec3((Vec3 *)&local_68);
    Vec3::Vec3((Vec3 *)&local_78);
    Vec3::Vec3((Vec3 *)&local_88);
    if (uVar4 != 0) {
                    /* try { // try from 009cb3a8 to 00acb3af has its CatchHandler @ 009cb588 */
      plVar11 = *(long **)(this + 0xb0);
      uVar10 = 0;
      uVar12 = uVar4;
      do {
        lVar13 = *plVar11;
        uVar6 = uVar10 & 0xfffffffc;
        pfVar1 = pfVar7 + uVar6;
        uVar14 = *(undefined8 *)(lVar13 + 0x2c);
        local_60 = *(float *)(lVar13 + 0x34);
        *pfVar1 = (float)uVar14;
        local_68._4_4_ = (float)((ulong)uVar14 >> 0x20);
        pfVar1[1] = local_68._4_4_;
        pfVar1[2] = local_60;
        uVar15 = *(undefined8 *)(lVar13 + 0x44);
        pfVar2 = pfVar8 + uVar6;
        pfVar3 = pfVar9 + uVar6;
        local_70 = *(float *)(lVar13 + 0x4c);
        *pfVar2 = (float)uVar15;
        local_78._4_4_ = (float)((ulong)uVar15 >> 0x20);
        pfVar2[1] = local_78._4_4_;
        pfVar2[2] = local_70;
        uVar16 = *(undefined8 *)(lVar13 + 0x38);
        local_80 = *(float *)(lVar13 + 0x40);
                    /* try { // try from 009cb420 to 00acb42b has its CatchHandler @ 009cb578 */
        *pfVar3 = (float)uVar16;
        local_88._4_4_ = (float)((ulong)uVar16 >> 0x20);
        pfVar3[1] = local_88._4_4_;
        pfVar3[2] = local_80;
        pfVar3[3] = *(float *)(lVar13 + 0x20);
        if (*(int *)(lVar13 + 0xc) == 2) {
          pfVar1[3] = *(float *)(lVar13 + 0x50);
          pfVar2[3] = *(float *)(lVar13 + 0x28);
        }
        else {
          pfVar1[3] = 0.0;
          pfVar2[3] = 0.0;
        }
        uVar10 = uVar10 + 4;
        uVar12 = uVar12 - 1;
        plVar11 = plVar11 + 1;
        local_88 = uVar16;
        local_78 = uVar15;
        local_68 = uVar14;
      } while (uVar12 != 0);
    }
    uVar10 = uVar4 << 2;
    DeviceGraphics::setUniformfv
              (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_lightDirection,uVar10,pfVar7,uVar4
              );
    DeviceGraphics::setUniformfv
              (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_lightColor,uVar10,pfVar8,uVar4);
    DeviceGraphics::setUniformfv
              (*(DeviceGraphics **)(this + 0x10),BaseRenderer::cc_lightPositionAndRange,uVar10,
               pfVar9,uVar4);
                    /* try { // try from 009cb4dc to 00acb4f7 has its CatchHandler @ 009cb5d8 */
    Vec3::~Vec3((Vec3 *)&local_88);
    Vec3::~Vec3((Vec3 *)&local_78);
    Vec3::~Vec3((Vec3 *)&local_68);
  }
                    /* try { // try from 009cb4f8 to 00acb62f has its CatchHandler @ 009cb15c */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

