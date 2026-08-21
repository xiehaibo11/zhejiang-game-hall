
/* cocos2d::PUParticle3DQuadRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PUParticle3DQuadRender::render
          (PUParticle3DQuadRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  PUParticle3DQuadRender *pPVar1;
  MeshCommand *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Ref *pRVar9;
  long *plVar10;
  BlendFunc *pBVar11;
  ushort uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  void *pvVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  void *pvVar20;
  ushort uVar21;
  StateBlock *pSVar22;
  GLProgramState *pGVar23;
  uint uVar24;
  vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
  *this_01;
  ushort uVar25;
  ParticleSystem3D *pPVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_1a0;
  float fStack_19c;
  undefined8 local_198;
  float local_190;
  ulong local_188;
  float local_180;
  void *local_178;
  undefined8 local_170;
  float local_168;
  ulong local_160;
  float local_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  float local_138;
  Mat4 aMStack_130 [64];
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  if ((this[0x38] != (PUParticle3DQuadRender)0x0) && (*(long *)(param_3 + 0x348) != 0)) {
    if (*(long *)(this + 0x90) == 0) {
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      pRVar9 = (Ref *)VertexBuffer::create(0x24,iVar5 << 2,0x88e4,1);
      *(Ref **)(this + 0x90) = pRVar9;
      if (pRVar9 == (Ref *)0x0) goto LAB_00e55b54;
      Ref::retain(pRVar9);
      lVar13 = *(long *)(this + 0x88);
    }
    else {
      lVar13 = *(long *)(this + 0x88);
    }
    if (lVar13 == 0) {
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      pRVar9 = (Ref *)IndexBuffer::create(0,iVar5 * 6,0x88e4,1);
      *(Ref **)(this + 0x88) = pRVar9;
      if (pRVar9 == (Ref *)0x0) goto LAB_00e55b54;
      Ref::retain(pRVar9);
    }
    this_01 = (vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
               *)(this + 0x98);
    lVar13 = *(long *)(this + 0xa0) - *(long *)this_01 >> 2;
    uVar17 = *(long *)(param_3 + 0x348) * 4 + lVar13 * 0x71c71c71c71c71c7;
    if ((ulong)(lVar13 * -0x71c71c71c71c71c7) <= (ulong)(*(long *)(param_3 + 0x348) * 4) &&
        uVar17 != 0) {
      std::__ndk1::
      vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
      ::__append(this_01,uVar17);
      lVar13 = *(long *)(this + 0xb0);
      uVar17 = *(long *)(param_3 + 0x348) * 6;
      uVar19 = *(long *)(this + 0xb8) - lVar13 >> 1;
      if (uVar17 < uVar19 || uVar17 - uVar19 == 0) {
        if (uVar17 < uVar19) {
          *(long *)(this + 0xb8) = lVar13 + *(long *)(param_3 + 0x348) * 0xc;
        }
      }
      else {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0xb0),
                   uVar17 - uVar19);
      }
    }
    plVar10 = (long *)Camera::getVisitingCamera();
    (**(code **)(*plVar10 + 0x430))(&local_f0);
    Vec3::Vec3((Vec3 *)&local_140,local_f0,fStack_ec,local_e8);
    Vec3::Vec3((Vec3 *)&local_150,local_e0,fStack_dc,local_d8);
    Vec3::Vec3((Vec3 *)&local_160,local_d0,fStack_cc,local_c8);
    Mat4::Mat4(aMStack_130);
    Vec3::Vec3((Vec3 *)&local_170);
    uVar24 = *(int *)(this + 0xe4) - 1;
    if (uVar24 < 8) {
      uVar17 = -(ulong)(uVar24 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar24 << 2;
      fVar27 = *(float *)(&DAT_01425f10 + uVar17);
      fVar28 = *(float *)(&DAT_01425f30 + uVar17);
    }
    else {
      fVar28 = 1.0;
      fVar27 = -1.0;
    }
    if (*(int *)(this + 0xe0) == 1) {
      local_148 = *(float *)(this + 0xf4);
      local_150 = *(undefined8 *)(this + 0xec);
      Vec3::normalize((Vec3 *)&local_150);
      Vec3::cross((Vec3 *)&local_150,(Vec3 *)&local_160,(Vec3 *)&local_140);
      Vec3::normalize((Vec3 *)&local_140);
    }
    else if (*(int *)(this + 0xe0) == 4) {
      local_148 = *(float *)(this + 0x100);
      local_150 = *(undefined8 *)(this + 0xf8);
      Vec3::normalize((Vec3 *)&local_150);
      Vec3::cross((Vec3 *)&local_150,(Vec3 *)(this + 0xec),(Vec3 *)&local_140);
      Vec3::normalize((Vec3 *)&local_140);
      local_158 = *(float *)(this + 0xf4);
      local_160 = *(ulong *)(this + 0xec);
    }
    pPVar26 = *(ParticleSystem3D **)(param_3 + 0x340);
    if (param_3 + 0x338 == pPVar26) {
      uVar24 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      uVar24 = 0;
      pPVar1 = this + 0x98;
      do {
        uVar25 = *(ushort *)(this + 0x106);
        lVar13 = *(long *)(pPVar26 + 0x10);
        if ((uVar25 != 1) || (*(ushort *)(this + 0x104) != 1)) {
          fVar29 = *(float *)(this + 0x10c);
          fVar31 = *(float *)(this + 0x108);
          uVar7 = 0;
          if (uVar25 != 0) {
            uVar7 = (uint)*(ushort *)(lVar13 + 0x144) / (uint)uVar25;
          }
          fVar34 = fVar29 * (float)((uint)*(ushort *)(lVar13 + 0x144) - uVar7 * uVar25 & 0xffff);
          fVar36 = fVar31 * (float)((uint)*(ushort *)(this + 0x104) + ~uVar7 & 0xffff);
          *(float *)(lVar13 + 0x34) = fVar34;
          *(float *)(lVar13 + 0x38) = fVar36;
          *(float *)(lVar13 + 0x3c) = fVar29 + fVar34;
          *(float *)(lVar13 + 0x40) = fVar31 + fVar36;
        }
        iVar5 = *(int *)(this + 0xe0);
        if (iVar5 == 5) {
          local_180 = *(float *)(lVar13 + 0xb4);
          local_188 = *(ulong *)(lVar13 + 0xac);
                    /* try { // try from 00e55664 to 00f55673 has its CatchHandler @ 00e55710 */
          Vec3::normalize((Vec3 *)&local_188);
          Vec3::cross((Vec3 *)(this + 0xf8),(Vec3 *)&local_188,(Vec3 *)&local_140);
          Vec3::normalize((Vec3 *)&local_140);
                    /* try { // try from 00e55694 to 00f5569b has its CatchHandler @ 00e556fc */
          Vec3::cross((Vec3 *)&local_188,(Vec3 *)&local_140,(Vec3 *)&local_150);
          Vec3::normalize((Vec3 *)&local_150);
                    /* try { // try from 00e556a8 to 00f556b3 has its CatchHandler @ 00e556f8 */
          local_160 = local_188;
          local_158 = local_180;
        }
        else {
                    /* catch() { ... } // from try @ 00e554f0 with catch @ 00e555d8 */
          if (iVar5 == 3) {
            local_150 = *(undefined8 *)(lVar13 + 0x14);
            local_148 = *(float *)(lVar13 + 0x1c);
            Vec3::normalize((Vec3 *)&local_150);
                    /* try { // try from 00e5564c to 00f5565b has its CatchHandler @ 00e55730 */
            Vec3::cross((Vec3 *)&local_150,(Vec3 *)&local_160,(Vec3 *)&local_140);
            Vec3::normalize((Vec3 *)&local_140);
          }
          else if (iVar5 == 2) {
            local_180 = *(float *)(lVar13 + 0xb4);
            local_188 = *(ulong *)(lVar13 + 0xac);
            local_148 = *(float *)(lVar13 + 0xb4);
            local_150 = *(undefined8 *)(lVar13 + 0xac);
                    /* try { // try from 00e555fc to 00f5564b has its CatchHandler @ 00e555fc
                       catch() { ... } // from try @ 00e555fc with catch @ 00e555fc
                       catch() { ... } // from try @ 00e556b4 with catch @ 00e555fc */
            Vec3::normalize((Vec3 *)&local_150);
            Vec3::cross((Vec3 *)&local_188,(Vec3 *)&local_160,(Vec3 *)&local_140);
            Vec3::normalize((Vec3 *)&local_140);
          }
        }
                    /* try { // try from 00e556b4 to 00f55753 has its CatchHandler @ 00e555fc */
        local_170 = *(undefined8 *)(lVar13 + 8);
        local_168 = *(float *)(lVar13 + 0x10);
        fVar29 = *(float *)(lVar13 + 0x44) * 0.5;
        fVar31 = *(float *)(lVar13 + 0x48) * 0.5;
        fVar34 = (float)local_140 * fVar29;
        fVar36 = (float)((ulong)local_140 >> 0x20) * fVar29;
        fVar29 = fVar29 * local_138;
        fVar42 = (float)local_150 * fVar31;
        fVar43 = (float)((ulong)local_150 >> 0x20) * fVar31;
        fVar31 = fVar31 * local_148;
                    /* catch() { ... } // from try @ 00e556a8 with catch @ 00e556f8 */
                    /* catch() { ... } // from try @ 00e55694 with catch @ 00e556fc */
                    /* catch() { ... } // from try @ 00e55664 with catch @ 00e55710 */
        fVar39 = fVar28 * fVar34 + fVar27 * fVar42;
        fVar40 = fVar28 * fVar36 + fVar27 * fVar43;
        fVar41 = fVar28 * fVar29 + fVar27 * fVar31;
                    /* catch() { ... } // from try @ 00e5564c with catch @ 00e55730 */
        if (*(int *)(this + 0xe8) == 0) {
          sincosf(*(float *)(lVar13 + 0x14c),&fStack_19c,&local_1a0);
          uVar7 = uVar6 & 0xfffc;
          fVar44 = (float)local_170;
          fVar45 = (float)((ulong)local_170 >> 0x20);
          puVar14 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar7 * 0x24);
          fVar33 = *(float *)(lVar13 + 0x34);
          fVar35 = *(float *)(lVar13 + 0x38);
          fVar37 = *(float *)(lVar13 + 0x3c);
          fVar38 = *(float *)(lVar13 + 0x40);
          *puVar14 = CONCAT44((-fVar36 - fVar43) + fVar40 + fVar45,
                              (-fVar34 - fVar42) + fVar39 + fVar44);
          *(float *)(puVar14 + 1) = (-fVar29 - fVar31) + fVar41 + local_168;
          uVar30 = *(undefined8 *)(lVar13 + 0x24);
          lVar15 = *(long *)pPVar1 + (ulong)uVar7 * 0x24;
          *(undefined8 *)(lVar15 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + 0x14) = uVar30;
          fVar37 = (fVar33 + fVar37) * 0.5;
          fVar38 = (fVar35 + fVar38) * 0.5;
          fVar33 = fVar33 - fVar37;
          fVar35 = fVar35 - fVar38;
          lVar15 = *(long *)pPVar1 + (ulong)uVar7 * 0x24;
          *(float *)(lVar15 + 0xc) = fVar37 + local_1a0 * fVar33 + fVar35 * fStack_19c;
          *(float *)(lVar15 + 0x10) = fVar38 + (local_1a0 * fVar35 - fVar33 * fStack_19c);
          lVar15 = *(long *)pPVar1;
          uVar25 = (ushort)(uVar6 | 1);
          lVar18 = (((ulong)(uVar6 | 1) & 0xffff) + (ulong)uVar25 * 8) * 4;
          fVar33 = *(float *)(lVar13 + 0x38);
          fVar35 = *(float *)(lVar13 + 0x3c);
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44((fVar36 - fVar43) + fVar40 + fVar45,(fVar34 - fVar42) + fVar39 + fVar44);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = (fVar29 - fVar31) + fVar41 + local_168;
          lVar15 = *(long *)pPVar1;
          uVar30 = *(undefined8 *)(lVar13 + 0x24);
          fVar35 = fVar35 - fVar37;
          fVar33 = fVar33 - fVar38;
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          lVar15 = *(long *)pPVar1;
          *(float *)(lVar15 + lVar18 + 0xc) = fVar37 + local_1a0 * fVar35 + fVar33 * fStack_19c;
          *(float *)(lVar15 + lVar18 + 0x10) = fVar38 + (local_1a0 * fVar33 - fVar35 * fStack_19c);
          lVar15 = *(long *)pPVar1;
          uVar21 = (ushort)(uVar6 | 2);
          lVar18 = (((ulong)(uVar6 | 2) & 0xffff) + (ulong)uVar21 * 8) * 4;
          fVar33 = *(float *)(lVar13 + 0x34);
          fVar35 = *(float *)(lVar13 + 0x40);
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44((fVar43 - fVar36) + fVar40 + fVar45,(fVar42 - fVar34) + fVar39 + fVar44);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = (fVar31 - fVar29) + fVar41 + local_168;
          lVar15 = *(long *)pPVar1;
          uVar30 = *(undefined8 *)(lVar13 + 0x24);
          fVar33 = fVar33 - fVar37;
          fVar35 = fVar35 - fVar38;
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          lVar15 = *(long *)pPVar1;
          *(float *)(lVar15 + lVar18 + 0xc) = fVar37 + local_1a0 * fVar33 + fVar35 * fStack_19c;
          *(float *)(lVar15 + lVar18 + 0x10) = fVar38 + (local_1a0 * fVar35 - fVar33 * fStack_19c);
          lVar15 = *(long *)pPVar1;
          uVar12 = (ushort)(uVar6 | 3);
          fVar33 = *(float *)(lVar13 + 0x3c);
          fVar35 = *(float *)(lVar13 + 0x40);
                    /* try { // try from 00e554b0 to 00f554ef has its CatchHandler @ 00e554b0
                       catch() { ... } // from try @ 00e554b0 with catch @ 00e554b0
                       catch() { ... } // from try @ 00e554fc with catch @ 00e554b0 */
          lVar18 = (((ulong)(uVar6 | 3) & 0xffff) + (ulong)uVar12 * 8) * 4;
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44(fVar36 + fVar43 + fVar40 + fVar45,fVar34 + fVar42 + fVar39 + fVar44);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = fVar29 + fVar31 + fVar41 + local_168;
          fVar33 = fVar33 - fVar37;
          fVar35 = fVar35 - fVar38;
          lVar15 = *(long *)pPVar1;
          uVar30 = *(undefined8 *)(lVar13 + 0x24);
                    /* try { // try from 00e554f0 to 00f554fb has its CatchHandler @ 00e555d8 */
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          lVar13 = *(long *)pPVar1;
                    /* try { // try from 00e554fc to 00f555f3 has its CatchHandler @ 00e554b0 */
          *(float *)(lVar13 + lVar18 + 0xc) = fVar37 + local_1a0 * fVar33 + fVar35 * fStack_19c;
          *(float *)(lVar13 + lVar18 + 0x10) = fVar38 + (local_1a0 * fVar35 - fVar33 * fStack_19c);
        }
        else {
          Mat4::createRotation((Vec3 *)&local_160,-*(float *)(lVar13 + 0x14c),aMStack_130);
          local_198 = CONCAT44((-fVar36 - fVar43) + fVar40,(-fVar34 - fVar42) + fVar39);
          local_190 = (-fVar29 - fVar31) + fVar41;
          Vec3::Vec3((Vec3 *)&local_188);
          Mat4::transformVector(aMStack_130,(Vec3 *)&local_198,(Vec3 *)&local_188);
          uVar7 = uVar6 & 0xfffc;
          puVar14 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar7 * 0x24);
          *puVar14 = CONCAT44((float)(local_188 >> 0x20) + (float)((ulong)local_170 >> 0x20),
                              (float)local_188 + (float)local_170);
          *(float *)(puVar14 + 1) = local_180 + local_168;
          uVar30 = *(undefined8 *)(lVar13 + 0x24);
          local_190 = (fVar29 - fVar31) + fVar41;
          lVar15 = *(long *)pPVar1 + (ulong)uVar7 * 0x24;
          *(undefined8 *)(lVar15 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + 0x14) = uVar30;
          local_198 = CONCAT44((fVar36 - fVar43) + fVar40,(fVar34 - fVar42) + fVar39);
          *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar7 * 0x24 + 0xc) =
               *(undefined8 *)(lVar13 + 0x34);
          Vec3::Vec3((Vec3 *)&local_188);
          Mat4::transformVector(aMStack_130,(Vec3 *)&local_198,(Vec3 *)&local_188);
          lVar15 = *(long *)pPVar1;
          uVar25 = (ushort)(uVar6 | 1);
          lVar18 = (((ulong)(uVar6 | 1) & 0xffff) + (ulong)uVar25 * 8) * 4;
          uVar32 = *(undefined8 *)(lVar13 + 0x38);
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44((float)(local_188 >> 0x20) + (float)((ulong)local_170 >> 0x20),
                        (float)local_188 + (float)local_170);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = local_180 + local_168;
          puVar14 = (undefined8 *)(lVar13 + 0x24);
          lVar15 = *(long *)pPVar1;
          uVar30 = *puVar14;
          local_190 = (fVar31 - fVar29) + fVar41;
          uVar32 = NEON_rev64(uVar32,4);
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          local_198 = CONCAT44((fVar43 - fVar36) + fVar40,(fVar42 - fVar34) + fVar39);
          *(undefined8 *)(*(long *)pPVar1 + lVar18 + 0xc) = uVar32;
          Vec3::Vec3((Vec3 *)&local_188);
          Mat4::transformVector(aMStack_130,(Vec3 *)&local_198,(Vec3 *)&local_188);
          lVar15 = *(long *)pPVar1;
          uVar21 = (ushort)(uVar6 | 2);
          lVar18 = (((ulong)(uVar6 | 2) & 0xffff) + (ulong)uVar21 * 8) * 4;
          uVar2 = *(undefined4 *)(lVar13 + 0x34);
          uVar3 = *(undefined4 *)(lVar13 + 0x40);
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44((float)(local_188 >> 0x20) + (float)((ulong)local_170 >> 0x20),
                        (float)local_188 + (float)local_170);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = local_180 + local_168;
          lVar15 = *(long *)pPVar1;
          uVar30 = *puVar14;
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          lVar15 = *(long *)pPVar1;
          local_190 = fVar29 + fVar31 + fVar41;
          local_198 = CONCAT44(fVar36 + fVar43 + fVar40,fVar34 + fVar42 + fVar39);
          *(undefined4 *)(lVar15 + lVar18 + 0xc) = uVar2;
          *(undefined4 *)(lVar15 + lVar18 + 0x10) = uVar3;
          Vec3::Vec3((Vec3 *)&local_188);
          Mat4::transformVector(aMStack_130,(Vec3 *)&local_198,(Vec3 *)&local_188);
          lVar15 = *(long *)pPVar1;
          uVar12 = (ushort)(uVar6 | 3);
          lVar18 = (((ulong)(uVar6 | 3) & 0xffff) + (ulong)uVar12 * 8) * 4;
          *(undefined8 *)(lVar15 + lVar18) =
               CONCAT44((float)(local_188 >> 0x20) + (float)((ulong)local_170 >> 0x20),
                        (float)local_188 + (float)local_170);
          *(float *)((undefined8 *)(lVar15 + lVar18) + 1) = local_180 + local_168;
          lVar15 = *(long *)pPVar1;
          uVar30 = *puVar14;
          *(undefined8 *)(lVar15 + lVar18 + 0x1c) = *(undefined8 *)(lVar13 + 0x2c);
          *(undefined8 *)(lVar15 + lVar18 + 0x14) = uVar30;
          *(undefined8 *)(*(long *)pPVar1 + lVar18 + 0xc) = *(undefined8 *)(lVar13 + 0x3c);
        }
        lVar13 = *(long *)(this + 0xb0);
        uVar7 = uVar24 & 0xfffe;
        *(short *)(lVar13 + (ulong)uVar7 * 2) = (short)uVar6;
        *(ushort *)(lVar13 + (ulong)(uVar7 | 1) * 2) = uVar25;
        uVar8 = uVar24 + 3 & 0xffff;
        *(ushort *)(lVar13 + (ulong)(uVar7 + 2) * 2) = uVar12;
        *(short *)(lVar13 + ((ulong)(uVar24 + 3) & 0xffff) * 2) = (short)uVar6;
        *(ushort *)(lVar13 + (ulong)(uVar8 + 1) * 2) = uVar12;
        *(ushort *)(lVar13 + (ulong)(uVar8 + 2) * 2) = uVar21;
        pPVar26 = *(ParticleSystem3D **)(pPVar26 + 8);
        uVar24 = uVar24 + 6;
        uVar6 = uVar6 + 4;
      } while (param_3 + 0x338 != pPVar26);
    }
    pvVar20 = (void *)(*(long *)(this + 0x98) + (ulong)uVar6 * 0x24);
    if (pvVar20 != *(void **)(this + 0xa0)) {
      for (pvVar16 = *(void **)(this + 0xa0); pvVar16 != pvVar20;
          pvVar16 = (void *)((long)pvVar16 + -0x24)) {
        Vec4::~Vec4((Vec4 *)((long)pvVar16 + -0x10));
      }
      *(void **)(this + 0xa0) = pvVar20;
    }
    lVar13 = *(long *)(this + 0xb0) + (ulong)uVar24 * 2;
    if (lVar13 != *(long *)(this + 0xb8)) {
      pvVar20 = *(void **)(this + 0xa0);
      *(long *)(this + 0xb8) = lVar13;
    }
    if ((*(void **)this_01 != pvVar20) && (*(long *)(this + 0xb0) != lVar13)) {
      VertexBuffer::updateVertices(*(VertexBuffer **)(this + 0x90),*(void **)this_01,uVar6,0,0);
      IndexBuffer::updateIndices(*(IndexBuffer **)(this + 0x88),*(void **)(this + 0xb0),uVar24,0,0);
      pSVar22 = *(StateBlock **)(this + 0x70);
      pBVar11 = (BlendFunc *)(**(code **)(*(long *)param_3 + 0x538))(param_3);
      RenderState::StateBlock::setBlendFunc(pSVar22,pBVar11);
      if (*(Texture2D **)(this + 0x78) == (Texture2D *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = Texture2D::getName(*(Texture2D **)(this + 0x78));
      }
      pGVar23 = *(GLProgramState **)(this + 0x80);
      this_00 = *(MeshCommand **)(this + 0x68);
      pSVar22 = *(StateBlock **)(this + 0x70);
      uVar7 = VertexBuffer::getVBO(*(VertexBuffer **)(this + 0x90),0);
      uVar8 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x88),0);
      MeshCommand::init(this_00,0.0,uVar6,pGVar23,pSVar22,uVar7,uVar8,4,0x1403,(ulong)uVar24,param_2
                        ,8);
      *(undefined2 *)(*(long *)(this + 0x68) + 0x10) = 0x101;
      pGVar23 = *(GLProgramState **)(this + 0x80);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_188,"u_color");
      Vec4::Vec4((Vec4 *)&local_198,1.0,1.0,1.0,1.0);
      GLProgramState::setUniformVec4(pGVar23,(basic_string *)&local_188,(Vec4 *)&local_198);
      Vec4::~Vec4((Vec4 *)&local_198);
      if ((local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      Renderer::addCommand(param_1,*(RenderCommand **)(this + 0x68));
    }
    Mat4::~Mat4(aMStack_130);
    Mat4::~Mat4((Mat4 *)&local_f0);
  }
LAB_00e55b54:
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

