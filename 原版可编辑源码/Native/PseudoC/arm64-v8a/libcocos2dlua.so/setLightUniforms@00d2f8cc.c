
/* cocos2d::Mesh::setLightUniforms(cocos2d::Pass*, cocos2d::Scene*, cocos2d::Vec4 const&, unsigned
   int) */

void cocos2d::Mesh::setLightUniforms(Pass *param_1,Scene *param_2,Vec4 *param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  Configuration *this;
  GLProgramState *this_00;
  VertexAttribBinding *this_01;
  long *plVar8;
  byte *pbVar9;
  uint in_w4;
  float *pfVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  DirectionLight *this_02;
  SpotLight *this_03;
  int iVar20;
  float fVar21;
  float fVar22;
  float in_s1;
  float fVar23;
  float in_s2;
  float fVar24;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  uint local_b8;
  float fStack_b4;
  float local_b0;
  void *local_a8;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  pfVar10 = (float *)(ulong)param_4;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this = (Configuration *)Configuration::getInstance();
  iVar3 = Configuration::getMaxSupportDirLightInShader(this);
  iVar4 = Configuration::getMaxSupportPointLightInShader(this);
  iVar5 = Configuration::getMaxSupportSpotLightInShader(this);
  this_00 = (GLProgramState *)Pass::getGLProgramState((Pass *)param_2);
  this_01 = (VertexAttribBinding *)Pass::getVertexAttributeBinding((Pass *)param_2);
  uVar6 = VertexAttribBinding::getVertexAttribsFlags(this_01);
  if ((uVar6 >> 6 & 1) == 0) {
    Vec3::Vec3((Vec3 *)&local_c8,0.0,0.0,0.0);
    plVar15 = *(long **)(param_3 + 0x330);
    plVar17 = *(long **)(param_3 + 0x338);
    if (plVar15 == plVar17) goto LAB_00d30148;
    bVar2 = false;
    do {
      iVar3 = (**(code **)(*(long *)*plVar15 + 0x530))();
      if (((iVar3 == 3) && (plVar8 = (long *)*plVar15, (char)plVar8[0x60] != '\0')) &&
         ((*(uint *)((long)plVar8 + 0x2fc) & in_w4) != 0)) {
        pbVar9 = (byte *)(**(code **)(*plVar8 + 0x4b8))();
        bVar2 = true;
        fVar23 = *(float *)(*plVar15 + 0x2f8);
        fVar21 = (float)NEON_ucvtf((uint)*pbVar9);
        fVar22 = (float)NEON_ucvtf((uint)pbVar9[1]);
        local_c8 = CONCAT44(local_c8._4_4_ + fVar23 * fVar22,(float)local_c8 + fVar23 * fVar21);
        fVar21 = (float)NEON_ucvtf((uint)pbVar9[2]);
        local_c0 = local_c0 + fVar23 * fVar21;
      }
      plVar15 = plVar15 + 1;
    } while (plVar17 != plVar15);
    if (!bVar2) goto LAB_00d30148;
    local_c8 = CONCAT44((float)((ulong)local_c8 >> 0x20) / 255.0,(float)local_c8 / 255.0);
    local_c0 = local_c0 / 255.0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,"u_color");
    Vec4::Vec4((Vec4 *)&local_d8,*pfVar10 * (float)local_c8,pfVar10[1] * local_c8._4_4_,
               pfVar10[2] * local_c0,pfVar10[3]);
    GLProgramState::setUniformVec4(this_00,(basic_string *)&local_b8,(Vec4 *)&local_d8);
    Vec4::~Vec4((Vec4 *)&local_d8);
  }
  else {
    resetLightUniformValues((Mesh *)param_1);
    Vec3::Vec3((Vec3 *)&local_d8);
    plVar15 = *(long **)(param_3 + 0x330);
    plVar17 = *(long **)(param_3 + 0x338);
    if (plVar15 != plVar17) {
      iVar20 = 0;
      iVar16 = 0;
      uVar19 = 0;
      do {
        plVar8 = (long *)*plVar15;
        if (((char)plVar8[0x60] != '\0') && ((*(uint *)((long)plVar8 + 0x2fc) & in_w4) != 0)) {
          fVar21 = *(float *)(plVar8 + 0x5f);
          uVar7 = (**(code **)(*plVar8 + 0x530))();
          switch(uVar7) {
          case 0:
            if (iVar20 < iVar3) {
              this_02 = (DirectionLight *)*plVar15;
              local_b8 = DirectionLight::getDirectionInWorld(this_02);
              fStack_b4 = in_s1;
              local_b0 = in_s2;
              Vec3::normalize((Vec3 *)&local_b8);
              pbVar9 = (byte *)(**(code **)(*(long *)this_02 + 0x4b8))(this_02);
              fVar22 = (float)NEON_ucvtf((uint)*pbVar9);
              fVar23 = (float)NEON_ucvtf((uint)pbVar9[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar9[2]);
              pfVar10 = (float *)(*(long *)(param_1 + 0x1a0) + (long)iVar20 * 0xc);
              in_s1 = fVar21 * (fVar23 / 255.0);
              in_s2 = fVar21 * (fVar24 / 255.0);
              *pfVar10 = fVar21 * (fVar22 / 255.0);
              pfVar10[1] = in_s1;
              pfVar10[2] = in_s2;
              puVar11 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + (long)iVar20 * 0xc);
              *puVar11 = CONCAT44(fStack_b4,local_b8);
              *(float *)(puVar11 + 1) = local_b0;
              iVar20 = iVar20 + 1;
            }
            break;
          case 1:
            if (iVar16 < iVar4) {
              plVar8 = (long *)*plVar15;
              (**(code **)(*plVar8 + 0x430))(&local_b8,plVar8);
              pbVar9 = (byte *)(**(code **)(*plVar8 + 0x4b8))(plVar8);
              fVar22 = (float)NEON_ucvtf((uint)*pbVar9);
              fVar23 = (float)NEON_ucvtf((uint)pbVar9[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar9[2]);
              lVar12 = ((long)iVar16 + (long)iVar16 * 2) * 4;
              pfVar10 = (float *)(*(long *)(param_1 + 0x1d0) + lVar12);
              in_s2 = fVar21 * (fVar23 / 255.0);
              in_s1 = fVar21 * (fVar24 / 255.0);
              *pfVar10 = fVar21 * (fVar22 / 255.0);
              pfVar10[1] = in_s2;
              pfVar10[2] = in_s1;
              puVar11 = (undefined8 *)(*(long *)(param_1 + 0x1e8) + lVar12);
              *puVar11 = local_88;
              *(undefined4 *)(puVar11 + 1) = local_80;
              *(float *)(*(long *)(param_1 + 0x200) + (long)iVar16 * 4) =
                   1.0 / *(float *)((long)plVar8 + 0x304);
              iVar16 = iVar16 + 1;
LAB_00d2fd78:
              Mat4::~Mat4((Mat4 *)&local_b8);
            }
            break;
          case 2:
            iVar18 = (int)uVar19;
            if (iVar18 < iVar5) {
              this_03 = (SpotLight *)*plVar15;
              uVar7 = SpotLight::getDirectionInWorld(this_03);
              local_c8 = CONCAT44(in_s1,uVar7);
              local_c0 = in_s2;
              Vec3::normalize((Vec3 *)&local_c8);
              (**(code **)(*(long *)*plVar15 + 0x430))(&local_b8);
              pbVar9 = (byte *)(**(code **)(*(long *)this_03 + 0x4b8))(this_03);
              fVar22 = (float)NEON_ucvtf((uint)*pbVar9);
              fVar23 = (float)NEON_ucvtf((uint)pbVar9[1]);
              fVar24 = (float)NEON_ucvtf((uint)pbVar9[2]);
              lVar12 = ((long)iVar18 + (long)iVar18 * 2) * 4;
              pfVar10 = (float *)(*(long *)(param_1 + 0x218) + lVar12);
              in_s2 = fVar21 * (fVar23 / 255.0);
              in_s1 = fVar21 * (fVar24 / 255.0);
              *pfVar10 = fVar21 * (fVar22 / 255.0);
              pfVar10[1] = in_s2;
              pfVar10[2] = in_s1;
              lVar13 = *(long *)(param_1 + 0x230);
              *(undefined8 *)(lVar13 + lVar12) = local_88;
              *(undefined4 *)((undefined8 *)(lVar13 + lVar12) + 1) = local_80;
              lVar13 = *(long *)(param_1 + 0x248);
              *(float *)((undefined8 *)(lVar13 + lVar12) + 1) = local_c0;
              *(undefined8 *)(lVar13 + lVar12) = local_c8;
              uVar14 = -(uVar19 >> 0x1f) & 0xfffffffc00000000 | uVar19 << 2;
              uVar19 = (ulong)(iVar18 + 1);
              *(undefined4 *)(*(long *)(param_1 + 0x260) + uVar14) =
                   *(undefined4 *)(this_03 + 0x30c);
              *(undefined4 *)(*(long *)(param_1 + 0x278) + uVar14) =
                   *(undefined4 *)(this_03 + 0x314);
              *(float *)(*(long *)(param_1 + 0x290) + uVar14) = 1.0 / *(float *)(this_03 + 0x304);
              goto LAB_00d2fd78;
            }
            break;
          case 3:
            pbVar9 = (byte *)(**(code **)(*(long *)*plVar15 + 0x4b8))();
            fVar22 = (float)NEON_ucvtf((uint)*pbVar9);
            fVar23 = (float)NEON_ucvtf((uint)pbVar9[1]);
            fVar24 = (float)NEON_ucvtf((uint)pbVar9[2]);
            local_d8 = local_d8 + fVar21 * (fVar22 / 255.0);
            in_s2 = fVar21 * (fVar23 / 255.0) + fStack_d4;
            in_s1 = fVar21 * (fVar24 / 255.0) + local_d0;
            fStack_d4 = in_s2;
            local_d0 = in_s1;
          }
        }
        plVar15 = plVar15 + 1;
      } while (plVar17 != plVar15);
    }
    if (0 < iVar3) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_DirLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1a8) - (long)*(Vec3 **)(param_1 + 0x1a0) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1a0));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_DirLightSourceDirection");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1c0) - (long)*(Vec3 **)(param_1 + 0x1b8) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1b8));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (0 < iVar4) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1d8) - (long)*(Vec3 **)(param_1 + 0x1d0) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1d0));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourcePosition");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x1f0) - (long)*(Vec3 **)(param_1 + 0x1e8) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x1e8));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_PointLightSourceRangeInverse");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x208) - (long)*(float **)(param_1 + 0x200) >> 2,
                 *(float **)(param_1 + 0x200));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    if (0 < iVar5) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceColor");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x220) - (long)*(Vec3 **)(param_1 + 0x218) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x218));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourcePosition");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x238) - (long)*(Vec3 **)(param_1 + 0x230) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x230));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceDirection");
      GLProgramState::setUniformVec3v
                (this_00,(basic_string *)&local_b8,
                 (*(long *)(param_1 + 0x250) - (long)*(Vec3 **)(param_1 + 0x248) >> 2) *
                 -0x5555555555555555,*(Vec3 **)(param_1 + 0x248));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceInnerAngleCos");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x268) - (long)*(float **)(param_1 + 0x260) >> 2,
                 *(float **)(param_1 + 0x260));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceOuterAngleCos");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x280) - (long)*(float **)(param_1 + 0x278) >> 2,
                 *(float **)(param_1 + 0x278));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,"u_SpotLightSourceRangeInverse");
      GLProgramState::setUniformFloatv
                (this_00,(basic_string *)&local_b8,
                 *(long *)(param_1 + 0x298) - (long)*(float **)(param_1 + 0x290) >> 2,
                 *(float **)(param_1 + 0x290));
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b8,"u_AmbientLightSourceColor");
    Vec3::Vec3((Vec3 *)&local_c8,local_d8,fStack_d4,local_d0);
    GLProgramState::setUniformVec3(this_00,(basic_string *)&local_b8,(Vec3 *)&local_c8);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_00d30148:
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

