
/* cocos2d::Particle3DQuadRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::Particle3DQuadRender::render
          (Particle3DQuadRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  short *psVar1;
  undefined4 uVar2;
  long lVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Ref *pRVar9;
  long ******pppppplVar10;
  long *plVar11;
  long lVar12;
  long *****ppppplVar13;
  long lVar14;
  long ******pppppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  vector<cocos2d::Particle3DQuadRender::posuvcolor,std::__ndk1::allocator<cocos2d::Particle3DQuadRender::posuvcolor>>
  *this_00;
  ParticleSystem3D *pPVar20;
  GLProgramState *pGVar21;
  MeshCommand *this_01;
  StateBlock *pSVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  Vec4 aVStack_1f0 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_1e0 [16];
  void *local_1d0;
  long ***local_1c8;
  float local_1c0;
  Vec3 aVStack_1b8 [16];
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  long *****local_188;
  long *****local_180;
  long local_178;
  Mat4 aMStack_170 [64];
  Mat4 aMStack_130 [8];
  float local_128;
  float local_118;
  float local_108;
  float local_f8;
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
  
                    /* try { // try from 00e5e80c to 00f5e81f has its CatchHandler @ 00e5e8f4 */
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00e5e820 to 00f5e897 has its CatchHandler @ 00e5e7cc */
  if ((this[0x38] != (Particle3DQuadRender)0x0) && (*(long *)(param_3 + 0x348) != 0)) {
    if (*(long *)(this + 0x70) == 0) {
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      pRVar9 = (Ref *)VertexBuffer::create(0x24,iVar5 << 2,0x88e4,1);
      *(Ref **)(this + 0x70) = pRVar9;
      if (pRVar9 == (Ref *)0x0) goto LAB_00e5eda0;
      Ref::retain(pRVar9);
      lVar12 = *(long *)(this + 0x68);
    }
    else {
      lVar12 = *(long *)(this + 0x68);
    }
    if (lVar12 == 0) {
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
                    /* try { // try from 00e5e898 to 00f5e89b has its CatchHandler @ 00e5e8f0 */
                    /* try { // try from 00e5e89c to 00f5e907 has its CatchHandler @ 00e5e7cc */
      pRVar9 = (Ref *)IndexBuffer::create(0,iVar5 * 6,0x88e4,1);
      *(Ref **)(this + 0x68) = pRVar9;
      if (pRVar9 == (Ref *)0x0) goto LAB_00e5eda0;
      Ref::retain(pRVar9);
    }
    local_178 = 0;
    pppppplVar15 = &local_188;
    local_180 = (long *****)&local_188;
    lVar12 = local_178;
    for (pPVar20 = *(ParticleSystem3D **)(param_3 + 0x340); local_188 = (long *****)pppppplVar15,
        local_178 = lVar12, param_3 + 0x338 != pPVar20;
        pPVar20 = *(ParticleSystem3D **)(pPVar20 + 8)) {
      pppppplVar10 = operator_new(0x18);
      ppppplVar13 = *(long ******)(pPVar20 + 0x10);
      lVar12 = lVar12 + 1;
      *pppppplVar10 = (long *****)pppppplVar15;
      pppppplVar10[1] = (long *****)&local_188;
      pppppplVar10[2] = ppppplVar13;
                    /* catch() { ... } // from try @ 00e5e898 with catch @ 00e5e8f0 */
      pppppplVar15[1] = (long *****)pppppplVar10;
                    /* catch() { ... } // from try @ 00e5e80c with catch @ 00e5e8f4 */
      pppppplVar15 = pppppplVar10;
    }
    this_00 = (vector<cocos2d::Particle3DQuadRender::posuvcolor,std::__ndk1::allocator<cocos2d::Particle3DQuadRender::posuvcolor>>
               *)(this + 0x78);
    lVar14 = *(long *)(this + 0x80) - *(long *)this_00 >> 2;
    uVar16 = lVar12 * 4 + lVar14 * 0x71c71c71c71c71c7;
    if ((ulong)(lVar14 * -0x71c71c71c71c71c7) <= (ulong)(lVar12 * 4) && uVar16 != 0) {
      std::__ndk1::
      vector<cocos2d::Particle3DQuadRender::posuvcolor,std::__ndk1::allocator<cocos2d::Particle3DQuadRender::posuvcolor>>
      ::__append(this_00,uVar16);
      lVar12 = *(long *)(this + 0x90);
      uVar16 = local_178 * 6;
      uVar17 = *(long *)(this + 0x98) - lVar12 >> 1;
      if (uVar16 < uVar17 || uVar16 - uVar17 == 0) {
        if (uVar16 < uVar17) {
          *(long *)(this + 0x98) = lVar12 + local_178 * 0xc;
        }
      }
      else {
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0x90),
                   uVar16 - uVar17);
      }
    }
    plVar11 = (long *)Camera::getVisitingCamera();
    (**(code **)(*plVar11 + 0x430))(&local_f0);
    Mat4::getInversed();
    Mat4::Mat4(aMStack_170);
    Vec3::Vec3((Vec3 *)&local_198,local_f0,fStack_ec,local_e8);
    Vec3::Vec3((Vec3 *)&local_1a8,local_e0,fStack_dc,local_d8);
    Vec3::Vec3(aVStack_1b8,local_d0,fStack_cc,local_c8);
    Vec3::Vec3((Vec3 *)&local_1c8);
    if (&local_188 == (long ******)local_180) {
      lVar12 = *(long *)this_00;
      uVar19 = 0;
      uVar6 = 0;
    }
    else {
      lVar12 = *(long *)(this + 0x78);
      lVar14 = 0;
      uVar19 = 0;
      uVar6 = 0;
      lVar18 = 6;
      pppppplVar15 = (long ******)local_180;
      do {
        ppppplVar13 = pppppplVar15[2];
        local_1c8 = (long ***)ppppplVar13[1];
        local_1c0 = *(float *)(ppppplVar13 + 2);
        fVar29 = *(float *)(ppppplVar13 + 9) * 0.5;
        fVar27 = *(float *)((long)ppppplVar13 + 0x44) * 0.5;
        fVar25 = (float)local_1a8 * fVar29;
        fVar26 = (float)((ulong)local_1a8 >> 0x20) * fVar29;
        fVar29 = fVar29 * local_1a0;
        fVar23 = (float)local_198 * fVar27;
        fVar24 = (float)((ulong)local_198 >> 0x20) * fVar27;
        fVar30 = SUB84(local_1c8,0);
        fVar31 = (float)((ulong)local_1c8 >> 0x20);
        *(undefined8 *)(lVar12 + lVar14) =
             CONCAT44((-fVar24 - fVar26) + fVar31,(-fVar23 - fVar25) + fVar30);
        *(float *)((undefined8 *)(lVar12 + lVar14) + 1) =
             (-(fVar27 * local_190) - fVar29) + local_1c0;
        lVar12 = *(long *)(this + 0x78);
        uVar28 = *(undefined8 *)((long)ppppplVar13 + 0x24);
        fVar27 = fVar27 * local_190;
        *(undefined8 *)(lVar12 + lVar14 + 0x1c) = *(undefined8 *)((long)ppppplVar13 + 0x2c);
        *(undefined8 *)(lVar12 + lVar14 + 0x14) = uVar28;
        uVar19 = uVar19 + 6;
        lVar12 = *(long *)(this + 0x78) + lVar14;
        *(undefined8 *)(lVar12 + 0xc) = *(undefined8 *)((long)ppppplVar13 + 0x34);
        *(ulong *)(lVar12 + 0x24) = CONCAT44((fVar24 - fVar26) + fVar31,(fVar23 - fVar25) + fVar30);
        *(float *)(lVar12 + 0x2c) = (fVar27 - fVar29) + local_1c0;
        lVar12 = *(long *)(this + 0x78);
        uVar28 = *(undefined8 *)((long)ppppplVar13 + 0x24);
        *(undefined8 *)(lVar12 + lVar14 + 0x40) = *(undefined8 *)((long)ppppplVar13 + 0x2c);
        *(undefined8 *)(lVar12 + lVar14 + 0x38) = uVar28;
        uVar28 = NEON_rev64(ppppplVar13[7],4);
        lVar12 = *(long *)(this + 0x78) + lVar14;
        *(undefined8 *)(lVar12 + 0x30) = uVar28;
        *(ulong *)(lVar12 + 0x48) = CONCAT44((fVar26 - fVar24) + fVar31,(fVar25 - fVar23) + fVar30);
        *(float *)(lVar12 + 0x50) = (fVar29 - fVar27) + local_1c0;
        lVar12 = *(long *)(this + 0x78);
        uVar28 = *(undefined8 *)((long)ppppplVar13 + 0x24);
        *(undefined8 *)(lVar12 + lVar14 + 100) = *(undefined8 *)((long)ppppplVar13 + 0x2c);
        *(undefined8 *)(lVar12 + lVar14 + 0x5c) = uVar28;
        uVar2 = *(undefined4 *)(ppppplVar13 + 8);
        lVar12 = *(long *)(this + 0x78) + lVar14;
        *(undefined4 *)(lVar12 + 0x54) = *(undefined4 *)((long)ppppplVar13 + 0x34);
        *(undefined4 *)(lVar12 + 0x58) = uVar2;
        sVar4 = (short)uVar6;
        *(ulong *)(lVar12 + 0x6c) = CONCAT44(fVar24 + fVar26 + fVar31,fVar23 + fVar25 + fVar30);
        *(float *)(lVar12 + 0x74) = fVar27 + fVar29 + local_1c0;
        lVar12 = *(long *)(this + 0x78);
        uVar28 = *(undefined8 *)((long)ppppplVar13 + 0x24);
        *(undefined8 *)(lVar12 + lVar14 + 0x88) = *(undefined8 *)((long)ppppplVar13 + 0x2c);
        *(undefined8 *)(lVar12 + lVar14 + 0x80) = uVar28;
        lVar12 = *(long *)(this + 0x78);
        *(undefined8 *)(lVar12 + lVar14 + 0x78) = *(undefined8 *)((long)ppppplVar13 + 0x3c);
        lVar14 = lVar14 + 0x90;
        psVar1 = (short *)(*(long *)(this + 0x90) + lVar18);
        psVar1[-2] = sVar4 + 1;
        *psVar1 = sVar4;
        psVar1[-3] = sVar4;
        psVar1[-1] = sVar4 + 3;
        psVar1[1] = sVar4 + 3;
        psVar1[2] = sVar4 + 2;
        pppppplVar15 = (long ******)pppppplVar15[1];
        uVar6 = uVar6 + 4;
        lVar18 = lVar18 + 0xc;
      } while (&local_188 != pppppplVar15);
    }
    lVar12 = lVar12 + (ulong)uVar6 * 0x24;
    if (lVar12 != *(long *)(this + 0x80)) {
      for (lVar14 = *(long *)(this + 0x80); lVar14 != lVar12; lVar14 = lVar14 + -0x24) {
        Vec4::~Vec4((Vec4 *)(lVar14 + -0x10));
      }
      *(long *)(this + 0x80) = lVar12;
    }
    lVar12 = *(long *)(this + 0x90) + (ulong)uVar19 * 2;
    if (lVar12 != *(long *)(this + 0x98)) {
      *(long *)(this + 0x98) = lVar12;
    }
    VertexBuffer::updateVertices(*(VertexBuffer **)(this + 0x70),*(void **)(this + 0x78),uVar6,0,0);
    IndexBuffer::updateIndices(*(IndexBuffer **)(this + 0x68),*(void **)(this + 0x90),uVar19,0,0);
    if (*(Texture2D **)(this + 0x58) == (Texture2D *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = Texture2D::getName(*(Texture2D **)(this + 0x58));
    }
    fVar24 = *(float *)(param_2 + 0x30);
    fVar23 = *(float *)(param_2 + 0x34);
    fVar27 = *(float *)(param_2 + 0x38);
    this_01 = *(MeshCommand **)(this + 0x50);
    pGVar21 = *(GLProgramState **)(this + 0x60);
    pSVar22 = *(StateBlock **)(this + 0x30);
    uVar7 = VertexBuffer::getVBO(*(VertexBuffer **)(this + 0x70),0);
    uVar8 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x68),0);
    MeshCommand::init(this_01,-(local_f8 +
                               local_128 * fVar24 + local_118 * fVar23 + local_108 * fVar27),uVar6,
                      pGVar21,pSVar22,uVar7,uVar8,4,0x1403,(ulong)uVar19,param_2,0);
    pGVar21 = *(GLProgramState **)(this + 0x60);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_1e0,"u_color");
    Vec4::Vec4(aVStack_1f0,1.0,1.0,1.0,1.0);
    GLProgramState::setUniformVec4(pGVar21,(basic_string *)local_1e0,aVStack_1f0);
    Vec4::~Vec4(aVStack_1f0);
    if (((byte)local_1e0[0] & 1) != 0) {
      operator_delete(local_1d0);
    }
    Renderer::addCommand(param_1,*(RenderCommand **)(this + 0x50));
    Mat4::~Mat4(aMStack_170);
    Mat4::~Mat4(aMStack_130);
    Mat4::~Mat4((Mat4 *)&local_f0);
    if (local_178 != 0) {
      ppppplVar13 = (long *****)*local_180;
      ppppplVar13[1] = local_188[1];
      *local_188[1] = (long ***)ppppplVar13;
      local_178 = 0;
      pppppplVar15 = (long ******)local_180;
      while (pppppplVar15 != &local_188) {
        pppppplVar10 = (long ******)pppppplVar15[1];
        operator_delete(pppppplVar15);
        pppppplVar15 = pppppplVar10;
      }
    }
  }
LAB_00e5eda0:
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

