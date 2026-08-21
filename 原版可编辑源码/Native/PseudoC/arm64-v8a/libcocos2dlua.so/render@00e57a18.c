
/* cocos2d::PUSphereRender::render(cocos2d::Renderer*, cocos2d::Mat4 const&,
   cocos2d::ParticleSystem3D*) */

void __thiscall
cocos2d::PUSphereRender::render
          (PUSphereRender *this,Renderer *param_1,Mat4 *param_2,ParticleSystem3D *param_3)

{
  float *pfVar1;
  MeshCommand *this_00;
  int iVar2;
  long lVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  Ref *pRVar10;
  BlendFunc *pBVar11;
  long lVar12;
  void *pvVar13;
  long lVar14;
  GLProgramState *pGVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  StateBlock *pSVar20;
  ParticleSystem3D *pPVar21;
  ulong uVar22;
  undefined8 uVar23;
  float fVar24;
  Vec3 aVStack_240 [16];
  undefined8 local_230;
  undefined4 local_228;
  Vec3 aVStack_220 [16];
  Mat4 local_210;
  undefined7 uStack_20f;
  undefined4 uStack_208;
  void *local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  Mat4 aMStack_1d0 [64];
  Mat4 aMStack_190 [64];
  Mat4 aMStack_150 [64];
  Mat4 local_110 [16];
  void *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  Mat4 aMStack_d0 [32];
  float local_b0;
  float fStack_ac;
  float local_a8;
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  if ((this[0x38] == (PUSphereRender)0x0) || (*(long *)(param_3 + 0x348) == 0)) goto LAB_00e57e68;
  plVar9 = (long *)Camera::getVisitingCamera();
  (**(code **)(*plVar9 + 0x430))(aMStack_d0);
  Vec3::Vec3(aVStack_220,local_b0,fStack_ac,local_a8);
  uVar5 = (*(ushort *)(this + 0xe2) + 1) * (*(ushort *)(this + 0xe0) + 1);
  iVar2 = (uint)*(ushort *)(this + 0xe0) * (*(ushort *)(this + 0xe2) + 1) * 6;
  if ((*(long *)(this + 0x90) == 0) && (*(long *)(this + 0x88) == 0)) {
    iVar6 = ParticleSystem3D::getParticleQuota(param_3);
    pRVar10 = (Ref *)VertexBuffer::create(0x24,iVar6 * uVar5,0x88e4,1);
    *(Ref **)(this + 0x90) = pRVar10;
    if (pRVar10 != (Ref *)0x0) {
      Ref::retain(pRVar10);
      iVar6 = ParticleSystem3D::getParticleQuota(param_3);
      lVar14 = *(long *)(this + 0x98);
      lVar17 = *(long *)(this + 0xa0);
      uVar22 = (ulong)(iVar6 * uVar5);
      lVar12 = lVar17 - lVar14 >> 2;
      uVar18 = lVar12 * -0x71c71c71c71c71c7;
      if (uVar18 < uVar22) {
        std::__ndk1::
        vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
        ::__append((vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
                    *)(this + 0x98),uVar22 + lVar12 * 0x71c71c71c71c71c7);
      }
      else if (uVar18 - uVar22 != 0) {
        lVar14 = lVar14 + uVar22 * 0x24;
        for (; lVar14 != lVar17; lVar17 = lVar17 + -0x24) {
          Vec4::~Vec4((Vec4 *)(lVar17 + -0x10));
        }
        *(long *)(this + 0xa0) = lVar14;
      }
      iVar6 = ParticleSystem3D::getParticleQuota(param_3);
      pRVar10 = (Ref *)IndexBuffer::create(0,iVar6 * iVar2,0x88e4,1);
      *(Ref **)(this + 0x88) = pRVar10;
      if (pRVar10 != (Ref *)0x0) {
        Ref::retain(pRVar10);
        iVar6 = ParticleSystem3D::getParticleQuota(param_3);
        lVar17 = *(long *)(this + 0xb0);
        uVar22 = (ulong)(uint)(iVar6 * iVar2);
        uVar18 = *(long *)(this + 0xb8) - lVar17 >> 1;
        if (uVar18 < uVar22) {
          std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                    ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0xb0),
                     uVar22 - uVar18);
        }
        else if (uVar18 != uVar22) {
          *(ulong *)(this + 0xb8) = lVar17 + uVar22 * 2;
        }
        uVar4 = ParticleSystem3D::getParticleQuota(param_3);
        buildBuffers(this,uVar4);
        goto LAB_00e57ac4;
      }
    }
  }
  else {
LAB_00e57ac4:
    Mat4::Mat4(local_110);
    Mat4::Mat4(aMStack_150);
    Mat4::Mat4(aMStack_190);
    Mat4::Mat4(aMStack_1d0);
    Vec3::Vec3((Vec3 *)&local_230);
    pPVar21 = *(ParticleSystem3D **)(param_3 + 0x340);
    if (param_3 + 0x338 == pPVar21) {
      pvVar13 = *(void **)(this + 0x98);
      uVar16 = 0;
      iVar6 = 0;
    }
    else {
      lVar17 = 0;
      uVar16 = 0;
      do {
        lVar14 = *(long *)(pPVar21 + 0x10);
        fVar24 = *(float *)(lVar14 + 0x44);
        Mat4::createRotation((Quaternion *)(lVar14 + 0x14),aMStack_150);
        fVar24 = fVar24 * 0.5;
        Mat4::createScale(fVar24,fVar24,fVar24,aMStack_190);
        Mat4::createRotation(aVStack_220,*(float *)(lVar14 + 0x14c),aMStack_1d0);
        Mat4::Mat4(&local_210,aMStack_150);
        Mat4::multiply(&local_210,aMStack_190);
        uStack_f8 = uStack_1f8;
        local_100 = local_200;
        uStack_e8 = uStack_1e8;
        uStack_f0 = uStack_1f0;
        uStack_d8 = uStack_1d8;
        local_e0 = local_1e0;
        Mat4::~Mat4(&local_210);
        uVar22 = 0;
        local_e0 = *(undefined8 *)(lVar14 + 8);
        uStack_d8 = CONCAT44(uStack_d8._4_4_,*(undefined4 *)(lVar14 + 0x10));
        do {
          uVar18 = (ulong)(uint)((int)lVar17 + (int)uVar22);
          lVar12 = *(long *)(this + 0xe8) + uVar18 * 0x24;
          Vec3::Vec3(aVStack_240,*(float *)(lVar12 + 0xc),*(float *)(lVar12 + 0x10),0.0);
          Vec3::Vec3((Vec3 *)&local_210);
          Mat4::transformVector(aMStack_1d0,aVStack_240,(Vec3 *)&local_210);
          local_230 = CONCAT71(uStack_20f,local_210);
          local_228 = uStack_208;
          lVar19 = uVar18 * 0x24;
          pfVar1 = (float *)(*(long *)(this + 0xe8) + lVar19);
          Mat4::transformVector
                    (local_110,*pfVar1,pfVar1[1],pfVar1[2],1.0,
                     (Vec3 *)(*(long *)(this + 0x98) + lVar19));
          lVar12 = *(long *)(this + 0x98);
          uVar23 = *(undefined8 *)(lVar14 + 0x24);
          uVar22 = uVar22 + 1;
          *(undefined8 *)(lVar12 + lVar19 + 0x1c) = *(undefined8 *)(lVar14 + 0x2c);
          *(undefined8 *)(lVar12 + lVar19 + 0x14) = uVar23;
          pvVar13 = *(void **)(this + 0x98);
          *(undefined8 *)((long)pvVar13 + lVar19 + 0xc) = local_230;
        } while (uVar22 < uVar5);
        pPVar21 = *(ParticleSystem3D **)(pPVar21 + 8);
        lVar17 = lVar17 + (ulong)uVar5;
        iVar6 = (int)lVar17;
        uVar16 = uVar16 + iVar2;
      } while (param_3 + 0x338 != pPVar21);
    }
    if ((pvVar13 != *(void **)(this + 0xa0)) && (*(long *)(this + 0xb0) != *(long *)(this + 0xb8)))
    {
      VertexBuffer::updateVertices(*(VertexBuffer **)(this + 0x90),pvVar13,iVar6,0,0);
      IndexBuffer::updateIndices(*(IndexBuffer **)(this + 0x88),*(void **)(this + 0xb0),uVar16,0,0);
      if (*(Texture2D **)(this + 0x78) == (Texture2D *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = Texture2D::getName(*(Texture2D **)(this + 0x78));
      }
      pSVar20 = *(StateBlock **)(this + 0x70);
      pBVar11 = (BlendFunc *)(**(code **)(*(long *)param_3 + 0x538))(param_3);
      RenderState::StateBlock::setBlendFunc(pSVar20,pBVar11);
      pGVar15 = *(GLProgramState **)(this + 0x80);
      this_00 = *(MeshCommand **)(this + 0x68);
      pSVar20 = *(StateBlock **)(this + 0x70);
      uVar7 = VertexBuffer::getVBO(*(VertexBuffer **)(this + 0x90),0);
      uVar8 = IndexBuffer::getVBO(*(IndexBuffer **)(this + 0x88),0);
      MeshCommand::init(this_00,0.0,uVar5,pGVar15,pSVar20,uVar7,uVar8,4,0x1403,(ulong)uVar16,param_2
                        ,8);
      *(undefined2 *)(*(long *)(this + 0x68) + 0x10) = 0x101;
      pGVar15 = *(GLProgramState **)(this + 0x80);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_210,"u_color");
      Vec4::Vec4((Vec4 *)aVStack_240,1.0,1.0,1.0,1.0);
      GLProgramState::setUniformVec4(pGVar15,(basic_string *)&local_210,(Vec4 *)aVStack_240);
      Vec4::~Vec4((Vec4 *)aVStack_240);
      if (((byte)local_210 & 1) != 0) {
        operator_delete(local_200);
      }
      Renderer::addCommand(param_1,*(RenderCommand **)(this + 0x68));
    }
    Mat4::~Mat4(aMStack_1d0);
    Mat4::~Mat4(aMStack_190);
    Mat4::~Mat4(aMStack_150);
    Mat4::~Mat4(local_110);
  }
  Mat4::~Mat4(aMStack_d0);
LAB_00e57e68:
  if (*(long *)(lVar3 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

