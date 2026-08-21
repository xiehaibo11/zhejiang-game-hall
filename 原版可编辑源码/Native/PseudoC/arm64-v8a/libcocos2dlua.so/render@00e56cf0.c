
/* cocos2d::PUParticle3DBoxRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PUParticle3DBoxRender::render
          (PUParticle3DBoxRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  PUParticle3DBoxRender *pPVar1;
  MeshCommand *this_00;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  Ref *pRVar9;
  BlendFunc *pBVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  ParticleSystem3D *pPVar20;
  StateBlock *pSVar21;
  GLProgramState *pGVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  Vec3 aVStack_178 [16];
  Vec3 local_168;
  undefined7 uStack_167;
  float local_160;
  void *local_158;
  undefined8 local_150;
  float local_148;
  Vec3 aVStack_140 [16];
  Mat4 aMStack_130 [64];
  Mat4 aMStack_f0 [32];
  float local_d0;
  float fStack_cc;
  float local_c8;
  long local_b0;
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if ((this[0x38] == (PUParticle3DBoxRender)0x0) || (*(long *)(param_3 + 0x348) == 0))
  goto LAB_00e57514;
  plVar8 = (long *)Camera::getVisitingCamera();
  (**(code **)(*plVar8 + 0x430))(aMStack_f0);
  Vec3::Vec3(aVStack_140,local_d0,fStack_cc,local_c8);
  if ((*(long *)(this + 0x90) == 0) && (*(long *)(this + 0x88) == 0)) {
    iVar5 = ParticleSystem3D::getParticleQuota(param_3);
    pRVar9 = (Ref *)VertexBuffer::create(0x24,iVar5 << 3,0x88e4,1);
    *(Ref **)(this + 0x90) = pRVar9;
    if (pRVar9 != (Ref *)0x0) {
      Ref::retain(pRVar9);
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      lVar18 = *(long *)(this + 0x98);
      lVar12 = *(long *)(this + 0xa0);
      uVar15 = (ulong)(uint)(iVar5 << 3);
      lVar16 = lVar12 - lVar18 >> 2;
      uVar17 = lVar16 * -0x71c71c71c71c71c7;
      if (uVar17 < uVar15) {
        std::__ndk1::
        vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
        ::__append((vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
                    *)(this + 0x98),uVar15 + lVar16 * 0x71c71c71c71c71c7);
      }
      else if (uVar17 - uVar15 != 0) {
        lVar18 = lVar18 + uVar15 * 0x24;
        for (; lVar18 != lVar12; lVar12 = lVar12 + -0x24) {
          Vec4::~Vec4((Vec4 *)(lVar12 + -0x10));
        }
        *(long *)(this + 0xa0) = lVar18;
      }
      iVar5 = ParticleSystem3D::getParticleQuota(param_3);
      pRVar9 = (Ref *)IndexBuffer::create(0,iVar5 * 0x24,0x88e4,1);
      *(Ref **)(this + 0x88) = pRVar9;
      if (pRVar9 != (Ref *)0x0) {
        Ref::retain(pRVar9);
        iVar5 = ParticleSystem3D::getParticleQuota(param_3);
        lVar12 = *(long *)(this + 0xb0);
        uVar15 = (ulong)(uint)(iVar5 * 0x24);
        uVar17 = *(long *)(this + 0xb8) - lVar12 >> 1;
        if (uVar17 < uVar15) {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0xb0),
                     uVar15 - uVar17);
        }
        else if (uVar17 != uVar15) {
          *(ulong *)(this + 0xb8) = lVar12 + uVar15 * 2;
        }
        uVar3 = ParticleSystem3D::getParticleQuota(param_3);
        reBuildIndices(this,uVar3);
        goto LAB_00e56d80;
      }
    }
  }
  else {
LAB_00e56d80:
    Mat4::Mat4(aMStack_130);
    Vec3::Vec3((Vec3 *)&local_150);
    pPVar20 = *(ParticleSystem3D **)(param_3 + 0x340);
    if (param_3 + 0x338 == pPVar20) {
      pvVar14 = *(void **)(this + 0x98);
      uVar19 = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      uVar19 = 0;
      pPVar1 = this + 0x98;
      do {
        lVar18 = *(long *)(pPVar20 + 0x10);
        fVar27 = *(float *)(lVar18 + 0x44);
        fVar26 = *(float *)(lVar18 + 0x48);
        fVar25 = *(float *)(lVar18 + 0x4c);
        Mat4::createRotation(aVStack_140,*(float *)(lVar18 + 0x14c),aMStack_130);
        Vec3::Vec3(aVStack_178,0.0,0.75,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        fVar26 = fVar26 * 0.5;
        fVar27 = fVar27 * 0.5;
        fVar25 = fVar25 * 0.5;
        fVar28 = -fVar27;
        fVar29 = -fVar26;
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar28,fVar29,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        puVar11 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar4 * 0x24);
        *puVar11 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar11 + 1) = fVar24 + local_160;
        uVar23 = *(undefined8 *)(lVar18 + 0x24);
        lVar12 = *(long *)pPVar1 + (ulong)uVar4 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar4 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.0,0.25,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar27,fVar29,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 1;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        puVar11 = (undefined8 *)(lVar18 + 0x24);
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.5,0.25,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar27,fVar26,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 2;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.5,0.75,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar28,fVar26,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 3;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.0,0.0,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        fVar25 = -fVar25;
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar27,fVar29,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 4;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.0,1.0,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar28,fVar29,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 5;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.5,1.0,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar28,fVar26,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 6;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        *(undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        Vec3::Vec3(aVStack_178,0.5,0.0,0.0);
        Vec3::Vec3(&local_168);
        Mat4::transformVector(aMStack_130,aVStack_178,&local_168);
        local_150 = CONCAT71(uStack_167,local_168);
        local_148 = local_160;
        Vec3::Vec3(&local_168,fVar27,fVar26,fVar25);
        fVar24 = *(float *)(lVar18 + 0x10);
        uVar6 = uVar4 + 7;
        puVar13 = (undefined8 *)(*(long *)pPVar1 + (ulong)uVar6 * 0x24);
        *puVar13 = CONCAT44((float)((ulong)*(undefined8 *)(lVar18 + 8) >> 0x20) +
                            (float)((uint7)uStack_167 >> 0x18),
                            (float)*(undefined8 *)(lVar18 + 8) +
                            (float)CONCAT71(uStack_167,local_168));
        *(float *)(puVar13 + 1) = fVar24 + local_160;
        uVar23 = *puVar11;
        uVar4 = uVar4 + 8;
        uVar19 = uVar19 + 0x24;
        lVar12 = *(long *)pPVar1 + (ulong)uVar6 * 0x24;
        *(undefined8 *)(lVar12 + 0x1c) = *(undefined8 *)(lVar18 + 0x2c);
        *(undefined8 *)(lVar12 + 0x14) = uVar23;
        pvVar14 = *(void **)pPVar1;
        *(undefined8 *)((long)pvVar14 + (ulong)uVar6 * 0x24 + 0xc) = local_150;
        pPVar20 = *(ParticleSystem3D **)(pPVar20 + 8);
      } while (param_3 + 0x338 != pPVar20);
    }
    if ((pvVar14 != *(void **)(this + 0xa0)) && (*(long *)(this + 0xb0) != *(long *)(this + 0xb8)))
    {
      VertexBuffer::updateVertices(*(VertexBuffer **)(this + 0x90),pvVar14,uVar4,0,0);
      IndexBuffer::updateIndices(*(IndexBuffer **)(this + 0x88),*(void **)(this + 0xb0),uVar19,0,0);
      if (*(Texture2D **)(this + 0x78) == (Texture2D *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = Texture2D::getName(*(Texture2D **)(this + 0x78));
      }
      pSVar21 = *(StateBlock **)(this + 0x70);
      pBVar10 = (BlendFunc *)(**(code **)(**(long **)(this + 0x28) + 0x538))();
      RenderState::StateBlock::setBlendFunc(pSVar21,pBVar10);
      pGVar22 = *(GLProgramState **)(this + 0x80);
      this_00 = *(MeshCommand **)(this + 0x68);
      pSVar21 = *(StateBlock **)(this + 0x70);
      uVar6 = VertexBuffer::getVBO(*(VertexBuffer **)(this + 0x90),0);
      uVar7 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x88),0);
      MeshCommand::init(this_00,0.0,uVar4,pGVar22,pSVar21,uVar6,uVar7,4,0x1403,(ulong)uVar19,param_2
                        ,8);
      *(undefined2 *)(*(long *)(this + 0x68) + 0x10) = 0x101;
      pGVar22 = *(GLProgramState **)(this + 0x80);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_168,"u_color");
      Vec4::Vec4((Vec4 *)aVStack_178,1.0,1.0,1.0,1.0);
      GLProgramState::setUniformVec4(pGVar22,(basic_string *)&local_168,(Vec4 *)aVStack_178);
      Vec4::~Vec4((Vec4 *)aVStack_178);
      if (((byte)local_168 & 1) != 0) {
        operator_delete(local_158);
      }
      Renderer::addCommand(param_1,*(RenderCommand **)(this + 0x68));
    }
    Mat4::~Mat4(aMStack_130);
  }
  Mat4::~Mat4(aMStack_f0);
LAB_00e57514:
  if (*(long *)(lVar2 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

