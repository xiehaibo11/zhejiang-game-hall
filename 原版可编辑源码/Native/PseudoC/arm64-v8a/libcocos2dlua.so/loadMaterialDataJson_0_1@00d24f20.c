
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Bundle3D::loadMaterialDataJson_0_1(cocos2d::MaterialDatas&) */

void cocos2d::Bundle3D::loadMaterialDataJson_0_1(MaterialDatas *param_1)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  NMaterialData *pNVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined1 *__src;
  undefined8 uVar9;
  vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *in_x1;
  long *plVar10;
  basic_string *in_x2;
  long *plVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  long *plVar15;
  ulong uVar16;
  int *piVar17;
  int *piVar18;
  long lVar19;
  ulong *puVar20;
  void *pvVar21;
  void *pvVar22;
  ulong uVar23;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  void *local_e8;
  ulong *local_e0;
  ulong *puStack_d8;
  ulong *local_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  plVar11 = *(long **)(param_1 + 0x70);
  uVar5 = *(uint *)(param_1 + 0x68);
  uVar16 = (ulong)uVar5;
  plVar15 = plVar11 + uVar16 * 6;
  plVar10 = plVar11;
  if (uVar5 == 0) {
LAB_00d24fe4:
    if (plVar15 != plVar10) {
      uStack_c8 = 0;
      local_d0 = (ulong *)0x0;
      local_b8 = (void *)0x0;
      uStack_c0 = 0;
      puStack_d8 = (ulong *)0x0;
      local_e0 = (ulong *)0x0;
      plVar10 = &rapidjson::
                 GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                 ::
                 operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                 ::buffer;
      puVar7 = local_e0;
      if (uVar5 == 0) {
LAB_00d25070:
        if (plVar11 == plVar15) goto LAB_00d25110;
        if ((int)plVar11[3] != 0) {
          piVar12 = *(int **)((uint *)plVar11[4] + 2);
          uVar5 = *(uint *)plVar11[4];
          uVar16 = (ulong)uVar5;
          piVar13 = piVar12 + uVar16 * 0xc;
          piVar18 = piVar12;
          if (uVar5 != 0) {
            lVar19 = uVar16 * 0x30;
            piVar17 = piVar12;
            do {
              iVar1 = *piVar17;
              if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
                iVar1 = 0x15 - *(char *)((long)piVar17 + 0x15);
              }
              if (iVar1 == 4) {
                piVar2 = *(int **)(piVar17 + 2);
                if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
                  piVar2 = piVar17;
                }
                piVar18 = piVar17;
                if ((piVar2 == (int *)0x1424996) || (*piVar2 == 0x65736162)) break;
              }
              lVar19 = lVar19 + -0x30;
              piVar17 = piVar17 + 0xc;
              piVar18 = piVar13;
            } while (lVar19 != 0);
          }
          if (piVar13 != piVar18) {
            if (uVar5 == 0) {
LAB_00d25230:
              if (piVar12 == piVar13) goto LAB_00d25240;
              puVar14 = *(uint **)(piVar12 + 8);
            }
            else {
              lVar19 = uVar16 * 0x30;
              do {
                iVar1 = *piVar12;
                if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                  iVar1 = 0x15 - *(char *)((long)piVar12 + 0x15);
                }
                if (iVar1 == 4) {
                  piVar18 = *(int **)(piVar12 + 2);
                  if ((*(ushort *)((long)piVar12 + 0x16) & 0x1000) != 0) {
                    piVar18 = piVar12;
                  }
                  if ((piVar18 == (int *)0x1424996) || (*piVar18 == 0x65736162)) goto LAB_00d25230;
                }
                lVar19 = lVar19 + -0x30;
                piVar12 = piVar12 + 0xc;
              } while (lVar19 != 0);
LAB_00d25240:
              puVar14 = (uint *)0x0;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
              DAT_01785a60 = 0;
            }
            uStack_98 = 0;
            local_a0 = (void *)0x0;
            local_88 = (undefined1 *)0x0;
            local_90 = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            uVar5 = *puVar14;
            plVar15 = *(long **)(puVar14 + 2);
            plVar11 = plVar15;
            if (uVar5 == 0) {
LAB_00d252e4:
              if (plVar11 == plVar15 + (ulong)uVar5 * 6) goto LAB_00d25304;
              plVar10 = plVar11 + 3;
              if ((*(byte *)((long)plVar11 + 0x2f) >> 4 & 1) == 0) goto LAB_00d2530c;
            }
            else {
              lVar19 = (ulong)uVar5 * 0x30;
              do {
                iVar1 = (int)*plVar11;
                if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
                  iVar1 = 0x15 - *(char *)((long)plVar11 + 0x15);
                }
                if (iVar1 == 8) {
                  plVar3 = (long *)plVar11[1];
                  if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
                    plVar3 = plVar11;
                  }
                  if ((plVar3 == (long *)0x1409529) || (*plVar3 == 0x656d616e656c6966))
                  goto LAB_00d252e4;
                }
                lVar19 = lVar19 + -0x30;
                plVar11 = plVar11 + 6;
              } while (lVar19 != 0);
LAB_00d25304:
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
              DAT_01785a60 = 0;
LAB_00d2530c:
              plVar10 = (long *)plVar10[1];
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_f8,(char *)plVar10);
            pvVar21 = local_e8;
            uVar16 = (ulong)((byte)local_f8 >> 1);
            if (((byte)local_f8 & 1) != 0) {
              uVar16 = uStack_f0;
            }
            if (uVar16 == 0) {
              uStack_108 = 0;
              local_100 = (void *)0x0;
              local_110 = 0;
              if (((byte)local_f8 & 1) == 0) {
                local_110 = CONCAT71(uStack_f7,local_f8);
                uStack_108 = uStack_f0;
                local_100 = local_e8;
              }
              else {
                if (0xffffffffffffffef < uStack_f0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_f0 < 0x17) {
                  pvVar22 = (void *)((ulong)&local_110 | 1);
                  local_110 = (ulong)(byte)((int)uStack_f0 << 1);
                  if (uStack_f0 != 0) goto LAB_00d253b0;
                }
                else {
                  uVar16 = uStack_f0 + 0x10 & 0xfffffffffffffff0;
                  pvVar22 = operator_new(uVar16);
                  local_110 = uVar16 | 1;
                  uStack_108 = uStack_f0;
                  local_100 = pvVar22;
LAB_00d253b0:
                  memcpy(pvVar22,pvVar21,uStack_f0);
                }
                *(undefined1 *)((long)pvVar22 + uStack_f0) = 0;
              }
            }
            else {
              std::__ndk1::operator+((__ndk1 *)(param_1 + 8),(basic_string *)&local_f8,in_x2);
            }
            if ((uStack_98 & 1) != 0) {
              *local_88 = 0;
              local_90 = 0;
              if ((uStack_98 & 1) != 0) {
                operator_delete(local_88);
              }
            }
            local_88 = local_100;
            local_90 = uStack_108;
            uStack_98 = local_110;
            local_80 = 2;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,"",0);
            pvVar21 = local_a0;
            uVar16 = uStack_a8;
            puVar7 = puStack_d8;
            if (puStack_d8 == local_d0) {
              std::__ndk1::
              vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>::
              __push_back_slow_path<cocos2d::NTextureData_const&>
                        ((vector<cocos2d::NTextureData,std::__ndk1::allocator<cocos2d::NTextureData>>
                          *)&local_e0,(NTextureData *)&local_b0);
            }
            else {
              *puStack_d8 = 0;
              puStack_d8[1] = 0;
              puStack_d8[2] = 0;
              if ((local_b0 & 1) == 0) {
                puStack_d8[2] = (ulong)local_a0;
                puStack_d8[1] = uStack_a8;
                *puStack_d8 = local_b0;
              }
              else {
                if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_a8 < 0x17) {
                  pvVar22 = (void *)((long)puStack_d8 + 1);
                  *(char *)puStack_d8 = (char)((int)uStack_a8 << 1);
                  if (uStack_a8 != 0) goto LAB_00d254b8;
                }
                else {
                  uVar23 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
                  pvVar22 = operator_new(uVar23);
                  puVar7[1] = uVar16;
                  puVar7[2] = (ulong)pvVar22;
                  *puVar7 = uVar23 | 1;
LAB_00d254b8:
                  memcpy(pvVar22,pvVar21,uVar16);
                }
                *(undefined1 *)((long)pvVar22 + uVar16) = 0;
              }
              __src = local_88;
              uVar16 = local_90;
              puVar20 = puVar7 + 3;
              *puVar20 = 0;
              puVar7[4] = 0;
              puVar7[5] = 0;
              if ((uStack_98 & 1) == 0) {
                puVar7[5] = (ulong)local_88;
                puVar7[4] = local_90;
                *puVar20 = uStack_98;
              }
              else {
                if (0xffffffffffffffef < local_90) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (local_90 < 0x17) {
                  pvVar21 = (void *)((long)puVar7 + 0x19);
                  *(char *)puVar20 = (char)((int)local_90 << 1);
                  if (local_90 != 0) goto LAB_00d2553c;
                }
                else {
                  uVar23 = local_90 + 0x10 & 0xfffffffffffffff0;
                  pvVar21 = operator_new(uVar23);
                  puVar7[4] = uVar16;
                  puVar7[5] = (ulong)pvVar21;
                  puVar7[3] = uVar23 | 1;
LAB_00d2553c:
                  memcpy(pvVar21,__src,uVar16);
                }
                *(undefined1 *)((long)pvVar21 + uVar16) = 0;
              }
              puStack_d8 = puVar7 + 8;
              *(undefined4 *)(puVar7 + 7) = local_78;
              puVar7[6] = CONCAT44(uStack_7c,local_80);
            }
            pNVar4 = *(NMaterialData **)(in_x1 + 8);
            if (pNVar4 == *(NMaterialData **)(in_x1 + 0x10)) {
              std::__ndk1::
              vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
              __push_back_slow_path<cocos2d::NMaterialData_const&>(in_x1,(NMaterialData *)&local_e0)
              ;
            }
            else {
              std::__ndk1::allocator<cocos2d::NMaterialData>::
              construct<cocos2d::NMaterialData,cocos2d::NMaterialData_const&>
                        ((allocator<cocos2d::NMaterialData> *)(in_x1 + 0x10),pNVar4,
                         (NMaterialData *)&local_e0);
              *(NMaterialData **)(in_x1 + 8) = pNVar4 + 0x30;
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
            puVar7 = local_e0;
            if ((uStack_c8 & 1) != 0) {
              operator_delete(local_b8);
              puVar7 = local_e0;
            }
          }
        }
      }
      else {
        lVar19 = uVar16 * 0x30;
        do {
          iVar1 = (int)*plVar11;
          if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
            iVar1 = 0x15 - *(char *)((long)plVar11 + 0x15);
          }
          if (iVar1 == 8) {
            plVar3 = (long *)plVar11[1];
            if ((*(ushort *)((long)plVar11 + 0x16) & 0x1000) != 0) {
              plVar3 = plVar11;
            }
            if ((plVar3 == (long *)0x1423cd3) || (*plVar3 == 0x6c6169726574616d)) goto LAB_00d25070;
          }
          lVar19 = lVar19 + -0x30;
          plVar11 = plVar11 + 6;
        } while (lVar19 != 0);
LAB_00d25110:
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      local_e0 = puVar7;
      puVar20 = puStack_d8;
      if (puVar7 != (ulong *)0x0) {
        while (puVar8 = puVar20, puVar8 != puVar7) {
          if ((puVar8[-5] & 1) != 0) {
            operator_delete((void *)puVar8[-3]);
          }
          puVar20 = puVar8 + -8;
          if ((puVar8[-8] & 1) != 0) {
            operator_delete((void *)puVar8[-6]);
          }
        }
        puStack_d8 = puVar7;
        operator_delete(local_e0);
      }
      uVar9 = 1;
      goto LAB_00d2518c;
    }
  }
  else {
    lVar19 = uVar16 * 0x30;
    do {
      iVar1 = (int)*plVar10;
      if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
        iVar1 = 0x15 - *(char *)((long)plVar10 + 0x15);
      }
      if (iVar1 == 8) {
        plVar3 = (long *)plVar10[1];
        if ((*(ushort *)((long)plVar10 + 0x16) & 0x1000) != 0) {
          plVar3 = plVar10;
        }
        if ((plVar3 == (long *)0x1423cd3) || (*plVar3 == 0x6c6169726574616d)) goto LAB_00d24fe4;
      }
      lVar19 = lVar19 + -0x30;
      plVar10 = plVar10 + 6;
    } while (lVar19 != 0);
  }
  uVar9 = 0;
LAB_00d2518c:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

