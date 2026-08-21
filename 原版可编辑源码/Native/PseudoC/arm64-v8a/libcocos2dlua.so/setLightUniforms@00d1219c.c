
/* cocos2d::BatchMesh::setLightUniforms(cocos2d::Pass*, cocos2d::Scene*, unsigned int) */

void cocos2d::BatchMesh::setLightUniforms(Pass *param_1,Scene *param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  Configuration *this;
  GLProgramState *this_00;
  VertexAttribBinding *this_01;
  byte *pbVar7;
  long *plVar8;
  uint in_w3;
  float *pfVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  DirectionLight *this_02;
  SpotLight *this_03;
  long *plVar17;
  int iVar18;
  long *plVar19;
  float fVar20;
  float in_s1;
  float fVar21;
  undefined4 uVar22;
  ulong in_d2;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined4 local_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  float local_c0;
  uint local_b8;
  float fStack_b4;
  undefined4 local_b0;
  void *local_a8;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this = (Configuration *)Configuration::getInstance();
  iVar2 = Configuration::getMaxSupportDirLightInShader(this);
  iVar3 = Configuration::getMaxSupportPointLightInShader(this);
  iVar4 = Configuration::getMaxSupportSpotLightInShader(this);
  this_00 = (GLProgramState *)Pass::getGLProgramState((Pass *)param_2);
  this_01 = (VertexAttribBinding *)Pass::getVertexAttributeBinding((Pass *)param_2);
  uVar5 = VertexAttribBinding::getVertexAttribsFlags(this_01);
  if ((uVar5 >> 6 & 1) != 0) {
    resetLightUniformValues((BatchMesh *)param_1);
    Vec3::Vec3((Vec3 *)&local_c8);
    plVar17 = *(long **)((ulong)param_3 + 0x330);
    plVar19 = *(long **)((ulong)param_3 + 0x338);
    if (plVar17 != plVar19) {
      iVar18 = 0;
      iVar14 = 0;
      uVar16 = 0;
      do {
        plVar8 = (long *)*plVar17;
        if (((char)plVar8[0x60] != '\0') && ((*(uint *)((long)plVar8 + 0x2fc) & in_w3) != 0)) {
          fVar25 = *(float *)(plVar8 + 0x5f);
          uVar6 = (**(code **)(*plVar8 + 0x530))();
          uVar22 = (undefined4)in_d2;
          switch(uVar6) {
          case 0:
            if (iVar18 < iVar2) {
              this_02 = (DirectionLight *)*plVar17;
              local_b8 = DirectionLight::getDirectionInWorld(this_02);
              fStack_b4 = in_s1;
              local_b0 = uVar22;
              Vec3::normalize((Vec3 *)&local_b8);
              pbVar7 = (byte *)(**(code **)(*(long *)this_02 + 0x4b8))(this_02);
              fVar20 = (float)NEON_ucvtf((uint)*pbVar7);
              fVar21 = (float)NEON_ucvtf((uint)pbVar7[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar7[2]);
              pfVar9 = (float *)(*(long *)(param_1 + 0x178) + (long)iVar18 * 0xc);
              in_s1 = fVar25 * (fVar21 / 255.0);
              fVar21 = fVar25 * (fVar24 / 255.0);
              in_d2 = (ulong)(uint)fVar21;
              *pfVar9 = fVar25 * (fVar20 / 255.0);
              pfVar9[1] = in_s1;
              pfVar9[2] = fVar21;
              puVar10 = (undefined8 *)(*(long *)(param_1 + 400) + (long)iVar18 * 0xc);
              *puVar10 = CONCAT44(fStack_b4,local_b8);
              *(undefined4 *)(puVar10 + 1) = local_b0;
              iVar18 = iVar18 + 1;
            }
            break;
          case 1:
            if (iVar14 < iVar3) {
              plVar8 = (long *)*plVar17;
              (**(code **)(*plVar8 + 0x430))(&local_b8,plVar8);
              pbVar7 = (byte *)(**(code **)(*plVar8 + 0x4b8))(plVar8);
              fVar20 = (float)NEON_ucvtf((uint)*pbVar7);
              fVar21 = (float)NEON_ucvtf((uint)pbVar7[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar7[2]);
              lVar11 = ((long)iVar14 + (long)iVar14 * 2) * 4;
              pfVar9 = (float *)(*(long *)(param_1 + 0x1a8) + lVar11);
              fVar21 = fVar25 * (fVar21 / 255.0);
              in_s1 = fVar25 * (fVar24 / 255.0);
              *pfVar9 = fVar25 * (fVar20 / 255.0);
              pfVar9[1] = fVar21;
              pfVar9[2] = in_s1;
              puVar10 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + lVar11);
              *puVar10 = local_88;
              *(undefined4 *)(puVar10 + 1) = local_80;
              *(float *)(*(long *)(param_1 + 0x1d8) + (long)iVar14 * 4) =
                   1.0 / *(float *)((long)plVar8 + 0x304);
              iVar14 = iVar14 + 1;
LAB_00d12578:
              in_d2 = (ulong)(uint)fVar21;
              Mat4::~Mat4((Mat4 *)&local_b8);
            }
            break;
          case 2:
            iVar15 = (int)uVar16;
            if (iVar15 < iVar4) {
              this_03 = (SpotLight *)*plVar17;
              local_d8 = SpotLight::getDirectionInWorld(this_03);
              fStack_d4 = in_s1;
              local_d0 = uVar22;
              Vec3::normalize((Vec3 *)&local_d8);
              (**(code **)(*(long *)*plVar17 + 0x430))(&local_b8);
              pbVar7 = (byte *)(**(code **)(*(long *)this_03 + 0x4b8))(this_03);
              fVar20 = (float)NEON_ucvtf((uint)*pbVar7);
              fVar21 = (float)NEON_ucvtf((uint)pbVar7[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar7[2]);
              lVar11 = ((long)iVar15 + (long)iVar15 * 2) * 4;
              pfVar9 = (float *)(*(long *)(param_1 + 0x1f0) + lVar11);
              fVar21 = fVar25 * (fVar21 / 255.0);
              in_s1 = fVar25 * (fVar24 / 255.0);
              *pfVar9 = fVar25 * (fVar20 / 255.0);
              pfVar9[1] = fVar21;
              pfVar9[2] = in_s1;
              lVar12 = *(long *)(param_1 + 0x208);
              *(undefined8 *)(lVar12 + lVar11) = local_88;
              *(undefined4 *)((undefined8 *)(lVar12 + lVar11) + 1) = local_80;
              lVar12 = *(long *)(param_1 + 0x220);
              *(undefined4 *)((undefined8 *)(lVar12 + lVar11) + 1) = local_d0;
              *(undefined8 *)(lVar12 + lVar11) = CONCAT44(fStack_d4,local_d8);
              uVar13 = -(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2;
              uVar16 = (ulong)(iVar15 + 1);
              *(undefined4 *)(*(long *)(param_1 + 0x238) + uVar13) =
                   *(undefined4 *)(this_03 + 0x30c);
              *(undefined4 *)(*(long *)(param_1 + 0x250) + uVar13) =
                   *(undefined4 *)(this_03 + 0x314);
              *(float *)(*(long *)(param_1 + 0x268) + uVar13) = 1.0 / *(float *)(this_03 + 0x304);
              goto LAB_00d12578;
            }
            break;
          case 3:
            pbVar7 = (byte *)(**(code **)(*(long *)*plVar17 + 0x4b8))();
            fVar20 = (float)NEON_ucvtf((uint)*pbVar7);
            fVar21 = (float)NEON_ucvtf((uint)pbVar7[1]);
            fVar24 = (float)NEON_ucvtf((uint)pbVar7[2]);
            local_c8._4_4_ = fVar25 * (fVar21 / 255.0) + local_c8._4_4_;
            in_d2 = (ulong)(uint)local_c8._4_4_;
            in_s1 = fVar25 * (fVar24 / 255.0) + local_c0;
            local_c8 = CONCAT44(local_c8._4_4_,(float)local_c8 + fVar25 * (fVar20 / 255.0));
            local_c0 = in_s1;
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar19 != plVar17);
    }
    if (0 < iVar2) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_DirLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x180) - (long)*(Vec3 **)(param_1 + 0x178) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x178));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_DirLightSourceDirection");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x198) - (long)*(Vec3 **)(param_1 + 400) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 400));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (0 < iVar3) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1b0) - (long)*(Vec3 **)(param_1 + 0x1a8) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1a8));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourcePosition");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1c8) - (long)*(Vec3 **)(param_1 + 0x1c0) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1c0));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourceRangeInverse");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x1e0) - (long)*(float **)(param_1 + 0x1d8) >> 2,
                 *(float **)(param_1 + 0x1d8));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (0 < iVar4) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1f8) - (long)*(Vec3 **)(param_1 + 0x1f0) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1f0));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourcePosition");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x210) - (long)*(Vec3 **)(param_1 + 0x208) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x208));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceDirection");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x228) - (long)*(Vec3 **)(param_1 + 0x220) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x220));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceInnerAngleCos");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x240) - (long)*(float **)(param_1 + 0x238) >> 2,
                 *(float **)(param_1 + 0x238));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceOuterAngleCos");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 600) - (long)*(float **)(param_1 + 0x250) >> 2,
                 *(float **)(param_1 + 0x250));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceRangeInverse");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x270) - (long)*(float **)(param_1 + 0x268) >> 2,
                 *(float **)(param_1 + 0x268));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (in_w3 == 0) {
      uVar23 = NEON_fmov(0x3f800000,4);
      local_c8 = CONCAT44((float)((ulong)local_c8 >> 0x20) + (float)((ulong)uVar23 >> 0x20),
                          (float)local_c8 + (float)uVar23);
      local_c0 = local_c0 + 1.0;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,"u_AmbientLightSourceColor");
    Vec3::Vec3((Vec3 *)&local_d8,(float)local_c8,local_c8._4_4_,local_c0);
    GLProgramState::setUniformVec3(this_00,(basic_string *)&local_b8,(Vec3 *)&local_d8);
    if ((local_b8 & 1) != 0) {
      operator_delete(local_a8);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

