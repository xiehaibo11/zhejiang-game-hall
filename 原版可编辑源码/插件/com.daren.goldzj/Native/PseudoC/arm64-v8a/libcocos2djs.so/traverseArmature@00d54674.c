
/* dragonBones::ArmatureCache::traverseArmature(dragonBones::Armature*, float) */

void __thiscall
dragonBones::ArmatureCache::traverseArmature(ArmatureCache *this,Armature *param_1,float param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  Mat4 *this_00;
  Texture2D *this_01;
  Color4F *this_02;
  void *__src;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  vector<dragonBones::ArmatureCache::BoneData*,std::__ndk1::allocator<dragonBones::ArmatureCache::BoneData*>>
  *this_03;
  undefined8 *puVar13;
  ulong uVar14;
  CCSlot *this_04;
  long lVar15;
  vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
  *this_05;
  long lVar16;
  ulong __n;
  vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
  *pvVar17;
  ulong uVar18;
  long lVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  Mat4 *local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  lVar19 = *(long *)(this + 0x10);
  cocos2d::Color4F::Color4F((Color4F *)&local_a0,-1.0,-1.0,-1.0,-1.0);
  cocos2d::Color4F::Color4F((Color4F *)&local_b0);
  lVar7 = *(long *)(param_1 + 0x60);
  lVar4 = *(long *)(param_1 + 0x68) - lVar7;
  if (lVar4 != 0) {
    uVar14 = 0;
    while( true ) {
      this_03 = *(vector<dragonBones::ArmatureCache::BoneData*,std::__ndk1::allocator<dragonBones::ArmatureCache::BoneData*>>
                  **)(this + 0x10);
      lVar16 = *(long *)(lVar7 + uVar14 * 8);
      lVar7 = *(long *)this_03;
      lVar15 = *(long *)(this_03 + 8);
      this_00 = operator_new(0x40);
      cocos2d::Mat4::Mat4(this_00);
      local_90 = this_00;
      if (*(undefined8 **)(this_03 + 8) == *(undefined8 **)(this_03 + 0x10)) {
        std::__ndk1::
        vector<dragonBones::ArmatureCache::BoneData*,std::__ndk1::allocator<dragonBones::ArmatureCache::BoneData*>>
        ::__push_back_slow_path<dragonBones::ArmatureCache::BoneData*const&>
                  (this_03,(BoneData **)&local_90);
      }
      else {
        **(undefined8 **)(this_03 + 8) = this_00;
        *(long *)(this_03 + 8) = *(long *)(this_03 + 8) + 8;
      }
      uVar14 = uVar14 + 1;
      puVar6 = *(undefined4 **)(*(long *)this_03 + (lVar15 - lVar7 >> 3) * 8);
      *puVar6 = *(undefined4 *)(lVar16 + 0x10);
      puVar6[1] = *(undefined4 *)(lVar16 + 0x14);
      puVar6[4] = -*(float *)(lVar16 + 0x18);
      puVar6[5] = -*(float *)(lVar16 + 0x1c);
      puVar6[0xc] = *(undefined4 *)(lVar16 + 0x20);
      puVar6[0xd] = *(undefined4 *)(lVar16 + 0x24);
      if ((ulong)(lVar4 >> 3) <= uVar14) break;
      lVar7 = *(long *)(param_1 + 0x60);
    }
  }
  lVar7 = *(long *)(param_1 + 0x78);
  lVar4 = *(long *)(param_1 + 0x80) - lVar7;
  if (lVar4 != 0) {
    uVar14 = 0;
    while( true ) {
      this_04 = *(CCSlot **)(lVar7 + uVar14 * 8);
      if (this_04[0xfd] != (CCSlot)0x0) {
        CCSlot::updateWorldMatrix(this_04);
        if (*(Armature **)(this_04 + 0x178) == (Armature *)0x0) {
          this_01 = (Texture2D *)CCSlot::getTexture(this_04);
          if (this_01 != (Texture2D *)0x0) {
            lVar7 = cocos2d::middleware::Texture2D::getNativeTexture(this_01);
            *(undefined4 *)(this + 0x48) = *(undefined4 *)(lVar7 + 0xc);
            __n = (long)*(int *)(this_04 + 0x1e0) * 0x14;
            uVar8 = __n + *(long *)(lVar19 + 0x108);
            if ((*(ulong *)(lVar19 + 0x120) != 0) && (*(ulong *)(lVar19 + 0x120) < uVar8)) {
              if (*(long **)(lVar19 + 0x150) != (long *)0x0) {
                (**(code **)(**(long **)(lVar19 + 0x150) + 0x30))();
              }
              *(undefined8 *)(lVar19 + 0x108) = 0;
            }
            if (*(ulong *)(lVar19 + 0x100) < uVar8) {
              (**(code **)(*(long *)(lVar19 + 0xf0) + 0x10))
                        (lVar19 + 0xf0,(long)((float)(int)((float)uVar8 * 0.0009765625) * 1024.0),1)
              ;
              if (*(long **)(lVar19 + 0x180) != (long *)0x0) {
                (**(code **)(**(long **)(lVar19 + 0x180) + 0x30))();
              }
            }
            if ((*(int *)(this + 0x44) != *(int *)(this + 0x48)) ||
               (*(int *)(this + 0x40) != *(int *)(this_04 + 0x94))) {
              if (*(int *)(this + 0x4c) != -1) {
                lVar15 = *(long *)(this + 0x10);
                iVar3 = *(int *)(this + 0x58);
                pvVar17 = (vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
                           *)(lVar15 + 0x30);
                lVar7 = *(long *)pvVar17;
                puVar13 = *(undefined8 **)(lVar15 + 0x38);
                if ((long)iVar3 + -1 == (long)puVar13 - lVar7 >> 3) {
                  local_90 = operator_new(0x20);
                  *(undefined4 *)local_90 = 0;
                  *(undefined8 *)(local_90 + 0x10) = 0;
                  *(undefined8 *)(local_90 + 0x18) = 0;
                  *(undefined8 *)(local_90 + 8) = 0;
                  if (*(undefined8 **)(lVar15 + 0x40) == puVar13) {
                    std::__ndk1::
                    vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
                    ::__push_back_slow_path<dragonBones::ArmatureCache::SegmentData*const&>
                              (pvVar17,(SegmentData **)&local_90);
                  }
                  else {
                    *puVar13 = local_90;
                    *(long *)(lVar15 + 0x38) = *(long *)(lVar15 + 0x38) + 8;
                  }
                  lVar7 = *(long *)pvVar17;
                }
                uVar21 = *(undefined8 *)(this + 0x50);
                lVar7 = *(long *)(lVar7 + ((long)iVar3 + -1) * 8);
                *(long *)(lVar7 + 0x10) = (long)(int)((ulong)uVar21 >> 0x20);
                *(long *)(lVar7 + 8) = (long)(int)uVar21;
              }
              lVar15 = *(long *)(this + 0x10);
              uVar18 = (ulong)*(int *)(this + 0x58);
              pvVar17 = (vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
                         *)(lVar15 + 0x30);
              lVar7 = *(long *)pvVar17;
              puVar13 = *(undefined8 **)(lVar15 + 0x38);
              uVar8 = (long)puVar13 - lVar7 >> 3;
              if (uVar8 < uVar18) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                if (uVar8 == uVar18) {
                  local_90 = operator_new(0x20);
                  *(undefined4 *)local_90 = 0;
                  *(undefined8 *)(local_90 + 0x10) = 0;
                  *(undefined8 *)(local_90 + 0x18) = 0;
                  *(undefined8 *)(local_90 + 8) = 0;
                  if (*(undefined8 **)(lVar15 + 0x40) == puVar13) {
                    std::__ndk1::
                    vector<dragonBones::ArmatureCache::SegmentData*,std::__ndk1::allocator<dragonBones::ArmatureCache::SegmentData*>>
                    ::__push_back_slow_path<dragonBones::ArmatureCache::SegmentData*const&>
                              (pvVar17,(SegmentData **)&local_90);
                  }
                  else {
                    *puVar13 = local_90;
                    *(long *)(lVar15 + 0x38) = *(long *)(lVar15 + 0x38) + 8;
                  }
                  lVar7 = *(long *)pvVar17;
                }
                puVar6 = *(undefined4 **)(lVar7 + uVar18 * 8);
              }
              cocos2d::Ref::retain((Ref *)this_01);
              if (*(Ref **)(puVar6 + 6) != (Ref *)0x0) {
                cocos2d::Ref::release(*(Ref **)(puVar6 + 6));
              }
              *(Texture2D **)(puVar6 + 6) = this_01;
              uVar1 = *(undefined4 *)(this_04 + 0x94);
              *puVar6 = uVar1;
              iVar3 = *(int *)(lVar19 + 0x68);
              *(undefined8 *)(this + 0x50) = 0;
              *(undefined4 *)(this + 0x40) = uVar1;
              *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x48);
              *(int *)(this + 0x4c) = (int)((ulong)(long)iVar3 >> 1);
              *(int *)(this + 0x58) = *(int *)(this + 0x58) + 1;
            }
            fStack_a4 = (float)NEON_ucvtf((uint)(byte)this_04[499]);
            fStack_a4 = fStack_a4 * param_2;
            local_b0 = (float)NEON_ucvtf((uint)(byte)this_04[0x1f0]);
            fStack_ac = (float)NEON_ucvtf((uint)(byte)this_04[0x1f1]);
            fStack_a8 = (float)NEON_ucvtf((uint)(byte)this_04[0x1f2]);
            uVar8 = cocos2d::Color4F::operator!=((Color4F *)&local_a0,(Color4F *)&local_b0);
            if ((uVar8 & 1) != 0) {
              uStack_98 = CONCAT44(fStack_a4,fStack_a8);
              local_a0 = CONCAT44(fStack_ac,local_b0);
              lVar15 = *(long *)(this + 0x10);
              this_05 = (vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
                         *)(lVar15 + 0x18);
              lVar7 = *(long *)(lVar15 + 0x20) - *(long *)this_05;
              lVar16 = lVar7 >> 3;
              if (lVar7 != 0) {
                *(ulong *)(*(long *)(*(long *)this_05 + lVar16 * 8 + -8) + 0x10) =
                     *(ulong *)(lVar19 + 0x108) >> 2;
              }
              this_02 = operator_new(0x18);
              cocos2d::Color4F::Color4F(this_02);
              *(undefined8 *)(this_02 + 0x10) = 0;
              local_90 = (Mat4 *)this_02;
              if (*(undefined8 **)(lVar15 + 0x20) == *(undefined8 **)(lVar15 + 0x28)) {
                std::__ndk1::
                vector<dragonBones::ArmatureCache::ColorData*,std::__ndk1::allocator<dragonBones::ArmatureCache::ColorData*>>
                ::__push_back_slow_path<dragonBones::ArmatureCache::ColorData*const&>
                          (this_05,(ColorData **)&local_90);
              }
              else {
                **(undefined8 **)(lVar15 + 0x20) = this_02;
                *(long *)(lVar15 + 0x20) = *(long *)(lVar15 + 0x20) + 8;
              }
              puVar13 = *(undefined8 **)(*(long *)this_05 + lVar16 * 8);
              puVar13[1] = CONCAT44(fStack_a4,fStack_a8);
              *puVar13 = CONCAT44(fStack_ac,local_b0);
            }
            uVar8 = (ulong)*(uint *)(this_04 + 0x1e0);
            __src = *(void **)(this_04 + 0x1e8);
            if (0 < (int)*(uint *)(this_04 + 0x1e0)) {
              puVar12 = (undefined1 *)((long)__src + 0x13);
              pfVar9 = *(float **)(this_04 + 0x1d0);
              do {
                fVar23 = pfVar9[1];
                uVar8 = uVar8 - 1;
                *(float *)(puVar12 + -0x13) =
                     *(float *)(this_04 + 0x1b8) +
                     *pfVar9 * *(float *)(this_04 + 0x188) + fVar23 * *(float *)(this_04 + 0x198);
                fVar20 = *pfVar9;
                fVar22 = *(float *)(this_04 + 0x18c);
                fVar25 = *(float *)(this_04 + 0x19c);
                fVar24 = *(float *)(this_04 + 0x1bc);
                puVar12[-3] = (char)(int)local_b0;
                puVar12[-2] = (char)(int)fStack_ac;
                puVar12[-1] = (char)(int)fStack_a8;
                *puVar12 = (char)(int)fStack_a4;
                *(float *)(puVar12 + -0xf) = fVar24 + fVar20 * fVar22 + fVar23 * fVar25;
                puVar12 = puVar12 + 0x14;
                pfVar9 = pfVar9 + 5;
              } while (uVar8 != 0);
            }
            if (*(ulong *)(lVar19 + 0x100) < *(long *)(lVar19 + 0x108) + __n) {
              *(undefined1 *)(lVar19 + 0x118) = 1;
            }
            else {
              memcpy((void *)(*(long *)(lVar19 + 0xf8) + *(long *)(lVar19 + 0x108)),__src,__n);
              *(ulong *)(lVar19 + 0x108) = *(long *)(lVar19 + 0x108) + __n;
            }
            uVar8 = *(long *)(lVar19 + 0x68) + (long)*(int *)(this_04 + 0x1e4) * 2;
            if ((*(ulong *)(lVar19 + 0x80) != 0) && (*(ulong *)(lVar19 + 0x80) < uVar8)) {
              if (*(long **)(lVar19 + 0xb0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar19 + 0xb0) + 0x30))();
              }
              *(undefined8 *)(lVar19 + 0x68) = 0;
            }
            if (*(ulong *)(lVar19 + 0x60) < uVar8) {
              (**(code **)(*(long *)(lVar19 + 0x50) + 0x10))
                        (lVar19 + 0x50,(long)((float)(int)((float)uVar8 * 0.0009765625) * 1024.0),1)
              ;
              if (*(long **)(lVar19 + 0xe0) != (long *)0x0) {
                (**(code **)(**(long **)(lVar19 + 0xe0) + 0x30))();
              }
            }
            uVar2 = *(uint *)(this_04 + 0x1e4);
            iVar3 = *(int *)(this + 0x54);
            if (0 < (int)uVar2) {
              uVar18 = *(ulong *)(lVar19 + 0x60);
              uVar8 = 0;
              uVar10 = *(ulong *)(lVar19 + 0x68);
              do {
                uVar11 = uVar10 + 2;
                if (uVar18 < uVar11) {
                  *(undefined1 *)(lVar19 + 0x78) = 1;
                  uVar11 = uVar10;
                }
                else {
                  *(short *)(*(long *)(lVar19 + 0x58) + uVar10) =
                       *(short *)(*(long *)(this_04 + 0x1d8) + uVar8 * 2) +
                       (((short)(iVar3 / 5) + (short)(iVar3 >> 0x1f)) -
                       (short)((long)iVar3 * 0x66666667 >> 0x3f));
                  *(ulong *)(lVar19 + 0x68) = uVar11;
                }
                uVar8 = uVar8 + 1;
                uVar10 = uVar11;
              } while (uVar2 != uVar8);
            }
            *(uint *)(this + 0x50) = *(int *)(this + 0x50) + uVar2;
            *(int *)(this + 0x54) = iVar3 + (int)(__n >> 2);
          }
        }
        else {
          fVar20 = (float)NEON_ucvtf((uint)(byte)this_04[499]);
          traverseArmature(this,*(Armature **)(this_04 + 0x178),(fVar20 * param_2) / 255.0);
        }
      }
      uVar14 = uVar14 + 1;
      if ((ulong)(lVar4 >> 3) <= uVar14) break;
      lVar7 = *(long *)(param_1 + 0x78);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

