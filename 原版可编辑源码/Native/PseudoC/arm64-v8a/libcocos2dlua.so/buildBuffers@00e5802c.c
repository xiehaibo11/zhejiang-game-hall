
/* cocos2d::PUSphereRender::buildBuffers(unsigned short) */

void __thiscall cocos2d::PUSphereRender::buildBuffers(PUSphereRender *this,ushort param_1)

{
  undefined8 *puVar1;
  long lVar2;
  short sVar3;
  float fVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  Vec4 local_bc [20];
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  if (param_1 != 0) {
    dVar13 = (double)NEON_ucvtf((ulong)*(ushort *)(this + 0xe0));
    dVar14 = (double)NEON_ucvtf((ulong)*(ushort *)(this + 0xe2));
    sVar8 = 0;
    uVar10 = 0;
    uVar11 = 0;
    do {
      uVar12 = 0;
      do {
        sincosf((float)(3.141592653589793 / dVar13) * (float)uVar12,&fStack_d4,&local_d8);
        fVar4 = fStack_d4;
        fVar15 = local_d8;
        uVar7 = 0xffffffff;
        do {
          Vec3::Vec3((Vec3 *)&local_d0);
          fStack_c4 = 0.0;
          local_c0 = 0.0;
          Vec4::Vec4(local_bc);
          sincosf((float)(6.283185307179586 / dVar14) * (float)(uVar7 + 1),&fStack_dc,&local_e0);
          local_d0 = fVar4 * fStack_dc;
          fStack_cc = fVar15;
          local_bc._8_8_ = Vec4::ONE._8_8_;
          local_bc._0_8_ = Vec4::ONE._0_8_;
          fStack_c8 = fVar4 * local_e0;
          fStack_c4 = (float)(uVar7 + 1) / (float)*(ushort *)(this + 0xe2);
          local_c0 = 1.0 - (float)uVar12 / (float)*(ushort *)(this + 0xe0);
          if (uVar12 != *(ushort *)(this + 0xe0)) {
            lVar6 = *(long *)(this + 0xb0);
            sVar3 = sVar8 + 1;
            iVar9 = (int)uVar10;
            *(ushort *)(lVar6 + (uVar10 & 0xffff) * 2) = sVar3 + *(ushort *)(this + 0xe2);
            *(short *)(lVar6 + ((ulong)(iVar9 + 1) & 0xffff) * 2) = sVar8;
            *(short *)(lVar6 + ((ulong)(iVar9 + 2) & 0xffff) * 2) = *(short *)(this + 0xe2) + sVar8;
            *(short *)(lVar6 + ((ulong)(iVar9 + 3) & 0xffff) * 2) = sVar3 + *(short *)(this + 0xe2);
            uVar10 = (ulong)(iVar9 + 6);
            *(short *)(lVar6 + ((ulong)(iVar9 + 4) & 0xffff) * 2) = sVar3;
            *(short *)(lVar6 + ((ulong)(iVar9 + 5) & 0xffff) * 2) = sVar8;
          }
          puVar1 = *(undefined8 **)(this + 0xf0);
          if (puVar1 == *(undefined8 **)(this + 0xf8)) {
            fStack_cc = fVar15;
            std::__ndk1::
            vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
            ::__push_back_slow_path<cocos2d::PUParticle3DEntityRender::VertexInfo_const&>
                      ((vector<cocos2d::PUParticle3DEntityRender::VertexInfo,std::__ndk1::allocator<cocos2d::PUParticle3DEntityRender::VertexInfo>>
                        *)(this + 0xe8),(VertexInfo *)&local_d0);
          }
          else {
            *(float *)(puVar1 + 2) = local_c0;
            puVar1[1] = CONCAT44(fStack_c4,fStack_c8);
            *puVar1 = CONCAT44(fVar15,local_d0);
            Vec4::Vec4((Vec4 *)((long)puVar1 + 0x14),local_bc);
            *(long *)(this + 0xf0) = (long)puVar1 + 0x24;
          }
          sVar8 = sVar8 + 1;
          Vec4::~Vec4(local_bc);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(ushort *)(this + 0xe2));
        bVar5 = uVar12 < *(ushort *)(this + 0xe0);
        uVar12 = uVar12 + 1;
      } while (bVar5);
      uVar11 = uVar11 + 1;
    } while (uVar11 < param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

