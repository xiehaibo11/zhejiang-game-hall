
/* cocos2d::Bundle3D::parseNodesRecursivelyJson(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, bool) */

long * __thiscall
cocos2d::Bundle3D::parseNodesRecursivelyJson(Bundle3D *this,GenericValue *param_1,bool param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  Mat4 *this_01;
  uint uVar5;
  Bundle3D BVar6;
  ushort uVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  size_t sVar11;
  ModelData *pMVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  Bundle3D *__s1;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  int *piVar21;
  long *plVar22;
  bool bVar23;
  uint *puVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  uint *puVar28;
  int *piVar29;
  double dVar30;
  ModelData *local_f8;
  NodeData *local_f0;
  ulong uStack_e8;
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
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  plVar10 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (plVar10 != (long *)0x0) {
    plVar10[5] = 0;
    *(undefined8 *)(plVar10 + 4) = 0;
    *plVar10 = (long)&PTR__NodeData_016d3488;
    plVar10[0xf] = 0;
    plVar10[0xe] = 0;
    plVar10[0x11] = 0;
    plVar10[0x10] = 0;
    plVar10[0xb] = 0;
    plVar10[10] = 0;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
    plVar10[7] = 0;
    plVar10[6] = 0;
    plVar10[9] = 0;
    plVar10[8] = 0;
    plVar10[1] = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    Mat4::Mat4((Mat4 *)(plVar10 + 4));
    plVar10[0xf] = 0;
    plVar10[0xe] = 0;
    plVar10[0x11] = 0;
    plVar10[0x10] = 0;
    plVar10[0xd] = 0;
    plVar10[0xc] = 0;
  }
  uVar27 = *(uint *)param_1;
  piVar14 = *(int **)(param_1 + 8);
  piVar26 = piVar14;
  if (uVar27 == 0) {
LAB_00d27d90:
    if (piVar26 == piVar14 + (ulong)uVar27 * 0xc) goto LAB_00d27db0;
    piVar14 = piVar26 + 6;
    if ((*(byte *)((long)piVar26 + 0x2f) >> 4 & 1) == 0) goto LAB_00d27dc0;
  }
  else {
    lVar19 = (ulong)uVar27 * 0x30;
    do {
      iVar9 = *piVar26;
      if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
      }
      if (iVar9 == 2) {
        piVar20 = *(int **)(piVar26 + 2);
        if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
          piVar20 = piVar26;
        }
        if ((piVar20 == (int *)0x143a510) || ((short)*piVar20 == 0x6469)) goto LAB_00d27d90;
      }
      lVar19 = lVar19 + -0x30;
      piVar26 = piVar26 + 0xc;
    } while (lVar19 != 0);
LAB_00d27db0:
    piVar14 = (int *)&rapidjson::
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
LAB_00d27dc0:
    piVar14 = *(int **)(piVar14 + 2);
  }
  sVar11 = strlen((char *)piVar14);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (plVar10 + 1),(char *)piVar14,sVar11);
  Mat4::Mat4((Mat4 *)&local_b0);
  uVar27 = *(uint *)param_1;
  piVar14 = *(int **)(param_1 + 8);
  piVar26 = piVar14;
  if (uVar27 == 0) {
LAB_00d27e6c:
    if (piVar26 == piVar14 + (ulong)uVar27 * 0xc) goto LAB_00d27f00;
    if (piVar26[6] != 0) {
      lVar19 = 0;
      uVar15 = 0;
      do {
        lVar16 = *(long *)(piVar26 + 8);
        uVar7 = *(ushort *)(lVar16 + lVar19 + 0x16);
        if ((uVar7 >> 9 & 1) == 0) {
          if ((uVar7 >> 5 & 1) == 0) {
            if ((uVar7 >> 6 & 1) == 0) {
              if ((uVar7 >> 7 & 1) == 0) {
                dVar30 = (double)*(ulong *)(lVar16 + lVar19);
              }
              else {
                dVar30 = (double)(long)*(ulong *)(lVar16 + lVar19);
              }
            }
            else {
              dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + lVar19));
            }
          }
          else {
            dVar30 = (double)(long)*(int *)(lVar16 + lVar19);
          }
        }
        else {
          dVar30 = *(double *)(lVar16 + lVar19);
        }
        *(float *)((long)&local_b0 + uVar15 * 4) = (float)dVar30;
        uVar15 = uVar15 + 1;
        lVar19 = lVar19 + 0x18;
      } while (uVar15 < (uint)piVar26[6]);
    }
  }
  else {
    lVar19 = (ulong)uVar27 * 0x30;
    do {
      iVar9 = *piVar26;
      if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
      }
      if (iVar9 == 9) {
        piVar20 = *(int **)(piVar26 + 2);
        if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
          piVar20 = piVar26;
        }
        if ((piVar20 == (int *)0x12b17b4) || (iVar9 = memcmp("transform",piVar20,9), iVar9 == 0))
        goto LAB_00d27e6c;
      }
      lVar19 = lVar19 + -0x30;
      piVar26 = piVar26 + 0xc;
    } while (lVar19 != 0);
LAB_00d27f00:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  plVar10[9] = lStack_88;
  plVar10[8] = local_90;
  plVar10[0xb] = lStack_78;
  plVar10[10] = lStack_80;
  plVar10[5] = lStack_a8;
  plVar10[4] = local_b0;
  plVar10[7] = lStack_98;
  plVar10[6] = lStack_a0;
  piVar14 = *(int **)(param_1 + 8);
  uVar27 = *(uint *)param_1;
  uVar15 = (ulong)uVar27;
  piVar20 = piVar14 + uVar15 * 0xc;
  piVar26 = piVar14;
  if (uVar27 == 0) {
LAB_00d27fa8:
    if (piVar20 == piVar26) goto LAB_00d2871c;
    if (uVar27 == 0) {
LAB_00d2801c:
      if (piVar14 == piVar20) goto LAB_00d28054;
      if (piVar14[6] == 0) {
        bVar23 = false;
      }
      else {
        bVar23 = false;
        uVar15 = 0;
        do {
          pMVar12 = operator_new(0x68,(nothrow_t *)&std::nothrow);
          if (pMVar12 != (ModelData *)0x0) {
            *(long *)(pMVar12 + 0x10) = 0;
            *(long *)(pMVar12 + 8) = 0;
            *(long *)(pMVar12 + 0x20) = 0;
            *(long *)(pMVar12 + 0x18) = 0;
            *(undefined ***)pMVar12 = &PTR__ModelData_016d34c0;
            *(long *)(pMVar12 + 0x30) = 0;
            *(long *)(pMVar12 + 0x28) = 0;
            *(long *)(pMVar12 + 0x40) = 0;
            *(long *)(pMVar12 + 0x38) = 0;
            *(long *)(pMVar12 + 0x50) = 0;
            *(long *)(pMVar12 + 0x48) = 0;
            *(long *)(pMVar12 + 0x60) = 0;
            *(long *)(pMVar12 + 0x58) = 0;
          }
          puVar28 = (uint *)(*(long *)(piVar14 + 8) + uVar15 * 0x18);
          puVar24 = puVar28 + 2;
          piVar20 = *(int **)puVar24;
          uVar27 = *puVar28;
          piVar26 = piVar20;
          local_f8 = pMVar12;
          if (uVar27 == 0) {
LAB_00d2817c:
            if (piVar26 == piVar20 + (ulong)uVar27 * 0xc) goto LAB_00d2819c;
            piVar20 = piVar26 + 6;
            if ((*(byte *)((long)piVar26 + 0x2f) >> 4 & 1) == 0) goto LAB_00d281ac;
          }
          else {
            lVar19 = (ulong)uVar27 * 0x30;
            do {
              iVar9 = *piVar26;
              if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
              }
              if (iVar9 == 10) {
                piVar29 = *(int **)(piVar26 + 2);
                if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                  piVar29 = piVar26;
                }
                if ((piVar29 == (int *)"meshpartid") ||
                   (iVar9 = memcmp("meshpartid",piVar29,10), iVar9 == 0)) goto LAB_00d2817c;
              }
              lVar19 = lVar19 + -0x30;
              piVar26 = piVar26 + 0xc;
            } while (lVar19 != 0);
LAB_00d2819c:
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
LAB_00d281ac:
            piVar20 = *(int **)(piVar20 + 2);
          }
          sVar11 = strlen((char *)piVar20);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pMVar12 + 8),(char *)piVar20,sVar11);
          uVar27 = *puVar28;
          piVar20 = *(int **)puVar24;
          piVar26 = piVar20;
          if (uVar27 == 0) {
LAB_00d28248:
            if (piVar26 == piVar20 + (ulong)uVar27 * 0xc) goto LAB_00d28270;
            piVar20 = piVar26 + 6;
            if ((*(byte *)((long)piVar26 + 0x2f) >> 4 & 1) == 0) goto LAB_00d28288;
          }
          else {
            lVar19 = (ulong)uVar27 * 0x30;
            do {
              iVar9 = *piVar26;
              if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
              }
              if (iVar9 == 10) {
                piVar29 = *(int **)(piVar26 + 2);
                if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                  piVar29 = piVar26;
                }
                if ((piVar29 == (int *)"materialid") ||
                   (iVar9 = memcmp("materialid",piVar29,10), iVar9 == 0)) goto LAB_00d28248;
              }
              lVar19 = lVar19 + -0x30;
              piVar26 = piVar26 + 0xc;
            } while (lVar19 != 0);
LAB_00d28270:
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
LAB_00d28288:
            piVar20 = *(int **)(piVar20 + 2);
          }
          this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)(local_f8 + 0x20);
          sVar11 = strlen((char *)piVar20);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (this_00,(char *)piVar20,sVar11);
          uVar25 = (ulong)((byte)local_f8[8] >> 1);
          if (((byte)local_f8[8] & 1) != 0) {
            uVar25 = *(ulong *)(local_f8 + 0x10);
          }
          if (uVar25 == 0) {
            if (local_f8 != (ModelData *)0x0) goto LAB_00d289dc;
LAB_00d289e8:
            local_f8 = (ModelData *)0x0;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
            plVar10 = (long *)0x0;
            goto LAB_00d28a08;
          }
          uVar25 = (ulong)((byte)local_f8[0x20] >> 1);
          if (((byte)local_f8[0x20] & 1) != 0) {
            uVar25 = *(ulong *)(local_f8 + 0x28);
          }
          if (uVar25 == 0) {
LAB_00d289dc:
            lVar19 = *(long *)local_f8;
LAB_00d289e0:
            (**(code **)(lVar19 + 8))(local_f8);
            goto LAB_00d289e8;
          }
          piVar26 = *(int **)puVar24;
          uVar27 = *puVar28;
          uVar25 = (ulong)uVar27;
          piVar29 = piVar26 + uVar25 * 0xc;
          piVar20 = piVar26;
          if (uVar27 != 0) {
            lVar19 = uVar25 * 0x30;
            piVar21 = piVar26;
            do {
              iVar9 = *piVar21;
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar21 + 0x15);
              }
              if (iVar9 == 5) {
                piVar17 = *(int **)(piVar21 + 2);
                if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                  piVar17 = piVar21;
                }
                piVar20 = piVar21;
                if ((piVar17 == (int *)"bones") || (iVar9 = memcmp("bones",piVar17,5), iVar9 == 0))
                break;
              }
              lVar19 = lVar19 + -0x30;
              piVar21 = piVar21 + 0xc;
              piVar20 = piVar29;
            } while (lVar19 != 0);
          }
          if (piVar29 != piVar20) {
            if (uVar27 == 0) {
LAB_00d283e0:
              if (piVar26 != piVar29) {
                if (piVar26[6] != 0) {
                  uVar27 = 0;
                  do {
                    pMVar12 = local_f8;
                    puVar24 = (uint *)(*(long *)(piVar26 + 8) + (ulong)uVar27 * 0x18);
                    piVar20 = *(int **)(puVar24 + 2);
                    uVar5 = *puVar24;
                    uVar25 = (ulong)uVar5;
                    piVar21 = piVar20 + uVar25 * 0xc;
                    piVar29 = piVar20;
                    if (uVar5 != 0) {
                      lVar19 = uVar25 * 0x30;
                      piVar17 = piVar20;
                      do {
                        iVar9 = *piVar17;
                        if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
                          iVar9 = 0x15 - *(char *)((long)piVar17 + 0x15);
                        }
                        if (iVar9 == 4) {
                          piVar1 = *(int **)(piVar17 + 2);
                          if ((*(ushort *)((long)piVar17 + 0x16) & 0x1000) != 0) {
                            piVar1 = piVar17;
                          }
                          piVar29 = piVar17;
                          if ((piVar1 == (int *)&UNK_014190be) || (*piVar1 == 0x65646f6e)) break;
                        }
                        lVar19 = lVar19 + -0x30;
                        piVar17 = piVar17 + 0xc;
                        piVar29 = piVar21;
                      } while (lVar19 != 0);
                    }
                    if (piVar21 == piVar29) {
                      if (local_f8 == (ModelData *)0x0) goto LAB_00d289e8;
                      lVar19 = *(long *)local_f8;
                      goto LAB_00d289e0;
                    }
                    if (uVar5 == 0) {
LAB_00d28528:
                      if (piVar20 == piVar21) goto LAB_00d28540;
                      piVar29 = piVar20 + 6;
                      if ((*(byte *)((long)piVar20 + 0x2f) >> 4 & 1) == 0) goto LAB_00d28550;
                    }
                    else {
                      lVar19 = uVar25 * 0x30;
                      do {
                        iVar9 = *piVar20;
                        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                          iVar9 = 0x15 - *(char *)((long)piVar20 + 0x15);
                        }
                        if (iVar9 == 4) {
                          piVar29 = *(int **)(piVar20 + 2);
                          if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                            piVar29 = piVar20;
                          }
                          if ((piVar29 == (int *)&UNK_014190be) || (*piVar29 == 0x65646f6e))
                          goto LAB_00d28528;
                        }
                        lVar19 = lVar19 + -0x30;
                        piVar20 = piVar20 + 0xc;
                      } while (lVar19 != 0);
LAB_00d28540:
                      piVar29 = (int *)&rapidjson::
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
LAB_00d28550:
                      piVar29 = *(int **)(piVar29 + 2);
                    }
                    std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    basic_string<decltype(nullptr)>
                              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_f0,(char *)piVar29);
                    puVar4 = *(ulong **)(pMVar12 + 0x40);
                    if (puVar4 < *(ulong **)(pMVar12 + 0x48)) {
                      puVar4[2] = (ulong)local_e0;
                      puVar4[1] = uStack_e8;
                      *puVar4 = (ulong)local_f0;
                      uStack_e8 = 0;
                      local_e0 = (void *)0x0;
                      local_f0 = (NodeData *)0x0;
                      *(ulong **)(pMVar12 + 0x40) = puVar4 + 3;
                    }
                    else {
                      std::__ndk1::
                      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      ::
                      __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                                  *)(pMVar12 + 0x38),(basic_string *)&local_f0);
                      if (((ulong)local_f0 & 1) != 0) {
                        operator_delete(local_e0);
                      }
                    }
                    Mat4::Mat4((Mat4 *)&local_f0);
                    uVar5 = *puVar24;
                    piVar29 = *(int **)(puVar24 + 2);
                    piVar20 = piVar29;
                    if (uVar5 == 0) {
LAB_00d28624:
                      if (piVar20 == piVar29 + (ulong)uVar5 * 0xc) goto LAB_00d286c0;
                      if (piVar20[6] != 0) {
                        lVar19 = 0;
                        uVar25 = 0;
                        do {
                          lVar16 = *(long *)(piVar20 + 8);
                          uVar7 = *(ushort *)(lVar16 + lVar19 + 0x16);
                          if ((uVar7 >> 9 & 1) == 0) {
                            if ((uVar7 >> 5 & 1) == 0) {
                              if ((uVar7 >> 6 & 1) == 0) {
                                if ((uVar7 >> 7 & 1) == 0) {
                                  dVar30 = (double)*(ulong *)(lVar16 + lVar19);
                                }
                                else {
                                  dVar30 = (double)(long)*(ulong *)(lVar16 + lVar19);
                                }
                              }
                              else {
                                dVar30 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + lVar19));
                              }
                            }
                            else {
                              dVar30 = (double)(long)*(int *)(lVar16 + lVar19);
                            }
                          }
                          else {
                            dVar30 = *(double *)(lVar16 + lVar19);
                          }
                          *(float *)((long)&local_f0 + uVar25 * 4) = (float)dVar30;
                          uVar25 = uVar25 + 1;
                          lVar19 = lVar19 + 0x18;
                        } while (uVar25 < (uint)piVar20[6]);
                      }
                    }
                    else {
                      lVar19 = (ulong)uVar5 * 0x30;
                      do {
                        iVar9 = *piVar20;
                        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                          iVar9 = 0x15 - *(char *)((long)piVar20 + 0x15);
                        }
                        if (iVar9 == 9) {
                          piVar21 = *(int **)(piVar20 + 2);
                          if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                            piVar21 = piVar20;
                          }
                          if ((piVar21 == (int *)0x12b17b4) ||
                             (iVar9 = memcmp("transform",piVar21,9), iVar9 == 0)) goto LAB_00d28624;
                        }
                        lVar19 = lVar19 + -0x30;
                        piVar20 = piVar20 + 0xc;
                      } while (lVar19 != 0);
LAB_00d286c0:
                      rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer = 0;
                      DAT_01785a58 = 0;
                      DAT_01785a60 = 0;
                    }
                    pMVar12 = local_f8;
                    this_01 = *(Mat4 **)(local_f8 + 0x58);
                    if (this_01 == *(Mat4 **)(local_f8 + 0x60)) {
                      std::__ndk1::vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>>::
                      __push_back_slow_path<cocos2d::Mat4_const&>
                                ((vector<cocos2d::Mat4,std::__ndk1::allocator<cocos2d::Mat4>> *)
                                 (local_f8 + 0x50),(Mat4 *)&local_f0);
                    }
                    else {
                      Mat4::Mat4(this_01,(Mat4 *)&local_f0);
                      *(Mat4 **)(pMVar12 + 0x58) = this_01 + 0x40;
                    }
                    Mat4::~Mat4((Mat4 *)&local_f0);
                    uVar27 = uVar27 + 1;
                  } while (uVar27 < (uint)piVar26[6]);
                  if (piVar26[6] != 0) {
                    bVar23 = true;
                  }
                }
                goto LAB_00d2807c;
              }
            }
            else {
              lVar19 = uVar25 * 0x30;
              do {
                iVar9 = *piVar26;
                if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                  iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
                }
                if (iVar9 == 5) {
                  piVar20 = *(int **)(piVar26 + 2);
                  if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                    piVar20 = piVar26;
                  }
                  if ((piVar20 == (int *)"bones") || (iVar9 = memcmp("bones",piVar20,5), iVar9 == 0)
                     ) goto LAB_00d283e0;
                }
                lVar19 = lVar19 + -0x30;
                piVar26 = piVar26 + 0xc;
              } while (lVar19 != 0);
            }
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
LAB_00d2807c:
          puVar3 = (undefined8 *)plVar10[0xd];
          if (puVar3 == (undefined8 *)plVar10[0xe]) {
            std::__ndk1::vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>>::
            __push_back_slow_path<cocos2d::ModelData*const&>
                      ((vector<cocos2d::ModelData*,std::__ndk1::allocator<cocos2d::ModelData*>> *)
                       (plVar10 + 0xc),&local_f8);
          }
          else {
            *puVar3 = local_f8;
            plVar10[0xd] = (long)(puVar3 + 1);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < (uint)piVar14[6]);
      }
    }
    else {
      lVar19 = uVar15 * 0x30;
      do {
        iVar9 = *piVar14;
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar14 + 0x15);
        }
        if (iVar9 == 5) {
          piVar26 = *(int **)(piVar14 + 2);
          if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
            piVar26 = piVar14;
          }
          if ((piVar26 == (int *)"parts") || (iVar9 = memcmp("parts",piVar26,5), iVar9 == 0))
          goto LAB_00d2801c;
        }
        lVar19 = lVar19 + -0x30;
        piVar14 = piVar14 + 0xc;
      } while (lVar19 != 0);
LAB_00d28054:
      bVar23 = false;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  else {
    lVar19 = uVar15 * 0x30;
    do {
      iVar9 = *piVar26;
      if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar26 + 0x15);
      }
      if (iVar9 == 5) {
        piVar29 = *(int **)(piVar26 + 2);
        if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
          piVar29 = piVar26;
        }
        if ((piVar29 == (int *)"parts") || (iVar9 = memcmp("parts",piVar29,5), iVar9 == 0))
        goto LAB_00d27fa8;
      }
      lVar19 = lVar19 + -0x30;
      piVar26 = piVar26 + 0xc;
    } while (lVar19 != 0);
LAB_00d2871c:
    bVar23 = false;
  }
  BVar6 = this[0x38];
  uVar15 = (ulong)((byte)BVar6 >> 1);
  if (((byte)BVar6 & 1) != 0) {
    uVar15 = *(ulong *)(this + 0x40);
  }
  if (uVar15 == 3) {
    __s1 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar6 & 1) == 0) {
      __s1 = this + 0x39;
    }
    iVar9 = memcmp(__s1,&DAT_0149b808,3);
    if ((((((iVar9 == 0) || (iVar9 = memcmp(__s1,&DAT_012f2699,3), iVar9 == 0)) ||
          (iVar9 = memcmp(__s1,"0.3",3), iVar9 == 0)) ||
         ((iVar9 = memcmp(__s1,&DAT_013c6afc,3), iVar9 == 0 ||
          (iVar9 = memcmp(__s1,&DAT_01418e73,3), iVar9 == 0)))) ||
        (iVar9 = memcmp(__s1,&DAT_01418e8f,3), iVar9 == 0)) && (bVar23 || param_2)) {
      local_90 = Mat4::IDENTITY._32_8_;
      lStack_88 = Mat4::IDENTITY._40_8_;
      lStack_80 = Mat4::IDENTITY._48_8_;
      lStack_78 = Mat4::IDENTITY._56_8_;
      local_b0 = Mat4::IDENTITY._0_8_;
      lStack_a8 = Mat4::IDENTITY._8_8_;
      lStack_a0 = Mat4::IDENTITY._16_8_;
      lStack_98 = Mat4::IDENTITY._24_8_;
    }
  }
  plVar10[9] = lStack_88;
  plVar10[8] = local_90;
  plVar10[0xb] = lStack_78;
  plVar10[10] = lStack_80;
  plVar10[5] = lStack_a8;
  plVar10[4] = local_b0;
  plVar10[7] = lStack_98;
  plVar10[6] = lStack_a0;
  plVar22 = *(long **)(param_1 + 8);
  uVar27 = *(uint *)param_1;
  uVar15 = (ulong)uVar27;
  plVar13 = plVar22 + uVar15 * 6;
  plVar18 = plVar22;
  if (uVar27 == 0) {
LAB_00d288bc:
    if (plVar13 != plVar18) {
      if (uVar27 == 0) {
LAB_00d28934:
        if (plVar22 != plVar13) {
          if ((int)plVar22[3] != 0) {
            lVar19 = 0;
            uVar15 = 0;
            do {
              local_f0 = (NodeData *)
                         parseNodesRecursivelyJson
                                   (this,(GenericValue *)(plVar22[4] + lVar19),param_2);
              puVar4 = (ulong *)plVar10[0x10];
              if (puVar4 == (ulong *)plVar10[0x11]) {
                std::__ndk1::vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>>::
                __push_back_slow_path<cocos2d::NodeData*const&>
                          ((vector<cocos2d::NodeData*,std::__ndk1::allocator<cocos2d::NodeData*>> *)
                           (plVar10 + 0xf),&local_f0);
              }
              else {
                *puVar4 = (ulong)local_f0;
                plVar10[0x10] = (long)(puVar4 + 1);
              }
              uVar15 = uVar15 + 1;
              lVar19 = lVar19 + 0x18;
            } while (uVar15 < *(uint *)(plVar22 + 3));
          }
          goto LAB_00d28a08;
        }
      }
      else {
        lVar19 = uVar15 * 0x30;
        do {
          iVar9 = (int)*plVar22;
          if ((*(ushort *)((long)plVar22 + 0x16) & 0x1000) != 0) {
            iVar9 = 0x15 - *(char *)((long)plVar22 + 0x15);
          }
          if (iVar9 == 8) {
            plVar18 = (long *)plVar22[1];
            if ((*(ushort *)((long)plVar22 + 0x16) & 0x1000) != 0) {
              plVar18 = plVar22;
            }
            if ((plVar18 == (long *)"children") || (*plVar18 == 0x6e6572646c696863))
            goto LAB_00d28934;
          }
          lVar19 = lVar19 + -0x30;
          plVar22 = plVar22 + 6;
        } while (lVar19 != 0);
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
    lVar19 = uVar15 * 0x30;
    do {
      iVar9 = (int)*plVar18;
      if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)plVar18 + 0x15);
      }
      if (iVar9 == 8) {
        plVar2 = (long *)plVar18[1];
        if ((*(ushort *)((long)plVar18 + 0x16) & 0x1000) != 0) {
          plVar2 = plVar18;
        }
        if ((plVar2 == (long *)"children") || (*plVar2 == 0x6e6572646c696863)) goto LAB_00d288bc;
      }
      lVar19 = lVar19 + -0x30;
      plVar18 = plVar18 + 6;
    } while (lVar19 != 0);
  }
LAB_00d28a08:
  Mat4::~Mat4((Mat4 *)&local_b0);
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

