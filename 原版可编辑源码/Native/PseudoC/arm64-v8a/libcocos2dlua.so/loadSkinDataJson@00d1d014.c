
/* cocos2d::Bundle3D::loadSkinDataJson(cocos2d::SkinData*) */

void __thiscall cocos2d::Bundle3D::loadSkinDataJson(Bundle3D *this,SkinData *param_1)

{
  Mat4 *pMVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  Mat4 *pMVar15;
  int *piVar16;
  int *piVar17;
  double dVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [16];
  void *local_b0;
  Mat4 local_a8 [64];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  piVar16 = *(int **)(this + 0x70);
  uVar3 = *(uint *)(this + 0x68);
  uVar9 = (ulong)uVar3;
  piVar17 = piVar16 + uVar9 * 0xc;
  piVar10 = piVar16;
  if (uVar3 == 0) {
LAB_00d1d0c8:
    if (piVar17 == piVar10) goto LAB_00d1d4ec;
    if (uVar3 != 0) {
      lVar13 = uVar9 * 0x30;
      do {
        iVar6 = *piVar16;
        if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar16 + 0x15);
        }
        if (iVar6 == 4) {
          piVar10 = *(int **)(piVar16 + 2);
          if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar16;
          }
          if ((piVar10 == (int *)&DAT_014190b3) || (*piVar10 == 0x6e696b73)) goto LAB_00d1d138;
        }
        lVar13 = lVar13 + -0x30;
        piVar16 = piVar16 + 0xc;
      } while (lVar13 != 0);
LAB_00d1d5c8:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d1d5d8;
    }
LAB_00d1d138:
    if (piVar16 == piVar17) goto LAB_00d1d5c8;
    piVar17 = *(int **)(*(uint **)(piVar16 + 8) + 2);
    uVar3 = **(uint **)(piVar16 + 8);
    uVar9 = (ulong)uVar3;
    piVar7 = piVar17 + uVar9 * 0xc;
    piVar10 = piVar17;
    if (uVar3 != 0) {
      lVar13 = uVar9 * 0x30;
      do {
        iVar6 = *piVar10;
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
        }
        if (iVar6 == 5) {
          piVar2 = *(int **)(piVar10 + 2);
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            piVar2 = piVar10;
          }
          if ((piVar2 == (int *)"bones") || (iVar6 = memcmp("bones",piVar2,5), iVar6 == 0))
          goto LAB_00d1d1cc;
        }
        lVar13 = lVar13 + -0x30;
        piVar10 = piVar10 + 0xc;
      } while (lVar13 != 0);
      goto LAB_00d1d4ec;
    }
LAB_00d1d1cc:
    if (piVar7 == piVar10) goto LAB_00d1d4ec;
    if (uVar3 == 0) {
      if (piVar17 == piVar7) goto LAB_00d1d500;
LAB_00d1d248:
      if (piVar17[6] != 0) {
        uVar9 = 0;
        do {
          puVar14 = (uint *)(*(long *)(piVar17 + 8) + uVar9 * 0x18);
          piVar7 = *(int **)(puVar14 + 2);
          uVar3 = *puVar14;
          piVar10 = piVar7;
          if (uVar3 == 0) {
LAB_00d1d314:
            if (piVar10 == piVar7 + (ulong)uVar3 * 0xc) goto LAB_00d1d334;
            piVar7 = piVar10 + 6;
            if ((*(byte *)((long)piVar10 + 0x2f) >> 4 & 1) == 0) goto LAB_00d1d344;
          }
          else {
            lVar13 = (ulong)uVar3 * 0x30;
            do {
              iVar6 = *piVar10;
              if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
              }
              if (iVar6 == 4) {
                piVar2 = *(int **)(piVar10 + 2);
                if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                  piVar2 = piVar10;
                }
                if ((piVar2 == (int *)&UNK_014190be) || (*piVar2 == 0x65646f6e)) goto LAB_00d1d314;
              }
              lVar13 = lVar13 + -0x30;
              piVar10 = piVar10 + 0xc;
            } while (lVar13 != 0);
LAB_00d1d334:
            piVar7 = (int *)&rapidjson::
                             GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                             ::
                             operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                             ::buffer;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
LAB_00d1d344:
            piVar7 = *(int **)(piVar7 + 2);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_c0,(char *)piVar7);
          SkinData::addSkinBoneNames(param_1,(basic_string *)local_c0);
          Mat4::Mat4(local_a8);
          uVar3 = *puVar14;
          piVar7 = *(int **)(puVar14 + 2);
          piVar10 = piVar7;
          if (uVar3 == 0) {
LAB_00d1d3d8:
            if (piVar10 == piVar7 + (ulong)uVar3 * 0xc) goto LAB_00d1d470;
            if (piVar10[6] != 0) {
              lVar13 = 0;
              uVar8 = 0;
              do {
                lVar11 = *(long *)(piVar10 + 8);
                uVar4 = *(ushort *)(lVar11 + lVar13 + 0x16);
                if ((uVar4 >> 9 & 1) == 0) {
                  if ((uVar4 >> 5 & 1) == 0) {
                    if ((uVar4 >> 6 & 1) == 0) {
                      if ((uVar4 >> 7 & 1) == 0) {
                        dVar18 = (double)*(ulong *)(lVar11 + lVar13);
                      }
                      else {
                        dVar18 = (double)(long)*(ulong *)(lVar11 + lVar13);
                      }
                    }
                    else {
                      dVar18 = (double)NEON_ucvtf((ulong)*(uint *)(lVar11 + lVar13));
                    }
                  }
                  else {
                    dVar18 = (double)(long)*(int *)(lVar11 + lVar13);
                  }
                }
                else {
                  dVar18 = *(double *)(lVar11 + lVar13);
                }
                *(float *)(local_a8 + uVar8 * 4) = (float)dVar18;
                uVar8 = uVar8 + 1;
                lVar13 = lVar13 + 0x18;
              } while (uVar8 < (uint)piVar10[6]);
            }
          }
          else {
            lVar13 = (ulong)uVar3 * 0x30;
            do {
              iVar6 = *piVar10;
              if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
              }
              if (iVar6 == 9) {
                piVar2 = *(int **)(piVar10 + 2);
                if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
                  piVar2 = piVar10;
                }
                if ((piVar2 == (int *)"bindshape") ||
                   (iVar6 = memcmp("bindshape",piVar2,9), iVar6 == 0)) goto LAB_00d1d3d8;
              }
              lVar13 = lVar13 + -0x30;
              piVar10 = piVar10 + 0xc;
            } while (lVar13 != 0);
LAB_00d1d470:
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          pMVar15 = *(Mat4 **)(param_1 + 0x38);
          if (pMVar15 == *(Mat4 **)(param_1 + 0x40)) {
            std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
            __push_back_slow_path<cocos2d::Mat4_const&>
                      ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                       (param_1 + 0x30),local_a8);
          }
          else {
            Mat4::Mat4(pMVar15,local_a8);
            *(Mat4 **)(param_1 + 0x38) = pMVar15 + 0x40;
          }
          Mat4::~Mat4(local_a8);
          if (((byte)local_c0[0] & 1) != 0) {
            operator_delete(local_b0);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (uint)piVar17[6]);
      }
    }
    else {
      lVar13 = uVar9 * 0x30;
      do {
        iVar6 = *piVar17;
        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar17 + 0x15);
        }
        if (iVar6 == 5) {
          piVar10 = *(int **)(piVar17 + 2);
          if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
            piVar10 = piVar17;
          }
          if ((piVar10 == (int *)"bones") || (iVar6 = memcmp("bones",piVar10,5), iVar6 == 0)) {
            if (piVar17 != piVar7) goto LAB_00d1d248;
            break;
          }
        }
        lVar13 = lVar13 + -0x30;
        piVar17 = piVar17 + 0xc;
      } while (lVar13 != 0);
LAB_00d1d500:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
    lVar12 = *(long *)(piVar16 + 8);
    lVar13 = *(long *)(param_1 + 0x48);
    pMVar15 = *(Mat4 **)(param_1 + 0x50);
    lVar11 = *(long *)(param_1 + 8) - *(long *)param_1 >> 3;
    uVar9 = lVar11 * -0x5555555555555555;
    uVar8 = (long)pMVar15 - lVar13 >> 6;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      if (uVar9 < uVar8) {
        pMVar1 = (Mat4 *)(lVar13 + lVar11 * -0x5555555555555540);
        while (pMVar1 != pMVar15) {
          pMVar15 = pMVar15 + -0x40;
          Mat4::~Mat4(pMVar15);
        }
        *(Mat4 **)(param_1 + 0x50) = pMVar1;
      }
    }
    else {
      std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__append
                ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(param_1 + 0x48),
                 uVar9 - uVar8);
    }
    getChildMap((map *)(param_1 + 0x78),param_1,(GenericValue *)(lVar12 + 0x18));
    this = (Bundle3D *)0x1;
  }
  else {
    lVar13 = uVar9 * 0x30;
    do {
      iVar6 = *piVar10;
      if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar10 + 0x15);
      }
      if (iVar6 == 4) {
        piVar7 = *(int **)(piVar10 + 2);
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          piVar7 = piVar10;
        }
        if ((piVar7 == (int *)&DAT_014190b3) || (*piVar7 == 0x6e696b73)) goto LAB_00d1d0c8;
      }
      lVar13 = lVar13 + -0x30;
      piVar10 = piVar10 + 0xc;
    } while (lVar13 != 0);
LAB_00d1d4ec:
    this = (Bundle3D *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
LAB_00d1d5d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

