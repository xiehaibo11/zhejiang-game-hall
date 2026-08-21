
/* WARNING: Removing unreachable block (ram,0x00d29038) */
/* cocos2d::Bundle3D::parseNodesRecursivelyBinary(bool&, bool) */

long * __thiscall
cocos2d::Bundle3D::parseNodesRecursivelyBinary(Bundle3D *this,bool *param_1,bool param_2)

{
  BundleReader *this_00;
  ulong *puVar1;
  Mat4 *this_01;
  undefined8 *puVar2;
  Bundle3D BVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  ModelData *pMVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  basic_string *pbVar13;
  Bundle3D *__s1;
  uint uVar14;
  ModelData *pMVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  void *pvVar19;
  ulong uVar20;
  void *__dest;
  undefined4 local_13c;
  uint local_138;
  undefined4 uStack_134;
  ulong uStack_130;
  void *local_128;
  uint local_11c;
  ModelData *local_118;
  uint local_110;
  char local_10c [4];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [8];
  basic_string *local_100;
  char *local_f8;
  NodeData *local_f0;
  long lStack_e8;
  void *local_e0;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  this_00 = (BundleReader *)(this + 0xe0);
  BundleReader::readString();
  lVar9 = BundleReader::read(this_00,local_10c,1,1);
  if (lVar9 != 1) {
    plVar11 = (long *)0x0;
    goto joined_r0x00d29084;
  }
  if (local_10c[0] != '\0') {
    *param_1 = true;
  }
  Mat4::Mat4((Mat4 *)&local_b0);
  uVar10 = BundleReader::readMatrix(this_00,(float *)&local_b0);
  if ((uVar10 & 1) == 0) {
LAB_00d2931c:
    plVar11 = (long *)0x0;
  }
  else {
    local_110 = 0;
    pbVar13 = (basic_string *)0x4;
    lVar9 = BundleReader::read(this_00,&local_110,4,1);
    if (lVar9 != 1) goto LAB_00d2931c;
    plVar11 = operator_new(0x90,(nothrow_t *)&std::nothrow);
    if (plVar11 != (long *)0x0) {
      plVar11[5] = 0;
      *(undefined8 *)(plVar11 + 4) = 0;
      *plVar11 = (long)&PTR__NodeData_016d3488;
      plVar11[0xf] = 0;
      plVar11[0xe] = 0;
      plVar11[0x11] = 0;
      plVar11[0x10] = 0;
      plVar11[0xb] = 0;
      plVar11[10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
      plVar11[7] = 0;
      plVar11[6] = 0;
      plVar11[9] = 0;
      plVar11[8] = 0;
      plVar11[1] = 0;
      plVar11[2] = 0;
      plVar11[3] = 0;
      Mat4::Mat4((Mat4 *)(plVar11 + 4));
      plVar11[0xf] = 0;
      plVar11[0xe] = 0;
      plVar11[0x11] = 0;
      plVar11[0x10] = 0;
      plVar11[0xd] = 0;
      plVar11[0xc] = 0;
    }
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (plVar11 + 1) != local_108) {
      pbVar13 = (basic_string *)(ulong)((byte)local_108[0] >> 1);
      pcVar6 = (char *)((ulong)local_108 | 1);
      if (((byte)local_108[0] & 1) != 0) {
        pbVar13 = local_100;
        pcVar6 = local_f8;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (plVar11 + 1),pcVar6,(ulong)pbVar13);
    }
    if (local_110 == 0) {
      bVar16 = false;
    }
    else {
      uVar14 = 0;
      bVar16 = false;
      do {
        local_118 = operator_new(0x68,(nothrow_t *)&std::nothrow);
        if (local_118 != (ModelData *)0x0) {
          *(long *)(local_118 + 0x10) = 0;
          *(long *)(local_118 + 8) = 0;
          *(long *)(local_118 + 0x20) = 0;
          *(long *)(local_118 + 0x18) = 0;
          *(undefined ***)local_118 = &PTR__ModelData_016d34c0;
          *(long *)(local_118 + 0x30) = 0;
          *(long *)(local_118 + 0x28) = 0;
          *(long *)(local_118 + 0x40) = 0;
          *(long *)(local_118 + 0x38) = 0;
          *(long *)(local_118 + 0x50) = 0;
          *(long *)(local_118 + 0x48) = 0;
          *(long *)(local_118 + 0x60) = 0;
          *(long *)(local_118 + 0x58) = 0;
        }
        BundleReader::readString();
        pMVar7 = local_118;
        pMVar15 = local_118 + 8;
        if (((byte)*pMVar15 & 1) == 0) {
          *(undefined2 *)pMVar15 = 0;
        }
        else {
          **(undefined1 **)(local_118 + 0x18) = 0;
          *(long *)(local_118 + 0x10) = 0;
          if (((byte)local_118[8] & 1) != 0) {
            operator_delete(*(void **)(local_118 + 0x18));
            *(long *)(pMVar7 + 8) = 0;
          }
        }
        *(void **)(pMVar7 + 0x18) = local_e0;
        *(long *)(pMVar7 + 0x10) = lStack_e8;
        *(NodeData **)pMVar15 = local_f0;
        BundleReader::readString();
        pMVar7 = local_118;
        pMVar15 = local_118 + 0x20;
        if (((byte)*pMVar15 & 1) == 0) {
          *(undefined2 *)pMVar15 = 0;
        }
        else {
          **(undefined1 **)(local_118 + 0x30) = 0;
          *(long *)(local_118 + 0x28) = 0;
          if (((byte)local_118[0x20] & 1) != 0) {
            operator_delete(*(void **)(local_118 + 0x30));
            *(long *)(pMVar7 + 0x20) = 0;
          }
        }
        *(void **)(pMVar7 + 0x30) = local_e0;
        *(long *)(pMVar7 + 0x28) = lStack_e8;
        *(NodeData **)pMVar15 = local_f0;
        uVar10 = (ulong)((byte)local_118[8] >> 1);
        if (((byte)local_118[8] & 1) != 0) {
          uVar10 = *(ulong *)(local_118 + 0x10);
        }
        if (uVar10 == 0) {
LAB_00d29268:
          std::__ndk1::operator+((__ndk1 *)"Node ",(char *)(plVar11 + 1),pbVar13);
          pbVar12 = (byte *)std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_f0," part is missing meshPartId or materialId",0x29);
          bVar4 = *pbVar12;
          pvVar19 = *(void **)(pbVar12 + 0x10);
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
          pbVar12[0x10] = 0;
          pbVar12[0x11] = 0;
          pbVar12[0x12] = 0;
          pbVar12[0x13] = 0;
          pbVar12[0x14] = 0;
          pbVar12[0x15] = 0;
          pbVar12[0x16] = 0;
          pbVar12[0x17] = 0;
          if (((ulong)local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          if (local_118 != (ModelData *)0x0) {
            (**(code **)(*(long *)local_118 + 8))();
          }
          local_118 = (ModelData *)0x0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          if ((bVar4 & 1) != 0) {
            operator_delete(pvVar19);
          }
          goto LAB_00d2931c;
        }
        uVar10 = (ulong)((byte)local_118[0x20] >> 1);
        if (((byte)local_118[0x20] & 1) != 0) {
          uVar10 = *(ulong *)(local_118 + 0x28);
        }
        if (uVar10 == 0) goto LAB_00d29268;
        local_11c = 0;
        lVar9 = BundleReader::read(this_00,&local_11c,4,1);
        if (lVar9 != 1) {
          if (local_118 != (ModelData *)0x0) {
            (**(code **)(*(long *)local_118 + 8))();
          }
          local_118 = (ModelData *)0x0;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          goto LAB_00d2931c;
        }
        if (local_11c != 0) {
          uVar17 = 0;
          do {
            BundleReader::readString();
            pMVar7 = local_118;
            pvVar19 = local_128;
            uVar10 = uStack_130;
            puVar1 = *(ulong **)(local_118 + 0x40);
            if (puVar1 == *(ulong **)(local_118 + 0x48)) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)(local_118 + 0x38),(basic_string *)&local_138);
            }
            else {
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              if ((local_138 & 1) == 0) {
                puVar1[2] = (ulong)local_128;
                puVar1[1] = uStack_130;
                *puVar1 = CONCAT44(uStack_134,local_138);
              }
              else {
                if (0xffffffffffffffef < uStack_130) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_130 < 0x17) {
                  __dest = (void *)((long)puVar1 + 1);
                  *(char *)puVar1 = (char)((int)uStack_130 << 1);
                  if (uStack_130 != 0) goto LAB_00d28e20;
                }
                else {
                  uVar20 = uStack_130 + 0x10 & 0xfffffffffffffff0;
                  __dest = operator_new(uVar20);
                  puVar1[1] = uVar10;
                  puVar1[2] = (ulong)__dest;
                  *puVar1 = uVar20 | 1;
LAB_00d28e20:
                  memcpy(__dest,pvVar19,uVar10);
                }
                *(undefined1 *)((long)__dest + uVar10) = 0;
              }
              *(ulong **)(pMVar7 + 0x40) = puVar1 + 3;
            }
            Mat4::Mat4((Mat4 *)&local_f0);
            uVar10 = BundleReader::readMatrix(this_00,(float *)&local_f0);
            pMVar7 = local_118;
            if ((uVar10 & 1) == 0) {
              if (local_118 != (ModelData *)0x0) {
                (**(code **)(*(long *)local_118 + 8))(local_118);
              }
              local_118 = (ModelData *)0x0;
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 8))(plVar11);
                plVar11 = (long *)0x0;
              }
              bVar16 = true;
            }
            else {
              this_01 = *(Mat4 **)(local_118 + 0x58);
              if (this_01 == *(Mat4 **)(local_118 + 0x60)) {
                std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
                __push_back_slow_path<cocos2d::Mat4_const&>
                          ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                           (local_118 + 0x50),(Mat4 *)&local_f0);
                bVar16 = false;
              }
              else {
                Mat4::Mat4(this_01,(Mat4 *)&local_f0);
                bVar16 = false;
                *(Mat4 **)(pMVar7 + 0x58) = this_01 + 0x40;
              }
            }
            Mat4::~Mat4((Mat4 *)&local_f0);
            if ((local_138 & 1) != 0) {
              operator_delete(local_128);
            }
            if (bVar16) goto LAB_00d2931c;
            uVar17 = uVar17 + 1;
          } while (uVar17 < local_11c);
          bVar16 = true;
        }
        local_f0 = (NodeData *)((ulong)local_f0 & 0xffffffff00000000);
        pbVar13 = (basic_string *)0x4;
        lVar9 = BundleReader::read(this_00,&local_f0,4,1);
        if (lVar9 != 1) {
          if (local_118 != (ModelData *)0x0) {
            (**(code **)(*(long *)local_118 + 8))();
          }
          local_118 = (ModelData *)0x0;
          if (plVar11 != (long *)0x0) {
LAB_00d28ff8:
            local_118 = (ModelData *)0x0;
            (**(code **)(*plVar11 + 8))(plVar11);
          }
          goto LAB_00d2931c;
        }
        if ((uint)local_f0 != 0) {
          uVar17 = 0;
          do {
            local_138 = 0;
            pbVar13 = (basic_string *)0x4;
            lVar9 = BundleReader::read(this_00,&local_138,4,1);
            if (lVar9 != 1) {
              if (local_118 != (ModelData *)0x0) {
LAB_00d28fe4:
                (**(code **)(*(long *)local_118 + 8))();
              }
LAB_00d28ff0:
              local_118 = (ModelData *)0x0;
              if (plVar11 == (long *)0x0) goto LAB_00d2931c;
              goto LAB_00d28ff8;
            }
            if (local_138 != 0) {
              uVar18 = 0;
              do {
                local_13c = 0;
                pbVar13 = (basic_string *)0x4;
                lVar9 = BundleReader::read(this_00,&local_13c,4,1);
                if (lVar9 != 1) {
                  if (local_118 == (ModelData *)0x0) goto LAB_00d28ff0;
                  goto LAB_00d28fe4;
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 < local_138);
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < (uint)local_f0);
        }
        puVar2 = (undefined8 *)plVar11[0xd];
        if (puVar2 == (undefined8 *)plVar11[0xe]) {
          std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
          __push_back_slow_path<cocos2d::ModelData*const&>
                    ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                     (plVar11 + 0xc),&local_118);
        }
        else {
          *puVar2 = local_118;
          plVar11[0xd] = (long)(puVar2 + 1);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_110);
    }
    BVar3 = this[0x38];
    uVar10 = (ulong)((byte)BVar3 >> 1);
    if (((byte)BVar3 & 1) != 0) {
      uVar10 = *(ulong *)(this + 0x40);
    }
    if (uVar10 == 3) {
      __s1 = *(Bundle3D **)(this + 0x48);
      if (((byte)BVar3 & 1) == 0) {
        __s1 = this + 0x39;
      }
      iVar8 = memcmp(__s1,&DAT_0149b808,3);
      if ((((iVar8 != 0) && (iVar8 = memcmp(__s1,&DAT_012f2699,3), iVar8 != 0)) &&
          (iVar8 = memcmp(__s1,"0.3",3), iVar8 != 0)) &&
         (((iVar8 = memcmp(__s1,&DAT_013c6afc,3), iVar8 != 0 &&
           (iVar8 = memcmp(__s1,&DAT_01418e73,3), iVar8 != 0)) &&
          (iVar8 = memcmp(__s1,&DAT_01418e8f,3), iVar8 != 0)))) goto LAB_00d29188;
      if (bVar16 || param_2) {
        local_90 = Mat4::IDENTITY._32_8_;
        lStack_88 = Mat4::IDENTITY._40_8_;
        lStack_80 = Mat4::IDENTITY._48_8_;
        lStack_78 = Mat4::IDENTITY._56_8_;
        local_b0 = Mat4::IDENTITY._0_8_;
        lStack_a8 = Mat4::IDENTITY._8_8_;
        lStack_a0 = Mat4::IDENTITY._16_8_;
        lStack_98 = Mat4::IDENTITY._24_8_;
      }
      plVar11[9] = lStack_88;
      plVar11[8] = local_90;
      plVar11[0xb] = lStack_78;
      plVar11[10] = lStack_80;
      plVar11[5] = lStack_a8;
      plVar11[4] = local_b0;
      plVar11[7] = lStack_98;
      plVar11[6] = lStack_a0;
    }
    else {
LAB_00d29188:
      plVar11[9] = lStack_88;
      plVar11[8] = local_90;
      plVar11[0xb] = lStack_78;
      plVar11[10] = lStack_80;
      plVar11[5] = lStack_a8;
      plVar11[4] = local_b0;
      plVar11[7] = lStack_98;
      plVar11[6] = lStack_a0;
    }
    local_138 = 0;
    lVar9 = BundleReader::read(this_00,&local_138,4,1);
    if (lVar9 != 1) {
      (**(code **)(*plVar11 + 8))(plVar11);
      goto LAB_00d2931c;
    }
    if (local_138 != 0) {
      uVar14 = 0;
      do {
        local_f0 = (NodeData *)parseNodesRecursivelyBinary(this,param_1,param_2);
        puVar1 = (ulong *)plVar11[0x10];
        if (puVar1 == (ulong *)plVar11[0x11]) {
          std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
          __push_back_slow_path<cocos2d::NodeData*const&>
                    ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                     (plVar11 + 0xf),&local_f0);
        }
        else {
          *puVar1 = (ulong)local_f0;
          plVar11[0x10] = (long)(puVar1 + 1);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_138);
    }
  }
  Mat4::~Mat4((Mat4 *)&local_b0);
joined_r0x00d29084:
  if (((byte)local_108[0] & 1) != 0) {
    operator_delete(local_f8);
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar11;
}

