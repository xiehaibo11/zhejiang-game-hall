
/* cocos2d::getChildMap(std::__ndk1::map<int, std::__ndk1::vector<int, std::__ndk1::allocator<int>
   >, std::__ndk1::less<int>, std::__ndk1::allocator<std::__ndk1::pair<int const,
   std::__ndk1::vector<int, std::__ndk1::allocator<int> > > > >&, cocos2d::SkinData*,
   rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

void cocos2d::getChildMap(map *param_1,SkinData *param_2,GenericValue *param_3)

{
  map *pmVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  int *piVar5;
  size_t sVar6;
  Mat4 *this;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  ushort uVar11;
  long lVar12;
  size_t sVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  __tree_node_base *p_Var17;
  long *plVar18;
  long *plVar19;
  int *piVar20;
  ulong uVar21;
  ulong uVar22;
  long *plVar23;
  byte *__s1;
  int *piVar24;
  byte *pbVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  map *pmVar29;
  byte *pbVar30;
  map *pmVar31;
  map *pmVar32;
  GenericValue *pGVar33;
  __tree_node_base *p_Var34;
  double dVar35;
  int local_e4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  size_t local_d8;
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  size_t local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  if (param_2 == (SkinData *)0x0) goto LAB_00d19d70;
  Mat4::Mat4((Mat4 *)&local_b0);
  uVar14 = *(uint *)param_3;
  plVar23 = *(long **)(param_3 + 8);
  plVar18 = plVar23;
  if (uVar14 == 0) {
LAB_00d19670:
    if (plVar18 == plVar23 + (ulong)uVar14 * 6) goto LAB_00d19700;
    uVar14 = *(uint *)(plVar18 + 3);
    if (uVar14 != 0) {
      lVar28 = 0;
      pfVar26 = (float *)&local_b0;
      do {
        lVar27 = plVar18[4];
        uVar11 = *(ushort *)(lVar27 + lVar28 + 0x16);
        if ((uVar11 >> 9 & 1) == 0) {
          if ((uVar11 >> 5 & 1) == 0) {
            if ((uVar11 >> 6 & 1) == 0) {
              if ((uVar11 >> 7 & 1) == 0) {
                dVar35 = (double)*(ulong *)(lVar27 + lVar28);
              }
              else {
                dVar35 = (double)(long)*(ulong *)(lVar27 + lVar28);
              }
            }
            else {
              dVar35 = (double)NEON_ucvtf((ulong)*(uint *)(lVar27 + lVar28));
            }
          }
          else {
            dVar35 = (double)(long)*(int *)(lVar27 + lVar28);
          }
        }
        else {
          dVar35 = *(double *)(lVar27 + lVar28);
        }
        lVar28 = lVar28 + 0x18;
        *pfVar26 = (float)dVar35;
        pfVar26 = pfVar26 + 1;
      } while ((ulong)uVar14 * 0x18 - lVar28 != 0);
    }
  }
  else {
    lVar28 = (ulong)uVar14 * 0x30;
    do {
      iVar16 = (int)*plVar18;
      if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)plVar18 + 0x15);
      }
      if (iVar16 == 8) {
        plVar19 = (long *)plVar18[1];
        if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
          plVar19 = plVar18;
        }
        if ((plVar19 == (long *)"tansform") || (*plVar19 == 0x6d726f66736e6174)) goto LAB_00d19670;
      }
      lVar28 = lVar28 + -0x30;
      plVar18 = plVar18 + 6;
    } while (lVar28 != 0);
LAB_00d19700:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar14 = *(uint *)param_3;
  piVar20 = *(int **)(param_3 + 8);
  piVar24 = piVar20;
  if (uVar14 == 0) {
LAB_00d19794:
    if (piVar24 == piVar20 + (ulong)uVar14 * 0xc) goto LAB_00d197b4;
    piVar20 = piVar24 + 6;
    if ((*(byte *)((long)piVar24 + 0x2f) >> 4 & 1) == 0) goto LAB_00d197c4;
  }
  else {
    lVar28 = (ulong)uVar14 * 0x30;
    do {
      iVar16 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar16 == 2) {
        piVar5 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar5 = piVar24;
        }
        if ((piVar5 == (int *)0x143a510) || ((short)*piVar5 == 0x6469)) goto LAB_00d19794;
      }
      lVar28 = lVar28 + -0x30;
      piVar24 = piVar24 + 0xc;
    } while (lVar28 != 0);
LAB_00d197b4:
    piVar20 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
LAB_00d197c4:
    piVar20 = *(int **)(piVar20 + 2);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,(char *)piVar20);
  pbVar30 = *(byte **)param_2;
  pbVar7 = *(byte **)(param_2 + 8);
  if (pbVar30 != pbVar7) {
    uVar14 = 0;
    pbVar25 = pbVar30;
    sVar13 = (ulong)((byte)local_c8[0] >> 1);
    pvVar3 = (void *)((ulong)local_c8 | 1);
    if (((byte)local_c8[0] & 1) != 0) {
      sVar13 = local_c0;
      pvVar3 = local_b8;
    }
    do {
      bVar10 = *pbVar25;
      sVar6 = (ulong)(bVar10 >> 1);
      if ((bVar10 & 1) != 0) {
        sVar6 = *(size_t *)(pbVar25 + 8);
      }
      if (sVar6 == sVar13) {
        __s1 = *(byte **)(pbVar25 + 0x10);
        if ((bVar10 & 1) == 0) {
          __s1 = pbVar25 + 1;
        }
        if ((bVar10 & 1) == 0) {
          if (sVar13 == 0) {
LAB_00d19888:
            if ((int)uVar14 < (int)((ulong)((long)pbVar7 - (long)pbVar30) >> 3) * -0x55555555) {
              puVar2 = (undefined8 *)(*(long *)(param_2 + 0x48) + (ulong)uVar14 * 0x40);
              puVar2[5] = uStack_88;
              puVar2[4] = local_90;
              puVar2[7] = uStack_78;
              puVar2[6] = uStack_80;
              puVar2[1] = uStack_a8;
              *puVar2 = local_b0;
              puVar2[3] = uStack_98;
              puVar2[2] = uStack_a0;
            }
            goto LAB_00d19928;
          }
          uVar21 = 0;
          while (pbVar25[uVar21 + 1] == *(byte *)((long)pvVar3 + uVar21)) {
            uVar21 = uVar21 + 1;
            if (bVar10 >> 1 == uVar21) goto LAB_00d19888;
          }
        }
        else if ((sVar13 == 0) || (iVar16 = memcmp(__s1,pvVar3,sVar13), iVar16 == 0))
        goto LAB_00d19888;
      }
      pbVar25 = pbVar25 + 0x18;
      uVar14 = uVar14 + 1;
    } while (pbVar25 != pbVar7);
  }
  SkinData::addNodeBoneNames(param_2,(basic_string *)local_c8);
  this = *(Mat4 **)(param_2 + 0x68);
  if (this == *(Mat4 **)(param_2 + 0x70)) {
    std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
    __push_back_slow_path<cocos2d::Mat4_const&>
              ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)(param_2 + 0x60),
               (Mat4 *)&local_b0);
  }
  else {
    Mat4::Mat4(this,(Mat4 *)&local_b0);
    *(Mat4 **)(param_2 + 0x68) = this + 0x40;
  }
  uVar14 = SkinData::getBoneNameIndex(param_2,(basic_string *)local_c8);
LAB_00d19928:
  if (*(int *)(param_2 + 0x90) < 0) {
    *(uint *)(param_2 + 0x90) = uVar14;
  }
  plVar23 = *(long **)(param_3 + 8);
  uVar8 = *(uint *)param_3;
  uVar21 = (ulong)uVar8;
  plVar19 = plVar23 + uVar21 * 6;
  plVar18 = plVar23;
  if (uVar8 == 0) {
LAB_00d199c8:
    if (plVar19 != plVar18) {
      if (uVar8 == 0) {
LAB_00d19a40:
        if (plVar23 != plVar19) {
          uVar8 = *(uint *)(plVar23 + 3);
          if (uVar8 != 0) {
            uVar21 = 0;
            pmVar1 = param_1 + 8;
            do {
              pGVar33 = (GenericValue *)(plVar23[4] + uVar21 * 0x18);
              uVar9 = *(uint *)pGVar33;
              piVar20 = *(int **)(pGVar33 + 8);
              piVar24 = piVar20;
              if (uVar9 == 0) {
LAB_00d19b08:
                if (piVar24 == piVar20 + (ulong)uVar9 * 0xc) goto LAB_00d19b28;
                piVar20 = piVar24 + 6;
                if ((*(byte *)((long)piVar24 + 0x2f) >> 4 & 1) == 0) goto LAB_00d19b38;
              }
              else {
                lVar28 = (ulong)uVar9 * 0x30;
                do {
                  iVar16 = *piVar24;
                  if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
                    iVar16 = 0x15 - *(char *)((long)piVar24 + 0x15);
                  }
                  if (iVar16 == 2) {
                    piVar5 = *(int **)(piVar24 + 2);
                    if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
                      piVar5 = piVar24;
                    }
                    if ((piVar5 == (int *)0x143a510) || ((short)*piVar5 == 0x6469))
                    goto LAB_00d19b08;
                  }
                  lVar28 = lVar28 + -0x30;
                  piVar24 = piVar24 + 0xc;
                } while (lVar28 != 0);
LAB_00d19b28:
                piVar20 = (int *)&rapidjson::
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
LAB_00d19b38:
                piVar20 = *(int **)(piVar20 + 2);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>(local_e0,(char *)piVar20);
              pbVar30 = *(byte **)param_2;
              pbVar7 = *(byte **)(param_2 + 8);
              if (pbVar30 != pbVar7) {
                iVar16 = 0;
                sVar13 = (ulong)((byte)local_e0[0] >> 1);
                pvVar3 = (void *)((ulong)local_e0 | 1);
                if (((byte)local_e0[0] & 1) != 0) {
                  sVar13 = local_d8;
                  pvVar3 = local_d0;
                }
                do {
                  bVar10 = *pbVar30;
                  sVar6 = (ulong)(bVar10 >> 1);
                  if ((bVar10 & 1) != 0) {
                    sVar6 = *(size_t *)(pbVar30 + 8);
                  }
                  if (sVar6 == sVar13) {
                    pbVar25 = *(byte **)(pbVar30 + 0x10);
                    if ((bVar10 & 1) == 0) {
                      pbVar25 = pbVar30 + 1;
                    }
                    if ((bVar10 & 1) == 0) {
                      if (sVar13 == 0) goto LAB_00d19c24;
                      uVar22 = 0;
                      while (pbVar30[uVar22 + 1] == *(byte *)((long)pvVar3 + uVar22)) {
                        uVar22 = uVar22 + 1;
                        if (bVar10 >> 1 == uVar22) goto LAB_00d19c24;
                      }
                    }
                    else if ((sVar13 == 0) || (iVar15 = memcmp(pbVar25,pvVar3,sVar13), iVar15 == 0))
                    goto LAB_00d19c24;
                  }
                  pbVar30 = pbVar30 + 0x18;
                  iVar16 = iVar16 + 1;
                } while (pbVar30 != pbVar7);
              }
              local_e4 = -1;
              SkinData::addNodeBoneNames(param_2,(basic_string *)local_e0);
              iVar16 = SkinData::getBoneNameIndex(param_2,(basic_string *)local_e0);
LAB_00d19c24:
              pmVar31 = *(map **)pmVar1;
              pmVar29 = pmVar1;
              pmVar32 = pmVar1;
              while (pmVar31 != (map *)0x0) {
                while (pmVar32 = pmVar31, (int)uVar14 < *(int *)(pmVar32 + 0x20)) {
                  pmVar29 = pmVar32;
                  pmVar31 = *(map **)pmVar32;
                  if (*(map **)pmVar32 == (map *)0x0) {
                    p_Var34 = *(__tree_node_base **)pmVar32;
                    goto joined_r0x00d19cc0;
                  }
                }
                if ((int)uVar14 <= *(int *)(pmVar32 + 0x20)) break;
                pmVar29 = pmVar32 + 8;
                pmVar31 = *(map **)pmVar29;
              }
              p_Var34 = *(__tree_node_base **)pmVar29;
joined_r0x00d19cc0:
              local_e4 = iVar16;
              if (p_Var34 == (__tree_node_base *)0x0) {
                p_Var34 = operator_new(0x40);
                *(uint *)(p_Var34 + 0x20) = uVar14;
                *(undefined8 *)(p_Var34 + 0x30) = 0;
                *(undefined8 *)(p_Var34 + 0x38) = 0;
                *(undefined8 *)(p_Var34 + 0x28) = 0;
                *(undefined8 *)p_Var34 = 0;
                *(undefined8 *)(p_Var34 + 8) = 0;
                *(map **)(p_Var34 + 0x10) = pmVar32;
                *(__tree_node_base **)pmVar29 = p_Var34;
                p_Var17 = p_Var34;
                if (**(long **)param_1 != 0) {
                  *(long *)param_1 = **(long **)param_1;
                  p_Var17 = *(__tree_node_base **)pmVar29;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (*(__tree_node_base **)(param_1 + 8),p_Var17);
                *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
              }
              piVar24 = *(int **)(p_Var34 + 0x30);
              if (piVar24 == *(int **)(p_Var34 + 0x38)) {
                std::__ndk1::vector<int,std::__ndk1::allocator<int>>::
                __push_back_slow_path<int_const&>
                          ((vector<int,std::__ndk1::allocator<int>> *)(p_Var34 + 0x28),&local_e4);
              }
              else {
                *piVar24 = local_e4;
                *(int **)(p_Var34 + 0x30) = piVar24 + 1;
              }
              getChildMap(param_1,param_2,pGVar33);
              if (((byte)local_e0[0] & 1) != 0) {
                operator_delete(local_d0);
              }
              uVar21 = uVar21 + 1;
            } while (uVar21 != uVar8);
          }
          goto joined_r0x00d19d40;
        }
      }
      else {
        lVar28 = uVar21 * 0x30;
        do {
          iVar16 = (int)*plVar23;
          if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
            iVar16 = 0x15 - *(char *)((long)plVar23 + 0x15);
          }
          if (iVar16 == 8) {
            plVar18 = (long *)plVar23[1];
            if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
              plVar18 = plVar23;
            }
            if ((plVar18 == (long *)"children") || (*plVar18 == 0x6e6572646c696863))
            goto LAB_00d19a40;
          }
          lVar28 = lVar28 + -0x30;
          plVar23 = plVar23 + 6;
        } while (lVar28 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    lVar28 = uVar21 * 0x30;
    do {
      iVar16 = (int)*plVar18;
      if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
        iVar16 = 0x15 - *(char *)((long)plVar18 + 0x15);
      }
      if (iVar16 == 8) {
        plVar4 = (long *)plVar18[1];
        if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
          plVar4 = plVar18;
        }
        if ((plVar4 == (long *)"children") || (*plVar4 == 0x6e6572646c696863)) goto LAB_00d199c8;
      }
      lVar28 = lVar28 + -0x30;
      plVar18 = plVar18 + 6;
    } while (lVar28 != 0);
  }
joined_r0x00d19d40:
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  Mat4::~Mat4((Mat4 *)&local_b0);
LAB_00d19d70:
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

