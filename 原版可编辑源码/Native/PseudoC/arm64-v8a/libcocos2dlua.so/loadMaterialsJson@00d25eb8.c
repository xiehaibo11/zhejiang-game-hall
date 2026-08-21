
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::Bundle3D::loadMaterialsJson(cocos2d::MaterialDatas&) */

void __thiscall cocos2d::Bundle3D::loadMaterialsJson(Bundle3D *this,MaterialDatas *param_1)

{
  long *plVar1;
  basic_string *pbVar2;
  int *piVar3;
  NMaterialData *pNVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  basic_string *__n;
  ulong *puVar8;
  undefined1 *__src;
  int iVar9;
  basic_string *pbVar10;
  Bundle3D *pBVar11;
  undefined8 uVar12;
  int *piVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  int *piVar18;
  uint *puVar19;
  ulong uVar20;
  uint *puVar21;
  int *piVar22;
  long lVar23;
  long *plVar24;
  ulong *puVar25;
  void *pvVar26;
  void *pvVar27;
  ulong local_110;
  basic_string *pbStack_108;
  void *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8;
  undefined7 uStack_f7;
  basic_string *pbStack_f0;
  void *local_e8;
  ulong *local_e0;
  ulong *puStack_d8;
  ulong *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  basic_string *pbStack_a8;
  void *local_a0;
  ulong uStack_98;
  basic_string *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  piVar22 = *(int **)(this + 0x70);
  uVar5 = *(uint *)(this + 0x68);
  uVar20 = (ulong)uVar5;
  piVar13 = piVar22 + uVar20 * 0xc;
  piVar18 = piVar22;
  if (uVar5 == 0) {
LAB_00d25f74:
    if (piVar13 != piVar18) {
      if (uVar5 == 0) {
        if (piVar22 == piVar13) goto LAB_00d2698c;
LAB_00d25fec:
        if (piVar22[6] != 0) {
          uVar20 = 0;
          do {
            uStack_c8 = 0;
            local_d0 = (ulong *)0x0;
            local_b8 = (void *)0x0;
            uStack_c0 = 0;
            puStack_d8 = (ulong *)0x0;
            local_e0 = (ulong *)0x0;
            puVar19 = (uint *)(*(long *)(piVar22 + 8) + uVar20 * 0x18);
            piVar13 = *(int **)(puVar19 + 2);
            uVar5 = *puVar19;
            piVar18 = piVar13;
            if (uVar5 == 0) {
LAB_00d26114:
              if (piVar18 == piVar13 + (ulong)uVar5 * 0xc) goto LAB_00d26134;
              piVar13 = piVar18 + 6;
              if ((*(byte *)((long)piVar18 + 0x2f) >> 4 & 1) == 0) goto LAB_00d26144;
            }
            else {
              lVar23 = (ulong)uVar5 * 0x30;
              do {
                iVar9 = *piVar18;
                if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                  iVar9 = 0x15 - *(char *)((long)piVar18 + 0x15);
                }
                if (iVar9 == 2) {
                  piVar3 = *(int **)(piVar18 + 2);
                  if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                    piVar3 = piVar18;
                  }
                  if ((piVar3 == (int *)0x143a510) || ((short)*piVar3 == 0x6469)) goto LAB_00d26114;
                }
                lVar23 = lVar23 + -0x30;
                piVar18 = piVar18 + 0xc;
              } while (lVar23 != 0);
LAB_00d26134:
              piVar13 = (int *)&rapidjson::
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
LAB_00d26144:
              piVar13 = *(int **)(piVar13 + 2);
            }
            pbVar10 = (basic_string *)strlen((char *)piVar13);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&uStack_c8,(char *)piVar13,(ulong)pbVar10);
            plVar24 = *(long **)(puVar19 + 2);
            uVar5 = *puVar19;
            uVar15 = (ulong)uVar5;
            plVar14 = plVar24 + uVar15 * 6;
            plVar17 = plVar24;
            if (uVar5 != 0) {
              lVar23 = uVar15 * 0x30;
              plVar16 = plVar24;
              do {
                iVar9 = (int)*plVar16;
                if ((*(ushort *)((long)plVar16 + 0x16) & 0x1000) != 0) {
                  iVar9 = 0x15 - *(char *)((long)plVar16 + 0x15);
                }
                if (iVar9 == 8) {
                  plVar1 = (long *)plVar16[1];
                  if ((*(ushort *)((long)plVar16 + 0x16) & 0x1000) != 0) {
                    plVar1 = plVar16;
                  }
                  plVar17 = plVar16;
                  if ((plVar1 == (long *)"textures") || (*plVar1 == 0x7365727574786574)) break;
                }
                lVar23 = lVar23 + -0x30;
                plVar16 = plVar16 + 6;
                plVar17 = plVar14;
              } while (lVar23 != 0);
            }
            if (plVar14 != plVar17) {
              if (uVar5 == 0) {
LAB_00d26278:
                if (plVar24 != plVar14) {
                  if ((int)plVar24[3] != 0) {
                    uVar15 = 0;
                    do {
                      uStack_98 = 0;
                      local_a0 = (void *)0x0;
                      local_88 = (undefined1 *)0x0;
                      local_90 = (basic_string *)0x0;
                      pbStack_a8 = (basic_string *)0x0;
                      local_b0 = 0;
                      puVar21 = (uint *)(plVar24[4] + uVar15 * 0x18);
                      puVar19 = puVar21 + 2;
                      plVar14 = *(long **)puVar19;
                      uVar5 = *puVar21;
                      plVar17 = plVar14;
                      if (uVar5 == 0) {
LAB_00d2632c:
                        if (plVar17 == plVar14 + (ulong)uVar5 * 6) goto LAB_00d2634c;
                        plVar14 = plVar17 + 3;
                        if ((*(byte *)((long)plVar17 + 0x2f) >> 4 & 1) == 0) goto LAB_00d2635c;
                      }
                      else {
                        lVar23 = (ulong)uVar5 * 0x30;
                        do {
                          iVar9 = (int)*plVar17;
                          if ((*(ushort *)((long)plVar17 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)plVar17 + 0x15);
                          }
                          if (iVar9 == 8) {
                            plVar16 = (long *)plVar17[1];
                            if ((*(ushort *)((long)plVar17 + 0x16) & 0x1000) != 0) {
                              plVar16 = plVar17;
                            }
                            if ((plVar16 == (long *)0x1409529) || (*plVar16 == 0x656d616e656c6966))
                            goto LAB_00d2632c;
                          }
                          lVar23 = lVar23 + -0x30;
                          plVar17 = plVar17 + 6;
                        } while (lVar23 != 0);
LAB_00d2634c:
                        plVar14 = &rapidjson::
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
LAB_00d2635c:
                        plVar14 = (long *)plVar14[1];
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>(&local_f8,(char *)plVar14);
                      pvVar26 = local_e8;
                      __n = pbStack_f0;
                      pbVar2 = (basic_string *)(ulong)((byte)local_f8 >> 1);
                      if (((byte)local_f8 & 1) != 0) {
                        pbVar2 = pbStack_f0;
                      }
                      if (pbVar2 == (basic_string *)0x0) {
                        pbStack_108 = (basic_string *)0x0;
                        local_100 = (void *)0x0;
                        local_110 = 0;
                        if (((byte)local_f8 & 1) == 0) {
                          local_110 = CONCAT71(uStack_f7,local_f8);
                          pbStack_108 = pbStack_f0;
                          local_100 = local_e8;
                        }
                        else {
                          if ((basic_string *)0xffffffffffffffef < pbStack_f0) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (pbStack_f0 < (basic_string *)0x17) {
                            local_110 = (ulong)(byte)((int)pbStack_f0 << 1);
                            pvVar27 = (void *)((ulong)&local_110 | 1);
                            if (pbStack_f0 != (basic_string *)0x0) goto LAB_00d26894;
                          }
                          else {
                            pbVar10 = pbStack_f0 + 0x10;
                            pvVar27 = operator_new((ulong)pbVar10 & 0xfffffffffffffff0);
                            local_110 = (ulong)pbVar10 & 0xfffffffffffffff0 | 1;
                            pbStack_108 = __n;
                            local_100 = pvVar27;
LAB_00d26894:
                            pbVar10 = __n;
                            memcpy(pvVar27,pvVar26,(size_t)__n);
                          }
                          *(basic_string *)((long)pvVar27 + (long)__n) = (basic_string)0x0;
                        }
                      }
                      else {
                        std::__ndk1::operator+
                                  ((__ndk1 *)(this + 8),(basic_string *)&local_f8,pbVar10);
                      }
                      if ((uStack_98 & 1) != 0) {
                        *local_88 = 0;
                        local_90 = (basic_string *)0x0;
                        if ((uStack_98 & 1) != 0) {
                          operator_delete(local_88);
                        }
                      }
                      local_88 = local_100;
                      local_90 = pbStack_108;
                      uStack_98 = local_110;
                      uVar5 = *puVar21;
                      piVar13 = *(int **)puVar19;
                      piVar18 = piVar13;
                      if (uVar5 == 0) {
LAB_00d26478:
                        if (piVar18 == piVar13 + (ulong)uVar5 * 0xc) goto LAB_00d26498;
                        piVar13 = piVar18 + 6;
                        if ((*(byte *)((long)piVar18 + 0x2f) >> 4 & 1) == 0) goto LAB_00d264a8;
                      }
                      else {
                        lVar23 = (ulong)uVar5 * 0x30;
                        do {
                          iVar9 = *piVar18;
                          if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)piVar18 + 0x15);
                          }
                          if (iVar9 == 4) {
                            piVar3 = *(int **)(piVar18 + 2);
                            if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                              piVar3 = piVar18;
                            }
                            if ((piVar3 == (int *)0x13ff2a0) || (*piVar3 == 0x65707974))
                            goto LAB_00d26478;
                          }
                          lVar23 = lVar23 + -0x30;
                          piVar18 = piVar18 + 0xc;
                        } while (lVar23 != 0);
LAB_00d26498:
                        piVar13 = (int *)&rapidjson::
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
LAB_00d264a8:
                        piVar13 = *(int **)(piVar13 + 2);
                      }
                      pBVar11 = (Bundle3D *)
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::basic_string<decltype(nullptr)>
                                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                            *)&local_110,(char *)piVar13);
                      local_80 = parseGLTextureType(pBVar11,(basic_string *)&local_110);
                      if ((local_110 & 1) != 0) {
                        operator_delete(local_100);
                      }
                      uVar5 = *puVar21;
                      piVar13 = *(int **)puVar19;
                      piVar18 = piVar13;
                      if (uVar5 == 0) {
LAB_00d26544:
                        if (piVar18 == piVar13 + (ulong)uVar5 * 0xc) goto LAB_00d2656c;
                        piVar13 = piVar18 + 6;
                        if ((*(byte *)((long)piVar18 + 0x2f) >> 4 & 1) == 0) goto LAB_00d26584;
                      }
                      else {
                        lVar23 = (ulong)uVar5 * 0x30;
                        do {
                          iVar9 = *piVar18;
                          if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)piVar18 + 0x15);
                          }
                          if (iVar9 == 9) {
                            piVar3 = *(int **)(piVar18 + 2);
                            if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                              piVar3 = piVar18;
                            }
                            if (piVar3 == (int *)"wrapModeU") goto LAB_00d26544;
                            pbVar10 = (basic_string *)0x9;
                            iVar9 = memcmp("wrapModeU",piVar3,9);
                            if (iVar9 == 0) goto LAB_00d26544;
                          }
                          lVar23 = lVar23 + -0x30;
                          piVar18 = piVar18 + 0xc;
                        } while (lVar23 != 0);
LAB_00d2656c:
                        piVar13 = (int *)&rapidjson::
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
LAB_00d26584:
                        piVar13 = *(int **)(piVar13 + 2);
                      }
                      pBVar11 = (Bundle3D *)
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::basic_string<decltype(nullptr)>
                                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                            *)&local_110,(char *)piVar13);
                      uStack_7c = parseGLType(pBVar11,(basic_string *)&local_110);
                      if ((local_110 & 1) != 0) {
                        operator_delete(local_100);
                      }
                      uVar5 = *puVar21;
                      piVar13 = *(int **)puVar19;
                      piVar18 = piVar13;
                      if (uVar5 == 0) {
LAB_00d26620:
                        if (piVar18 == piVar13 + (ulong)uVar5 * 0xc) goto LAB_00d26650;
                        piVar13 = piVar18 + 6;
                        if ((*(byte *)((long)piVar18 + 0x2f) >> 4 & 1) == 0) goto LAB_00d26670;
                      }
                      else {
                        lVar23 = (ulong)uVar5 * 0x30;
                        do {
                          iVar9 = *piVar18;
                          if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)piVar18 + 0x15);
                          }
                          if (iVar9 == 9) {
                            piVar3 = *(int **)(piVar18 + 2);
                            if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                              piVar3 = piVar18;
                            }
                            if (piVar3 == (int *)"wrapModeV") goto LAB_00d26620;
                            pbVar10 = (basic_string *)0x9;
                            iVar9 = memcmp("wrapModeV",piVar3,9);
                            if (iVar9 == 0) goto LAB_00d26620;
                          }
                          lVar23 = lVar23 + -0x30;
                          piVar18 = piVar18 + 0xc;
                        } while (lVar23 != 0);
LAB_00d26650:
                        piVar13 = (int *)&rapidjson::
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
LAB_00d26670:
                        piVar13 = *(int **)(piVar13 + 2);
                      }
                      pBVar11 = (Bundle3D *)
                                std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::basic_string<decltype(nullptr)>
                                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                            *)&local_110,(char *)piVar13);
                      local_78 = parseGLType(pBVar11,(basic_string *)&local_110);
                      if ((local_110 & 1) != 0) {
                        operator_delete(local_100);
                      }
                      pvVar26 = local_a0;
                      pbVar2 = pbStack_a8;
                      puVar8 = puStack_d8;
                      if (puStack_d8 == local_d0) {
                        std::__ndk1::
                        vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
                        ::__push_back_slow_path<cocos2d::NTextureData_const&>
                                  ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
                                    *)&local_e0,(NTextureData *)&local_b0);
                      }
                      else {
                        *puStack_d8 = 0;
                        puStack_d8[1] = 0;
                        puStack_d8[2] = 0;
                        if ((local_b0 & 1) == 0) {
                          puStack_d8[2] = (ulong)local_a0;
                          puStack_d8[1] = (ulong)pbStack_a8;
                          *puStack_d8 = local_b0;
                        }
                        else {
                          if ((basic_string *)0xffffffffffffffef < pbStack_a8) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (pbStack_a8 < (basic_string *)0x17) {
                            pvVar27 = (void *)((long)puStack_d8 + 1);
                            *(char *)puStack_d8 = (char)((int)pbStack_a8 << 1);
                            if (pbStack_a8 != (basic_string *)0x0) goto LAB_00d2674c;
                          }
                          else {
                            pbVar10 = pbStack_a8 + 0x10;
                            pvVar27 = operator_new((ulong)pbVar10 & 0xfffffffffffffff0);
                            puVar8[1] = (ulong)pbVar2;
                            puVar8[2] = (ulong)pvVar27;
                            *puVar8 = (ulong)pbVar10 & 0xfffffffffffffff0 | 1;
LAB_00d2674c:
                            pbVar10 = pbVar2;
                            memcpy(pvVar27,pvVar26,(size_t)pbVar2);
                          }
                          *(basic_string *)((long)pvVar27 + (long)pbVar2) = (basic_string)0x0;
                        }
                        __src = local_88;
                        pbVar2 = local_90;
                        puVar25 = puVar8 + 3;
                        *puVar25 = 0;
                        puVar8[4] = 0;
                        puVar8[5] = 0;
                        if ((uStack_98 & 1) == 0) {
                          puVar8[5] = (ulong)local_88;
                          puVar8[4] = (ulong)local_90;
                          *puVar25 = uStack_98;
                        }
                        else {
                          if ((basic_string *)0xffffffffffffffef < local_90) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (local_90 < (basic_string *)0x17) {
                            pvVar26 = (void *)((long)puVar8 + 0x19);
                            *(char *)puVar25 = (char)((int)local_90 << 1);
                            if (local_90 != (basic_string *)0x0) goto LAB_00d267e4;
                          }
                          else {
                            pbVar10 = local_90 + 0x10;
                            pvVar26 = operator_new((ulong)pbVar10 & 0xfffffffffffffff0);
                            puVar8[4] = (ulong)pbVar2;
                            puVar8[5] = (ulong)pvVar26;
                            puVar8[3] = (ulong)pbVar10 & 0xfffffffffffffff0 | 1;
LAB_00d267e4:
                            pbVar10 = pbVar2;
                            memcpy(pvVar26,__src,(size_t)pbVar2);
                          }
                          *(basic_string *)((long)pvVar26 + (long)pbVar2) = (basic_string)0x0;
                        }
                        puStack_d8 = puVar8 + 8;
                        *(undefined4 *)(puVar8 + 7) = local_78;
                        puVar8[6] = CONCAT44(uStack_7c,local_80);
                      }
                      if (((byte)local_f8 & 1) != 0) {
                        operator_delete(local_e8);
                      }
                      if ((uStack_98 & 1) != 0) {
                        operator_delete(local_88);
                      }
                      if ((local_b0 & 1) != 0) {
                        operator_delete(local_a0);
                      }
                      uVar15 = uVar15 + 1;
                    } while (uVar15 < *(uint *)(plVar24 + 3));
                  }
                  goto LAB_00d268c4;
                }
              }
              else {
                lVar23 = uVar15 * 0x30;
                do {
                  iVar9 = (int)*plVar24;
                  if ((*(ushort *)((long)plVar24 + 0x16) & 0x1000) != 0) {
                    iVar9 = 0x15 - *(char *)((long)plVar24 + 0x15);
                  }
                  if (iVar9 == 8) {
                    plVar17 = (long *)plVar24[1];
                    if ((*(ushort *)((long)plVar24 + 0x16) & 0x1000) != 0) {
                      plVar17 = plVar24;
                    }
                    if ((plVar17 == (long *)"textures") || (*plVar17 == 0x7365727574786574))
                    goto LAB_00d26278;
                  }
                  lVar23 = lVar23 + -0x30;
                  plVar24 = plVar24 + 6;
                } while (lVar23 != 0);
              }
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
              DAT_01785a60 = 0;
            }
LAB_00d268c4:
            pNVar4 = *(NMaterialData **)(param_1 + 8);
            if (pNVar4 == *(NMaterialData **)(param_1 + 0x10)) {
              std::__ndk1::
              vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
              __push_back_slow_path<cocos2d::NMaterialData_const&>
                        ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>
                          *)param_1,(NMaterialData *)&local_e0);
            }
            else {
              std::__ndk1::allocator<cocos2d::NMaterialData>::
              construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                        ((allocator<cocos2d::NMaterialData> *)(param_1 + 0x10),pNVar4,
                         (NMaterialData *)&local_e0);
              *(NMaterialData **)(param_1 + 8) = pNVar4 + 0x30;
            }
            if ((uStack_c8 & 1) != 0) {
              operator_delete(local_b8);
            }
            puVar8 = local_e0;
            puVar25 = puStack_d8;
            if (local_e0 != (ulong *)0x0) {
              while (puVar7 = puVar25, puVar7 != puVar8) {
                if ((puVar7[-5] & 1) != 0) {
                  operator_delete((void *)puVar7[-3]);
                }
                puVar25 = puVar7 + -8;
                if ((puVar7[-8] & 1) != 0) {
                  operator_delete((void *)puVar7[-6]);
                }
              }
              puStack_d8 = puVar8;
              operator_delete(local_e0);
            }
            uVar20 = uVar20 + 1;
          } while (uVar20 < (uint)piVar22[6]);
        }
      }
      else {
        lVar23 = uVar20 * 0x30;
        do {
          iVar9 = *piVar22;
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            iVar9 = 0x15 - *(char *)((long)piVar22 + 0x15);
          }
          if (iVar9 == 9) {
            piVar18 = *(int **)(piVar22 + 2);
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              piVar18 = piVar22;
            }
            if ((piVar18 == (int *)"materials") ||
               (iVar9 = memcmp("materials",piVar18,9), iVar9 == 0)) {
              if (piVar22 != piVar13) goto LAB_00d25fec;
              break;
            }
          }
          lVar23 = lVar23 + -0x30;
          piVar22 = piVar22 + 0xc;
        } while (lVar23 != 0);
LAB_00d2698c:
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      uVar12 = 1;
      goto LAB_00d269a0;
    }
  }
  else {
    lVar23 = uVar20 * 0x30;
    do {
      iVar9 = *piVar18;
      if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar18 + 0x15);
      }
      if (iVar9 == 9) {
        piVar3 = *(int **)(piVar18 + 2);
        if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
          piVar3 = piVar18;
        }
        if ((piVar3 == (int *)"materials") || (iVar9 = memcmp("materials",piVar3,9), iVar9 == 0))
        goto LAB_00d25f74;
      }
      lVar23 = lVar23 + -0x30;
      piVar18 = piVar18 + 0xc;
    } while (lVar23 != 0);
  }
  uVar12 = 0;
LAB_00d269a0:
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar12);
}

