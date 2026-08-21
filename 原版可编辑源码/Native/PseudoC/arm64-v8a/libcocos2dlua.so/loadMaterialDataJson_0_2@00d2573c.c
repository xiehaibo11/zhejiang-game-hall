
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::Bundle3D::loadMaterialDataJson_0_2(cocos2d::MaterialDatas&) */

void __thiscall cocos2d::Bundle3D::loadMaterialDataJson_0_2(Bundle3D *this,MaterialDatas *param_1)

{
  int iVar1;
  long *plVar2;
  basic_string *pbVar3;
  NMaterialData *pNVar4;
  uint uVar5;
  basic_string *pbVar6;
  ulong *puVar7;
  basic_string *__n;
  ulong *puVar8;
  undefined1 *__src;
  undefined8 uVar9;
  long *plVar10;
  basic_string *pbVar11;
  uint *puVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong *puVar17;
  void *pvVar18;
  void *pvVar19;
  long *plVar20;
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
  
  pbVar6 = (basic_string *)tpidr_el0;
  local_70 = *(long *)(pbVar6 + 0x28);
  plVar20 = *(long **)(this + 0x70);
  uVar5 = *(uint *)(this + 0x68);
  uVar14 = (ulong)uVar5;
  plVar10 = plVar20 + uVar14 * 6;
  plVar15 = plVar20;
  if (uVar5 == 0) {
LAB_00d257f8:
    if (plVar10 != plVar15) {
      uStack_c8 = 0;
      local_d0 = (ulong *)0x0;
      local_b8 = (void *)0x0;
      uStack_c0 = 0;
      puStack_d8 = (ulong *)0x0;
      local_e0 = (ulong *)0x0;
      if (uVar5 == 0) {
LAB_00d2588c:
        if (plVar20 == plVar10) goto LAB_00d25c6c;
        if ((int)plVar20[3] != 0) {
          uVar14 = 0;
          pbVar11 = pbVar6;
          do {
            plVar10 = &rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
            uStack_98 = 0;
            local_a0 = (void *)0x0;
            local_88 = (undefined1 *)0x0;
            local_90 = (basic_string *)0x0;
            pbStack_a8 = (basic_string *)0x0;
            local_b0 = 0;
            puVar12 = (uint *)(plVar20[4] + uVar14 * 0x18);
            uVar5 = *puVar12;
            plVar13 = *(long **)(puVar12 + 2);
            plVar15 = plVar13;
            if (uVar5 == 0) {
LAB_00d2597c:
              if (plVar15 == plVar13 + (ulong)uVar5 * 6) goto LAB_00d2599c;
              plVar10 = plVar15 + 3;
              if ((*(byte *)((long)plVar15 + 0x2f) >> 4 & 1) == 0) goto LAB_00d259a8;
            }
            else {
              lVar16 = (ulong)uVar5 * 0x30;
              do {
                iVar1 = (int)*plVar15;
                if ((*(ushort *)((long)plVar15 + 0x16) & 0x1000) != 0) {
                  iVar1 = 0x15 - *(char *)((long)plVar15 + 0x15);
                }
                if (iVar1 == 8) {
                  plVar2 = (long *)plVar15[1];
                  if ((*(ushort *)((long)plVar15 + 0x16) & 0x1000) != 0) {
                    plVar2 = plVar15;
                  }
                  if ((plVar2 == (long *)"textures") || (*plVar2 == 0x7365727574786574))
                  goto LAB_00d2597c;
                }
                lVar16 = lVar16 + -0x30;
                plVar15 = plVar15 + 6;
              } while (lVar16 != 0);
LAB_00d2599c:
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
              DAT_01785a60 = 0;
LAB_00d259a8:
              plVar10 = (long *)plVar10[1];
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>(&local_f8,(char *)plVar10);
            pvVar18 = local_e8;
            __n = pbStack_f0;
            pbVar3 = (basic_string *)(ulong)((byte)local_f8 >> 1);
            if (((byte)local_f8 & 1) != 0) {
              pbVar3 = pbStack_f0;
            }
            if (pbVar3 == (basic_string *)0x0) {
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
                  pvVar19 = (void *)((ulong)&local_110 | 1);
                  if (pbStack_f0 != (basic_string *)0x0) goto LAB_00d25c4c;
                }
                else {
                  pbVar11 = pbStack_f0 + 0x10;
                  pvVar19 = operator_new((ulong)pbVar11 & 0xfffffffffffffff0);
                  local_110 = (ulong)pbVar11 & 0xfffffffffffffff0 | 1;
                  pbStack_108 = __n;
                  local_100 = pvVar19;
LAB_00d25c4c:
                  memcpy(pvVar19,pvVar18,(size_t)__n);
                }
                *(basic_string *)((long)pvVar19 + (long)__n) = (basic_string)0x0;
              }
            }
            else {
              std::__ndk1::operator+((__ndk1 *)(this + 8),(basic_string *)&local_f8,pbVar11);
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
            local_80 = 2;
            pbVar11 = (basic_string *)0x0;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_b0,"",0);
            pvVar18 = local_a0;
            pbVar3 = pbStack_a8;
            puVar8 = puStack_d8;
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
                puStack_d8[1] = (ulong)pbStack_a8;
                *puStack_d8 = local_b0;
              }
              else {
                if ((basic_string *)0xffffffffffffffef < pbStack_a8) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (pbStack_a8 < (basic_string *)0x17) {
                  pvVar19 = (void *)((long)puStack_d8 + 1);
                  *(char *)puStack_d8 = (char)((int)pbStack_a8 << 1);
                  if (pbStack_a8 != (basic_string *)0x0) goto LAB_00d25b18;
                }
                else {
                  pbVar11 = pbStack_a8 + 0x10;
                  pvVar19 = operator_new((ulong)pbVar11 & 0xfffffffffffffff0);
                  puVar8[1] = (ulong)pbVar3;
                  puVar8[2] = (ulong)pvVar19;
                  *puVar8 = (ulong)pbVar11 & 0xfffffffffffffff0 | 1;
LAB_00d25b18:
                  pbVar11 = pbVar3;
                  memcpy(pvVar19,pvVar18,(size_t)pbVar3);
                }
                *(basic_string *)((long)pvVar19 + (long)pbVar3) = (basic_string)0x0;
              }
              __src = local_88;
              pbVar3 = local_90;
              puVar17 = puVar8 + 3;
              *puVar17 = 0;
              puVar8[4] = 0;
              puVar8[5] = 0;
              if ((uStack_98 & 1) == 0) {
                puVar8[5] = (ulong)local_88;
                puVar8[4] = (ulong)local_90;
                *puVar17 = uStack_98;
              }
              else {
                if ((basic_string *)0xffffffffffffffef < local_90) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (local_90 < (basic_string *)0x17) {
                  pvVar18 = (void *)((long)puVar8 + 0x19);
                  *(char *)puVar17 = (char)((int)local_90 << 1);
                  if (local_90 != (basic_string *)0x0) goto LAB_00d25ba4;
                }
                else {
                  pbVar11 = local_90 + 0x10;
                  pvVar18 = operator_new((ulong)pbVar11 & 0xfffffffffffffff0);
                  puVar8[4] = (ulong)pbVar3;
                  puVar8[5] = (ulong)pvVar18;
                  puVar8[3] = (ulong)pbVar11 & 0xfffffffffffffff0 | 1;
LAB_00d25ba4:
                  pbVar11 = pbVar3;
                  memcpy(pvVar18,__src,(size_t)pbVar3);
                }
                *(basic_string *)((long)pvVar18 + (long)pbVar3) = (basic_string)0x0;
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
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)(plVar20 + 3));
        }
      }
      else {
        lVar16 = uVar14 * 0x30;
        do {
          iVar1 = (int)*plVar20;
          if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
            iVar1 = 0x15 - *(char *)((long)plVar20 + 0x15);
          }
          if (iVar1 == 8) {
            plVar15 = (long *)plVar20[1];
            if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
              plVar15 = plVar20;
            }
            if ((plVar15 == (long *)0x1423cd3) || (*plVar15 == 0x6c6169726574616d))
            goto LAB_00d2588c;
          }
          lVar16 = lVar16 + -0x30;
          plVar20 = plVar20 + 6;
        } while (lVar16 != 0);
LAB_00d25c6c:
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      pNVar4 = *(NMaterialData **)(param_1 + 8);
      if (pNVar4 == *(NMaterialData **)(param_1 + 0x10)) {
        std::__ndk1::vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>>::
        __push_back_slow_path<cocos2d::NMaterialData_const&>
                  ((vector<cocos2d::NMaterialData,std::__ndk1::allocator<cocos2d::NMaterialData>> *)
                   param_1,(NMaterialData *)&local_e0);
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
      puVar17 = puStack_d8;
      if (local_e0 != (ulong *)0x0) {
        while (puVar7 = puVar17, puVar7 != puVar8) {
          if ((puVar7[-5] & 1) != 0) {
            operator_delete((void *)puVar7[-3]);
          }
          puVar17 = puVar7 + -8;
          if ((puVar7[-8] & 1) != 0) {
            operator_delete((void *)puVar7[-6]);
          }
        }
        puStack_d8 = puVar8;
        operator_delete(local_e0);
      }
      uVar9 = 1;
      goto LAB_00d25d3c;
    }
  }
  else {
    lVar16 = uVar14 * 0x30;
    do {
      iVar1 = (int)*plVar15;
      if ((*(ushort *)((long)plVar15 + 0x16) & 0x1000) != 0) {
        iVar1 = 0x15 - *(char *)((long)plVar15 + 0x15);
      }
      if (iVar1 == 8) {
        plVar13 = (long *)plVar15[1];
        if ((*(ushort *)((long)plVar15 + 0x16) & 0x1000) != 0) {
          plVar13 = plVar15;
        }
        if ((plVar13 == (long *)0x1423cd3) || (*plVar13 == 0x6c6169726574616d)) goto LAB_00d257f8;
      }
      lVar16 = lVar16 + -0x30;
      plVar15 = plVar15 + 6;
    } while (lVar16 != 0);
  }
  uVar9 = 0;
LAB_00d25d3c:
  if (*(long *)(pbVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}

