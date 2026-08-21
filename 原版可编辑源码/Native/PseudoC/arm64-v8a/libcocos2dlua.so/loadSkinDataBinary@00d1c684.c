
/* cocos2d::Bundle3D::loadSkinDataBinary(cocos2d::SkinData*) */

undefined8 __thiscall cocos2d::Bundle3D::loadSkinDataBinary(Bundle3D *this,SkinData *param_1)

{
  BundleReader *this_00;
  SkinData *pSVar1;
  Mat4 *pMVar2;
  undefined8 *puVar3;
  undefined1 *__s2;
  void *pvVar4;
  size_t sVar5;
  ulong *puVar6;
  int *piVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  bool bVar11;
  size_t sVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  __tree_node_base *p_Var18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  SkinData *pSVar22;
  undefined8 uVar23;
  Mat4 *pMVar24;
  SkinData *pSVar25;
  SkinData *pSVar26;
  __tree_node_base *p_Var27;
  void *__dest;
  vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *this_01;
  basic_string local_1d0 [8];
  size_t local_1c8;
  void *local_1c0;
  int local_1b4;
  basic_string local_1b0 [8];
  size_t local_1a8;
  void *local_1a0;
  uint local_198;
  uint local_194;
  ulong local_190;
  size_t sStack_188;
  undefined1 *local_180;
  basic_string local_178;
  undefined7 uStack_177;
  ulong uStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  size_t sStack_130;
  undefined1 *local_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  float afStack_f8 [16];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  long local_78;
  
  lVar10 = tpidr_el0;
  local_78 = *(long *)(lVar10 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b8,"");
  lVar16 = seekToFirstType(this,0x24,(basic_string *)local_b8);
  if (((byte)local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
  uVar23 = 0;
  if (lVar16 != 0) {
    this_00 = (BundleReader *)(this + 0xe0);
    BundleReader::readString();
    uVar17 = BundleReader::readMatrix(this_00,(float *)local_b8);
    if ((((uVar17 & 1) == 0) || (lVar16 = BundleReader::read(this_00,&local_194,4,1), lVar16 != 1))
       || (local_194 == 0)) {
LAB_00d1ce6c:
      uVar23 = 0;
    }
    else {
      uVar13 = 0;
      do {
        BundleReader::readString();
        pvVar4 = local_168;
        uVar17 = uStack_170;
        puVar6 = *(ulong **)(param_1 + 8);
        if (puVar6 == *(ulong **)(param_1 + 0x10)) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)param_1,&local_178);
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          if (((byte)local_178 & 1) == 0) {
            puVar6[2] = (ulong)local_168;
            puVar6[1] = uStack_170;
            *puVar6 = CONCAT71(uStack_177,local_178);
          }
          else {
            if (0xffffffffffffffef < uStack_170) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_170 < 0x17) {
              __dest = (void *)((long)puVar6 + 1);
              *(char *)puVar6 = (char)((int)uStack_170 << 1);
              if (uStack_170 != 0) goto LAB_00d1c7d8;
            }
            else {
              uVar19 = uStack_170 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar19);
              puVar6[1] = uVar17;
              puVar6[2] = (ulong)__dest;
              *puVar6 = uVar19 | 1;
LAB_00d1c7d8:
              memcpy(__dest,pvVar4,uVar17);
            }
            *(undefined1 *)((long)__dest + uVar17) = 0;
          }
          *(ulong **)(param_1 + 8) = puVar6 + 3;
        }
        uVar17 = BundleReader::readMatrix(this_00,afStack_f8);
        if ((uVar17 & 1) == 0) {
          bVar11 = true;
        }
        else {
          Mat4::Mat4((Mat4 *)&local_138,afStack_f8);
          pMVar24 = *(Mat4 **)(param_1 + 0x38);
          if (pMVar24 < *(Mat4 **)(param_1 + 0x40)) {
            Mat4::Mat4(pMVar24,(Mat4 *)&local_138);
            *(Mat4 **)(param_1 + 0x38) = pMVar24 + 0x40;
          }
          else {
            std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
            __push_back_slow_path<cocos2d::Mat4>
                      ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                       (param_1 + 0x30),(Mat4 *)&local_138);
          }
          Mat4::~Mat4((Mat4 *)&local_138);
          bVar11 = false;
        }
        if (((byte)local_178 & 1) != 0) {
          operator_delete(local_168);
        }
        if (bVar11) goto LAB_00d1ce6c;
        uVar17 = (ulong)local_194;
        uVar13 = uVar13 + 1;
      } while (uVar13 < local_194);
      this_01 = (vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(param_1 + 0x48);
      pMVar24 = *(Mat4 **)(param_1 + 0x50);
      uVar19 = (long)pMVar24 - *(long *)this_01 >> 6;
      if (uVar19 < uVar17) {
        std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::__append
                  (this_01,uVar17 - uVar19);
      }
      else if (uVar19 != uVar17) {
        pMVar2 = (Mat4 *)(*(long *)this_01 + uVar17 * 0x40);
        while (pMVar2 != pMVar24) {
          pMVar24 = pMVar24 + -0x40;
          Mat4::~Mat4(pMVar24);
        }
        *(Mat4 **)(param_1 + 0x50) = pMVar2;
      }
      BundleReader::readString();
      if (((byte)local_190._0_1_ & 1) != 0) {
        *local_180 = 0;
        sStack_188 = 0;
        if (((byte)local_190._0_1_ & 1) != 0) {
          operator_delete(local_180);
        }
      }
      sStack_188 = sStack_130;
      local_190 = local_138;
      local_180 = local_128;
      BundleReader::readMatrix(this_00,(float *)local_b8);
      pbVar21 = *(byte **)param_1;
      pbVar8 = *(byte **)(param_1 + 8);
      if (pbVar21 != pbVar8) {
        uVar13 = 0;
        sVar12 = local_190 >> 1 & 0x7f;
        __s2 = (undefined1 *)((ulong)&local_190 | 1);
        if ((local_190 & 1) != 0) {
          sVar12 = sStack_188;
          __s2 = local_180;
        }
        do {
          bVar9 = *pbVar21;
          sVar5 = (ulong)(bVar9 >> 1);
          if ((bVar9 & 1) != 0) {
            sVar5 = *(size_t *)(pbVar21 + 8);
          }
          if (sVar5 == sVar12) {
            pbVar20 = *(byte **)(pbVar21 + 0x10);
            if ((bVar9 & 1) == 0) {
              pbVar20 = pbVar21 + 1;
            }
            if ((bVar9 & 1) == 0) {
              if (sVar12 == 0) {
LAB_00d1c9e4:
                Mat4::Mat4((Mat4 *)&local_138,(float *)local_b8);
                puVar6 = (ulong *)(*(long *)this_01 + (ulong)uVar13 * 0x40);
                puVar6[5] = uStack_110;
                puVar6[4] = local_118;
                puVar6[7] = uStack_100;
                puVar6[6] = uStack_108;
                puVar6[1] = sStack_130;
                *puVar6 = local_138;
                puVar6[3] = uStack_120;
                puVar6[2] = (ulong)local_128;
                goto LAB_00d1ca78;
              }
              uVar17 = 0;
              while (pbVar21[uVar17 + 1] == __s2[uVar17]) {
                uVar17 = uVar17 + 1;
                if (bVar9 >> 1 == uVar17) goto LAB_00d1c9e4;
              }
            }
            else if ((sVar12 == 0) || (iVar15 = memcmp(pbVar20,__s2,sVar12), iVar15 == 0))
            goto LAB_00d1c9e4;
          }
          pbVar21 = pbVar21 + 0x18;
          uVar13 = uVar13 + 1;
        } while (pbVar21 != pbVar8);
      }
      SkinData::addNodeBoneNames(param_1,(basic_string *)&local_190);
      uVar13 = SkinData::getBoneNameIndex(param_1,(basic_string *)&local_190);
      Mat4::Mat4((Mat4 *)&local_138,(float *)local_b8);
      pMVar24 = *(Mat4 **)(param_1 + 0x68);
      if (pMVar24 < *(Mat4 **)(param_1 + 0x70)) {
        Mat4::Mat4(pMVar24,(Mat4 *)&local_138);
        *(Mat4 **)(param_1 + 0x68) = pMVar24 + 0x40;
      }
      else {
        std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
        __push_back_slow_path<cocos2d::Mat4>
                  ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(param_1 + 0x60),
                   (Mat4 *)&local_138);
      }
LAB_00d1ca78:
      Mat4::~Mat4((Mat4 *)&local_138);
      *(uint *)(param_1 + 0x90) = uVar13;
      BundleReader::read(this_00,&local_198,4,1);
      if (local_198 != 0) {
        uVar13 = 0;
        pSVar1 = param_1 + 0x80;
        do {
          BundleReader::readString();
          pbVar21 = *(byte **)param_1;
          pbVar8 = *(byte **)(param_1 + 8);
          if (pbVar21 != pbVar8) {
            iVar15 = 0;
            sVar12 = (ulong)((byte)local_1b0[0] >> 1);
            pvVar4 = (void *)((ulong)local_1b0 | 1);
            if (((byte)local_1b0[0] & 1) != 0) {
              sVar12 = local_1a8;
              pvVar4 = local_1a0;
            }
            do {
              bVar9 = *pbVar21;
              sVar5 = (ulong)(bVar9 >> 1);
              if ((bVar9 & 1) != 0) {
                sVar5 = *(size_t *)(pbVar21 + 8);
              }
              if (sVar5 == sVar12) {
                pbVar20 = *(byte **)(pbVar21 + 0x10);
                if ((bVar9 & 1) == 0) {
                  pbVar20 = pbVar21 + 1;
                }
                if ((bVar9 & 1) == 0) {
                  if (sVar12 == 0) goto LAB_00d1cb88;
                  uVar17 = 0;
                  while (pbVar21[uVar17 + 1] == *(byte *)((long)pvVar4 + uVar17)) {
                    uVar17 = uVar17 + 1;
                    if (bVar9 >> 1 == uVar17) goto LAB_00d1cb88;
                  }
                }
                else if ((sVar12 == 0) || (iVar14 = memcmp(pbVar20,pvVar4,sVar12), iVar14 == 0))
                goto LAB_00d1cb88;
              }
              pbVar21 = pbVar21 + 0x18;
              iVar15 = iVar15 + 1;
            } while (pbVar21 != pbVar8);
          }
          iVar15 = -1;
LAB_00d1cb88:
          local_1b4 = iVar15;
          BundleReader::readString();
          uVar17 = BundleReader::readMatrix(this_00,(float *)&local_138);
          if ((uVar17 & 1) == 0) {
            bVar11 = true;
          }
          else {
            if (local_1b4 < 0) {
              SkinData::addNodeBoneNames(param_1,local_1b0);
              local_1b4 = SkinData::getBoneNameIndex(param_1,local_1b0);
              Mat4::Mat4((Mat4 *)&local_178,(float *)&local_138);
              pMVar24 = *(Mat4 **)(param_1 + 0x68);
              if (pMVar24 < *(Mat4 **)(param_1 + 0x70)) {
                Mat4::Mat4(pMVar24,(Mat4 *)&local_178);
                *(Mat4 **)(param_1 + 0x68) = pMVar24 + 0x40;
              }
              else {
                std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
                __push_back_slow_path<cocos2d::Mat4>
                          ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                           (param_1 + 0x60),(Mat4 *)&local_178);
              }
            }
            else {
              Mat4::Mat4((Mat4 *)&local_178,(float *)&local_138);
              puVar3 = (undefined8 *)(*(long *)this_01 + (long)local_1b4 * 0x40);
              puVar3[5] = uStack_150;
              puVar3[4] = local_158;
              puVar3[7] = uStack_140;
              puVar3[6] = local_148;
              puVar3[1] = uStack_170;
              *puVar3 = CONCAT71(uStack_177,local_178);
              puVar3[3] = uStack_160;
              puVar3[2] = local_168;
            }
            Mat4::~Mat4((Mat4 *)&local_178);
            pbVar21 = *(byte **)param_1;
            pbVar8 = *(byte **)(param_1 + 8);
            if (pbVar21 != pbVar8) {
              iVar15 = 0;
              sVar12 = (ulong)((byte)local_1d0[0] >> 1);
              pvVar4 = (void *)((ulong)local_1d0 | 1);
              if (((byte)local_1d0[0] & 1) != 0) {
                sVar12 = local_1c8;
                pvVar4 = local_1c0;
              }
              do {
                bVar9 = *pbVar21;
                sVar5 = (ulong)(bVar9 >> 1);
                if ((bVar9 & 1) != 0) {
                  sVar5 = *(size_t *)(pbVar21 + 8);
                }
                if (sVar5 == sVar12) {
                  pbVar20 = *(byte **)(pbVar21 + 0x10);
                  if ((bVar9 & 1) == 0) {
                    pbVar20 = pbVar21 + 1;
                  }
                  if ((bVar9 & 1) == 0) {
                    if (sVar12 == 0) goto LAB_00d1cd68;
                    uVar17 = 0;
                    while (pbVar21[uVar17 + 1] == *(byte *)((long)pvVar4 + uVar17)) {
                      uVar17 = uVar17 + 1;
                      if (bVar9 >> 1 == uVar17) goto LAB_00d1cd68;
                    }
                  }
                  else if ((sVar12 == 0) || (iVar14 = memcmp(pbVar20,pvVar4,sVar12), iVar14 == 0))
                  goto LAB_00d1cd68;
                }
                pbVar21 = pbVar21 + 0x18;
                iVar15 = iVar15 + 1;
              } while (pbVar21 != pbVar8);
            }
            SkinData::addNodeBoneNames(param_1,local_1d0);
            iVar15 = SkinData::getBoneNameIndex(param_1,local_1d0);
LAB_00d1cd68:
            pSVar25 = *(SkinData **)pSVar1;
            pSVar22 = pSVar1;
            pSVar26 = pSVar1;
            while (pSVar25 != (SkinData *)0x0) {
              while (pSVar26 = pSVar25, iVar15 < *(int *)(pSVar26 + 0x20)) {
                pSVar22 = pSVar26;
                pSVar25 = *(SkinData **)pSVar26;
                if (*(SkinData **)pSVar26 == (SkinData *)0x0) {
                  p_Var27 = *(__tree_node_base **)pSVar26;
                  goto joined_r0x00d1ce04;
                }
              }
              if (iVar15 <= *(int *)(pSVar26 + 0x20)) break;
              pSVar22 = pSVar26 + 8;
              pSVar25 = *(SkinData **)pSVar22;
            }
            p_Var27 = *(__tree_node_base **)pSVar22;
joined_r0x00d1ce04:
            if (p_Var27 == (__tree_node_base *)0x0) {
              p_Var27 = operator_new(0x40);
              *(int *)(p_Var27 + 0x20) = iVar15;
              *(undefined8 *)(p_Var27 + 0x30) = 0;
              *(undefined8 *)(p_Var27 + 0x38) = 0;
              *(undefined8 *)(p_Var27 + 0x28) = 0;
              *(undefined8 *)p_Var27 = 0;
              *(undefined8 *)(p_Var27 + 8) = 0;
              *(SkinData **)(p_Var27 + 0x10) = pSVar26;
              *(__tree_node_base **)pSVar22 = p_Var27;
              p_Var18 = p_Var27;
              if (**(long **)(param_1 + 0x78) != 0) {
                *(long *)(param_1 + 0x78) = **(long **)(param_1 + 0x78);
                p_Var18 = *(__tree_node_base **)pSVar22;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        (*(__tree_node_base **)(param_1 + 0x80),p_Var18);
              *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
            }
            piVar7 = *(int **)(p_Var27 + 0x30);
            if (piVar7 == *(int **)(p_Var27 + 0x38)) {
              std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
              __push_back_slow_path<int_const&>
                        ((vector<int,std::__ndk1::allocator<int>> *)(p_Var27 + 0x28),&local_1b4);
              bVar11 = false;
            }
            else {
              bVar11 = false;
              *piVar7 = local_1b4;
              *(int **)(p_Var27 + 0x30) = piVar7 + 1;
            }
          }
          if (((byte)local_1d0[0] & 1) != 0) {
            operator_delete(local_1c0);
          }
          if (((byte)local_1b0[0] & 1) != 0) {
            operator_delete(local_1a0);
          }
          if (bVar11) goto LAB_00d1ce6c;
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_198);
      }
      uVar23 = 1;
    }
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar23;
}

