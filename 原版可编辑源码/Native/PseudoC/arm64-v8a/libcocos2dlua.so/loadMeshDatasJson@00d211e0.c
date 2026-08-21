
/* cocos2d::Bundle3D::loadMeshDatasJson(cocos2d::MeshDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadMeshDatasJson(Bundle3D *this,MeshDatas *param_1)

{
  long *plVar1;
  ulong uVar2;
  float *pfVar3;
  ulong *puVar4;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_00;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  long lVar9;
  ushort *puVar10;
  int *piVar11;
  int *piVar12;
  int iVar15;
  vector<float,std::__ndk1::allocator<float>> *pvVar16;
  Bundle3D *pBVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  int *piVar21;
  double *pdVar22;
  uint *puVar23;
  long *plVar24;
  ulong uVar25;
  int *piVar26;
  int *piVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int *piVar31;
  ulong uVar32;
  long *plVar33;
  int *piVar34;
  int *piVar35;
  uint *puVar36;
  ushort *puVar37;
  long lVar38;
  uint *puVar39;
  uint *puVar40;
  double dVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar47;
  double dVar46;
  int iVar48;
  int iVar49;
  int iVar50;
  double dVar51;
  Vec3 aVStack_c0 [16];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  ushort *local_98;
  ushort *local_90;
  ushort *local_88;
  vector<float,std::__ndk1::allocator<float>> *local_80;
  Vec3 aVStack_78 [16];
  long local_68;
  int *piVar13;
  int *piVar14;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  uVar6 = *(uint *)(this + 0x68);
  piVar34 = *(int **)(this + 0x70);
  piVar27 = piVar34;
  if (uVar6 == 0) {
LAB_00d212a4:
    if (piVar27 != piVar34 + (ulong)uVar6 * 0xc) {
      uVar6 = piVar27[6];
      if (uVar6 != 0) {
        uVar32 = 0;
        do {
          pvVar16 = operator_new(0x90,(nothrow_t *)&std::nothrow);
          if (pvVar16 != (vector<float,std::__ndk1::allocator<float>> *)0x0) {
            *(long *)pvVar16 = 0;
            *(long *)(pvVar16 + 8) = 0;
            *(undefined4 *)(pvVar16 + 0x18) = 0;
            *(long *)(pvVar16 + 0x10) = 0;
            *(long *)(pvVar16 + 0x28) = 0;
            *(long *)(pvVar16 + 0x20) = 0;
            *(long *)(pvVar16 + 0x38) = 0;
            *(long *)(pvVar16 + 0x30) = 0;
            *(long *)(pvVar16 + 0x48) = 0;
            *(long *)(pvVar16 + 0x40) = 0;
            *(long *)(pvVar16 + 0x58) = 0;
            *(long *)(pvVar16 + 0x50) = 0;
            *(undefined8 *)(pvVar16 + 100) = 0;
            *(undefined8 *)(pvVar16 + 0x5c) = 0;
            *(long *)(pvVar16 + 0x78) = 0;
            *(long *)(pvVar16 + 0x80) = 0;
            *(long *)(pvVar16 + 0x70) = 0;
            *(undefined4 *)(pvVar16 + 0x88) = 0;
          }
          puVar19 = (uint *)(*(long *)(piVar27 + 8) + uVar32 * 0x18);
          puVar23 = puVar19 + 2;
          piVar35 = *(int **)puVar23;
          uVar18 = *puVar19;
          piVar34 = piVar35;
          local_80 = pvVar16;
          if (uVar18 == 0) {
LAB_00d213e4:
            if (piVar34 == piVar35 + (ulong)uVar18 * 0xc) goto LAB_00d213fc;
            puVar36 = (uint *)(piVar34 + 6);
            uVar18 = *puVar36;
          }
          else {
            lVar38 = (ulong)uVar18 * 0x30;
            do {
              iVar15 = *piVar34;
              if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                iVar15 = 0x15 - *(char *)((long)piVar34 + 0x15);
              }
              if (iVar15 == 10) {
                piVar21 = *(int **)(piVar34 + 2);
                if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                  piVar21 = piVar34;
                }
                if ((piVar21 == (int *)"attributes") ||
                   (iVar15 = memcmp("attributes",piVar21,10), iVar15 == 0)) goto LAB_00d213e4;
              }
              lVar38 = lVar38 + -0x30;
              piVar34 = piVar34 + 0xc;
            } while (lVar38 != 0);
LAB_00d213fc:
            puVar36 = (uint *)&rapidjson::
                               GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                               ::
                               operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                               ::buffer;
            uVar18 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          lVar38 = *(long *)(pvVar16 + 0x70);
          uVar25 = (ulong)(int)uVar18;
          *(uint *)(pvVar16 + 0x88) = uVar18;
          uVar28 = *(long *)(pvVar16 + 0x78) - lVar38 >> 4;
          if (uVar28 < uVar25) {
            std::__ndk1::
            vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>::
            __append((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                      *)(pvVar16 + 0x70),uVar25 - uVar28);
            uVar18 = *puVar36;
          }
          else {
            if (uVar28 != uVar25) {
              *(ulong *)(pvVar16 + 0x78) = lVar38 + uVar25 * 0x10;
            }
            uVar18 = *puVar36;
          }
          if (uVar18 != 0) {
            uVar25 = 0;
            do {
              puVar40 = (uint *)(*(long *)(puVar36 + 2) + uVar25 * 0x18);
              puVar39 = puVar40 + 2;
              piVar35 = *(int **)puVar39;
              uVar7 = *puVar40;
              uVar28 = (ulong)uVar7;
              piVar34 = piVar35;
              if (uVar7 == 0) {
LAB_00d21510:
                if (piVar34 == piVar35 + (ulong)uVar7 * 0xc) goto LAB_00d21534;
                iVar15 = piVar34[6];
                piVar34 = piVar35;
                if (uVar7 != 0) goto LAB_00d2155c;
LAB_00d215c0:
                if (piVar34 == piVar35 + uVar28 * 0xc) goto LAB_00d215e0;
                piVar35 = piVar34 + 6;
                if ((*(byte *)((long)piVar34 + 0x2f) >> 4 & 1) == 0) goto LAB_00d215f0;
              }
              else {
                lVar38 = uVar28 * 0x30;
                do {
                  iVar15 = *piVar34;
                  if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                    iVar15 = 0x15 - *(char *)((long)piVar34 + 0x15);
                  }
                  if (iVar15 == 4) {
                    piVar21 = *(int **)(piVar34 + 2);
                    if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                      piVar21 = piVar34;
                    }
                    if ((piVar21 == (int *)0x1275948) || (*piVar21 == 0x657a6973))
                    goto LAB_00d21510;
                  }
                  lVar38 = lVar38 + -0x30;
                  piVar34 = piVar34 + 0xc;
                } while (lVar38 != 0);
LAB_00d21534:
                iVar15 = 0;
                rapidjson::
                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                ::
                operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                ::buffer = 0;
                DAT_01785a58 = 0;
                DAT_01785a60 = 0;
                piVar35 = *(int **)puVar39;
                uVar28 = (ulong)*puVar40;
                piVar34 = piVar35;
                if (*puVar40 == 0) goto LAB_00d215c0;
LAB_00d2155c:
                lVar38 = uVar28 * 0x30;
                piVar34 = piVar35;
                do {
                  iVar42 = *piVar34;
                  if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                    iVar42 = 0x15 - *(char *)((long)piVar34 + 0x15);
                  }
                  if (iVar42 == 4) {
                    piVar21 = *(int **)(piVar34 + 2);
                    if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                      piVar21 = piVar34;
                    }
                    if ((piVar21 == (int *)0x13ff2a0) || (*piVar21 == 0x65707974))
                    goto LAB_00d215c0;
                  }
                  piVar34 = piVar34 + 0xc;
                  lVar38 = lVar38 + -0x30;
                } while (lVar38 != 0);
LAB_00d215e0:
                piVar35 = (int *)&rapidjson::
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
LAB_00d215f0:
                piVar35 = *(int **)(piVar35 + 2);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_98,(char *)piVar35);
              uVar7 = *puVar40;
              piVar35 = *(int **)puVar39;
              piVar34 = piVar35;
              if (uVar7 == 0) {
LAB_00d21670:
                if (piVar34 == piVar35 + (ulong)uVar7 * 0xc) goto LAB_00d21698;
                piVar35 = piVar34 + 6;
                if ((*(byte *)((long)piVar34 + 0x2f) >> 4 & 1) == 0) goto LAB_00d216b0;
              }
              else {
                lVar38 = (ulong)uVar7 * 0x30;
                do {
                  iVar42 = *piVar34;
                  if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                    iVar42 = 0x15 - *(char *)((long)piVar34 + 0x15);
                  }
                  if (iVar42 == 9) {
                    piVar21 = *(int **)(piVar34 + 2);
                    if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                      piVar21 = piVar34;
                    }
                    if ((piVar21 == (int *)0x14084c3) ||
                       (iVar42 = memcmp("attribute",piVar21,9), iVar42 == 0)) goto LAB_00d21670;
                  }
                  lVar38 = lVar38 + -0x30;
                  piVar34 = piVar34 + 0xc;
                } while (lVar38 != 0);
LAB_00d21698:
                piVar35 = (int *)&rapidjson::
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
LAB_00d216b0:
                piVar35 = *(int **)(piVar35 + 2);
              }
              pBVar17 = (Bundle3D *)
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_b0,(char *)piVar35);
              pBVar17 = (Bundle3D *)parseGLType(pBVar17,(basic_string *)&local_98);
              iVar42 = parseGLProgramAttribute(pBVar17,(basic_string *)&local_b0);
              piVar34 = (int *)(*(long *)(local_80 + 0x70) + uVar25 * 0x10);
              *piVar34 = iVar15;
              piVar34[1] = (int)pBVar17;
              piVar34[2] = iVar42;
              piVar34[3] = iVar15 << 2;
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
              if (((ulong)local_98 & 1) != 0) {
                operator_delete(local_88);
              }
              uVar25 = uVar25 + 1;
            } while (uVar25 != uVar18);
          }
          uVar18 = *puVar19;
          plVar24 = *(long **)puVar23;
          plVar33 = plVar24;
          if (uVar18 == 0) {
LAB_00d217a8:
            if (plVar33 == plVar24 + (ulong)uVar18 * 6) goto LAB_00d2186c;
            uVar18 = *(uint *)(plVar33 + 3);
            *(uint *)(local_80 + 0x18) = uVar18;
            if (uVar18 != 0) {
              lVar38 = 0;
              while( true ) {
                lVar20 = plVar33[4];
                uVar8 = *(ushort *)(lVar20 + lVar38 + 0x16);
                if ((uVar8 >> 9 & 1) == 0) {
                  if ((uVar8 >> 5 & 1) == 0) {
                    if ((uVar8 >> 6 & 1) == 0) {
                      if ((uVar8 >> 7 & 1) == 0) {
                        dVar41 = (double)*(ulong *)(lVar20 + lVar38);
                      }
                      else {
                        dVar41 = (double)(long)*(ulong *)(lVar20 + lVar38);
                      }
                    }
                    else {
                      dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar20 + lVar38));
                    }
                  }
                  else {
                    dVar41 = (double)(long)*(int *)(lVar20 + lVar38);
                  }
                }
                else {
                  dVar41 = *(double *)(lVar20 + lVar38);
                }
                local_98 = (ushort *)CONCAT44(local_98._4_4_,(float)dVar41);
                pfVar3 = *(float **)(local_80 + 8);
                if (pfVar3 < *(float **)(local_80 + 0x10)) {
                  *pfVar3 = (float)dVar41;
                  *(float **)(local_80 + 8) = pfVar3 + 1;
                }
                else {
                  std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                  __push_back_slow_path<float>(local_80,(float *)&local_98);
                }
                if ((ulong)uVar18 * 0x18 + -0x18 == lVar38) break;
                lVar38 = lVar38 + 0x18;
              }
            }
          }
          else {
            lVar38 = (ulong)uVar18 * 0x30;
            do {
              iVar15 = (int)*plVar33;
              if ((*(ushort *)((long)plVar33 + 0x16) & 0x1000) != 0) {
                iVar15 = 0x15 - *(char *)((long)plVar33 + 0x15);
              }
              if (iVar15 == 8) {
                plVar1 = (long *)plVar33[1];
                if ((*(ushort *)((long)plVar33 + 0x16) & 0x1000) != 0) {
                  plVar1 = plVar33;
                }
                if ((plVar1 == (long *)"vertices") || (*plVar1 == 0x7365636974726576))
                goto LAB_00d217a8;
              }
              lVar38 = lVar38 + -0x30;
              plVar33 = plVar33 + 6;
            } while (lVar38 != 0);
LAB_00d2186c:
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
            *(undefined4 *)(local_80 + 0x18) = 0;
          }
          uVar18 = *puVar19;
          piVar35 = *(int **)puVar23;
          piVar34 = piVar35;
          if (uVar18 == 0) {
LAB_00d21904:
            if (piVar34 == piVar35 + (ulong)uVar18 * 0xc) goto LAB_00d22210;
            uVar18 = piVar34[6];
            if (uVar18 != 0) {
              uVar25 = 0;
              do {
                pvVar16 = local_80;
                local_90 = (ushort *)0x0;
                local_88 = (ushort *)0x0;
                local_98 = (ushort *)0x0;
                puVar36 = (uint *)(*(long *)(piVar34 + 8) + uVar25 * 0x18);
                puVar39 = puVar36 + 2;
                piVar21 = *(int **)puVar39;
                uVar7 = *puVar36;
                piVar35 = piVar21;
                if (uVar7 == 0) {
LAB_00d219d4:
                  if (piVar35 == piVar21 + (ulong)uVar7 * 0xc) goto LAB_00d219f4;
                  piVar21 = piVar35 + 6;
                  if ((*(byte *)((long)piVar35 + 0x2f) >> 4 & 1) == 0) goto LAB_00d21a04;
                }
                else {
                  lVar38 = (ulong)uVar7 * 0x30;
                  do {
                    iVar15 = *piVar35;
                    if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                      iVar15 = 0x15 - *(char *)((long)piVar35 + 0x15);
                    }
                    if (iVar15 == 2) {
                      piVar26 = *(int **)(piVar35 + 2);
                      if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                        piVar26 = piVar35;
                      }
                      if ((piVar26 == (int *)0x143a510) || ((short)*piVar26 == 0x6469))
                      goto LAB_00d219d4;
                    }
                    lVar38 = lVar38 + -0x30;
                    piVar35 = piVar35 + 0xc;
                  } while (lVar38 != 0);
LAB_00d219f4:
                  piVar21 = (int *)&rapidjson::
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
LAB_00d21a04:
                  piVar21 = *(int **)(piVar21 + 2);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_b0,(char *)piVar21);
                puVar4 = *(ulong **)(pvVar16 + 0x40);
                if (puVar4 < *(ulong **)(pvVar16 + 0x48)) {
                  puVar4[2] = (ulong)local_a0;
                  puVar4[1] = uStack_a8;
                  *puVar4 = local_b0;
                  uStack_a8 = 0;
                  local_a0 = (void *)0x0;
                  local_b0 = 0;
                  *(ulong **)(pvVar16 + 0x40) = puVar4 + 3;
                }
                else {
                  std::__ndk1::
                  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                            ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                              *)(pvVar16 + 0x38),(basic_string *)&local_b0);
                  if ((local_b0 & 1) != 0) {
                    operator_delete(local_a0);
                  }
                }
                uVar7 = *puVar36;
                piVar21 = *(int **)puVar39;
                piVar35 = piVar21;
                if (uVar7 == 0) {
LAB_00d21ad4:
                  if (piVar35 == piVar21 + (ulong)uVar7 * 0xc) goto LAB_00d21b40;
                  uVar7 = piVar35[6];
                  if (uVar7 != 0) {
                    lVar38 = 0;
                    do {
                      uVar8 = (ushort)*(undefined4 *)(*(long *)(piVar35 + 8) + lVar38);
                      local_b0 = CONCAT62(local_b0._2_6_,uVar8);
                      if (local_90 < local_88) {
                        *local_90 = uVar8;
                        local_90 = local_90 + 1;
                      }
                      else {
                        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::
                        __push_back_slow_path<unsigned_short>
                                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)
                                   &local_98,(ushort *)&local_b0);
                      }
                      lVar38 = lVar38 + 0x18;
                    } while ((ulong)uVar7 * 0x18 - lVar38 != 0);
                  }
                }
                else {
                  lVar38 = (ulong)uVar7 * 0x30;
                  do {
                    iVar15 = *piVar35;
                    if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                      iVar15 = 0x15 - *(char *)((long)piVar35 + 0x15);
                    }
                    if (iVar15 == 7) {
                      piVar26 = *(int **)(piVar35 + 2);
                      if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                        piVar26 = piVar35;
                      }
                      if ((piVar26 == (int *)"indices") ||
                         (iVar15 = memcmp("indices",piVar26,7), iVar15 == 0)) goto LAB_00d21ad4;
                    }
                    lVar38 = lVar38 + -0x30;
                    piVar35 = piVar35 + 0xc;
                  } while (lVar38 != 0);
LAB_00d21b40:
                  rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::
                  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                  ::buffer = 0;
                  DAT_01785a58 = 0;
                  DAT_01785a60 = 0;
                }
                pvVar16 = local_80;
                this_00 = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                           (local_80 + 0x28);
                if (this_00 ==
                    *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                     (local_80 + 0x30)) {
                  std::__ndk1::
                  vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                  ::
                  __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>const&>
                            ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                              *)(local_80 + 0x20),(vector *)&local_98);
                }
                else {
                  std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                            (this_00,(vector *)&local_98);
                  *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)
                   (pvVar16 + 0x28) = this_00 + 0x18;
                }
                pvVar16 = local_80;
                *(int *)(local_80 + 0x68) =
                     (int)((ulong)(*(long *)(local_80 + 0x28) - *(long *)(local_80 + 0x20)) >> 3) *
                     -0x55555555;
                piVar35 = *(int **)puVar23;
                uVar7 = *puVar19;
                piVar21 = piVar35 + (ulong)uVar7 * 0xc;
                if (uVar7 == 0) {
LAB_00d21c3c:
                  if (piVar21 == piVar35) goto LAB_00d21cbc;
                  uVar7 = *puVar36;
                  uVar28 = (ulong)uVar7;
                  piVar21 = *(int **)puVar39;
                  piVar35 = piVar21;
                  if (uVar7 == 0) {
LAB_00d21cf4:
                    if (piVar35 == piVar21 + (ulong)uVar7 * 0xc) goto LAB_00d21d0c;
                    piVar35 = piVar35 + 6;
                  }
                  else {
                    lVar38 = uVar28 * 0x30;
                    do {
                      iVar15 = *piVar35;
                      if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                        iVar15 = 0x15 - *(char *)((long)piVar35 + 0x15);
                      }
                      if (iVar15 == 4) {
                        piVar26 = *(int **)(piVar35 + 2);
                        if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                          piVar26 = piVar35;
                        }
                        if ((piVar26 == (int *)&DAT_01419088) || (*piVar26 == 0x62626161))
                        goto LAB_00d21cf4;
                      }
                      lVar38 = lVar38 + -0x30;
                      piVar35 = piVar35 + 0xc;
                    } while (lVar38 != 0);
LAB_00d21d0c:
                    piVar35 = (int *)&rapidjson::
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
                    piVar21 = *(int **)puVar39;
                    uVar28 = (ulong)*puVar36;
                  }
                  piVar26 = piVar21 + uVar28 * 0xc;
                  if ((int)uVar28 == 0) {
LAB_00d21d94:
                    if ((piVar26 == piVar21) || (*piVar35 != 6)) goto LAB_00d21de4;
                    pdVar22 = *(double **)(piVar35 + 2);
                    uVar8 = *(ushort *)((long)pdVar22 + 0x16);
                    if ((uVar8 >> 9 & 1) == 0) {
                      if ((uVar8 >> 5 & 1) != 0) {
                        dVar41 = (double)(long)*(int *)pdVar22;
                        uVar8 = *(ushort *)((long)pdVar22 + 0x2e);
                        goto joined_r0x00d21ff0;
                      }
                      if ((uVar8 >> 6 & 1) == 0) {
                        if ((uVar8 >> 7 & 1) == 0) {
                          dVar41 = (double)(ulong)*pdVar22;
                          uVar8 = *(ushort *)((long)pdVar22 + 0x2e);
                          goto joined_r0x00d21ff0;
                        }
                        dVar41 = (double)(long)*pdVar22;
                        uVar8 = *(ushort *)((long)pdVar22 + 0x2e);
                      }
                      else {
                        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar22);
                        uVar8 = *(ushort *)((long)pdVar22 + 0x2e);
                      }
                      if ((uVar8 >> 9 & 1) == 0) goto LAB_00d21ff4;
LAB_00d22020:
                      dVar46 = pdVar22[3];
                    }
                    else {
                      dVar41 = *pdVar22;
                      uVar8 = *(ushort *)((long)pdVar22 + 0x2e);
joined_r0x00d21ff0:
                      if ((uVar8 >> 9 & 1) != 0) goto LAB_00d22020;
LAB_00d21ff4:
                      if ((uVar8 >> 5 & 1) == 0) {
                        if ((uVar8 >> 6 & 1) == 0) {
                          if ((uVar8 >> 7 & 1) == 0) {
                            dVar46 = (double)(ulong)pdVar22[3];
                          }
                          else {
                            dVar46 = (double)(long)pdVar22[3];
                          }
                        }
                        else {
                          dVar46 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar22 + 3));
                        }
                      }
                      else {
                        dVar46 = (double)(long)*(int *)(pdVar22 + 3);
                      }
                    }
                    uVar8 = *(ushort *)((long)pdVar22 + 0x46);
                    if ((uVar8 >> 9 & 1) == 0) {
                      if ((uVar8 >> 5 & 1) == 0) {
                        if ((uVar8 >> 6 & 1) == 0) {
                          if ((uVar8 >> 7 & 1) == 0) {
                            dVar51 = (double)(ulong)pdVar22[6];
                          }
                          else {
                            dVar51 = (double)(long)pdVar22[6];
                          }
                        }
                        else {
                          dVar51 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar22 + 6));
                        }
                      }
                      else {
                        dVar51 = (double)(long)*(int *)(pdVar22 + 6);
                      }
                    }
                    else {
                      dVar51 = pdVar22[6];
                    }
                    Vec3::Vec3(aVStack_78,(float)dVar41,(float)dVar46,(float)dVar51);
                    lVar38 = *(long *)(piVar35 + 2);
                    uVar8 = *(ushort *)(lVar38 + 0x5e);
                    if ((uVar8 >> 9 & 1) == 0) {
                      if ((uVar8 >> 5 & 1) != 0) {
                        dVar41 = (double)(long)*(int *)(lVar38 + 0x48);
                        uVar8 = *(ushort *)(lVar38 + 0x76);
                        goto joined_r0x00d220fc;
                      }
                      if ((uVar8 >> 6 & 1) == 0) {
                        if ((uVar8 >> 7 & 1) == 0) {
                          dVar41 = (double)*(ulong *)(lVar38 + 0x48);
                          uVar8 = *(ushort *)(lVar38 + 0x76);
                          goto joined_r0x00d220fc;
                        }
                        dVar41 = (double)(long)*(ulong *)(lVar38 + 0x48);
                        uVar8 = *(ushort *)(lVar38 + 0x76);
                      }
                      else {
                        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar38 + 0x48));
                        uVar8 = *(ushort *)(lVar38 + 0x76);
                      }
                      if ((uVar8 >> 9 & 1) == 0) goto LAB_00d22100;
LAB_00d2212c:
                      dVar46 = *(double *)(lVar38 + 0x60);
                    }
                    else {
                      dVar41 = *(double *)(lVar38 + 0x48);
                      uVar8 = *(ushort *)(lVar38 + 0x76);
joined_r0x00d220fc:
                      if ((uVar8 >> 9 & 1) != 0) goto LAB_00d2212c;
LAB_00d22100:
                      if ((uVar8 >> 5 & 1) == 0) {
                        if ((uVar8 >> 6 & 1) == 0) {
                          if ((uVar8 >> 7 & 1) == 0) {
                            dVar46 = (double)*(ulong *)(lVar38 + 0x60);
                          }
                          else {
                            dVar46 = (double)(long)*(ulong *)(lVar38 + 0x60);
                          }
                        }
                        else {
                          dVar46 = (double)NEON_ucvtf((ulong)*(uint *)(lVar38 + 0x60));
                        }
                      }
                      else {
                        dVar46 = (double)(long)*(int *)(lVar38 + 0x60);
                      }
                    }
                    uVar8 = *(ushort *)(lVar38 + 0x8e);
                    if ((uVar8 >> 9 & 1) == 0) {
                      if ((uVar8 >> 5 & 1) == 0) {
                        if ((uVar8 >> 6 & 1) == 0) {
                          if ((uVar8 >> 7 & 1) == 0) {
                            dVar51 = (double)*(ulong *)(lVar38 + 0x78);
                          }
                          else {
                            dVar51 = (double)(long)*(ulong *)(lVar38 + 0x78);
                          }
                        }
                        else {
                          dVar51 = (double)NEON_ucvtf((ulong)*(uint *)(lVar38 + 0x78));
                        }
                      }
                      else {
                        dVar51 = (double)(long)*(int *)(lVar38 + 0x78);
                      }
                    }
                    else {
                      dVar51 = *(double *)(lVar38 + 0x78);
                    }
                    Vec3::Vec3(aVStack_c0,(float)dVar41,(float)dVar46,(float)dVar51);
                    pvVar16 = local_80;
                    AABB::AABB((AABB *)&local_b0,aVStack_78,aVStack_c0);
                    FUN_00d1c324(pvVar16 + 0x50,&local_b0);
                  }
                  else {
                    lVar38 = uVar28 * 0x30;
                    do {
                      iVar15 = *piVar21;
                      if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                        iVar15 = 0x15 - *(char *)((long)piVar21 + 0x15);
                      }
                      if (iVar15 == 4) {
                        piVar11 = *(int **)(piVar21 + 2);
                        if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                          piVar11 = piVar21;
                        }
                        if ((piVar11 == (int *)&DAT_01419088) || (*piVar11 == 0x62626161))
                        goto LAB_00d21d94;
                      }
                      lVar38 = lVar38 + -0x30;
                      piVar21 = piVar21 + 0xc;
                    } while (lVar38 != 0);
LAB_00d21de4:
                    lVar38 = *(long *)(local_80 + 0x70);
                    lVar20 = *(long *)(local_80 + 0x78);
                    if (lVar38 == lVar20) {
                      iVar15 = 0;
                    }
                    else {
                      uVar29 = (lVar20 - lVar38) - 0x10U >> 4;
                      uVar28 = uVar29 + 1;
                      if (uVar28 < 9) {
                        iVar15 = 0;
                      }
                      else {
                        uVar2 = 8;
                        if ((uVar28 & 7) != 0) {
                          uVar2 = uVar28 & 7;
                        }
                        piVar35 = (int *)(lVar38 + 0x4c);
                        iVar15 = 0;
                        iVar42 = 0;
                        iVar43 = 0;
                        iVar44 = 0;
                        lVar38 = lVar38 + (uVar28 - uVar2) * 0x10;
                        lVar30 = (uVar29 - uVar2) + 1;
                        iVar45 = 0;
                        iVar47 = 0;
                        iVar48 = 0;
                        iVar49 = 0;
                        do {
                          piVar31 = piVar35 + -0x10;
                          iVar50 = *piVar35;
                          piVar21 = piVar35 + 4;
                          piVar26 = piVar35 + 8;
                          piVar11 = piVar35 + 0xc;
                          piVar12 = piVar35 + -0xc;
                          piVar13 = piVar35 + -8;
                          piVar14 = piVar35 + -4;
                          lVar30 = lVar30 + -8;
                          piVar35 = piVar35 + 0x20;
                          iVar45 = iVar50 + iVar45;
                          iVar47 = *piVar21 + iVar47;
                          iVar48 = *piVar26 + iVar48;
                          iVar49 = *piVar11 + iVar49;
                          iVar15 = *piVar31 + iVar15;
                          iVar42 = *piVar12 + iVar42;
                          iVar43 = *piVar13 + iVar43;
                          iVar44 = *piVar14 + iVar44;
                        } while (lVar30 != 0);
                        iVar15 = iVar45 + iVar15 + iVar47 + iVar42 +
                                 iVar48 + iVar43 + iVar49 + iVar44;
                      }
                      do {
                        piVar35 = (int *)(lVar38 + 0xc);
                        lVar38 = lVar38 + 0x10;
                        iVar15 = *piVar35 + iVar15;
                      } while (lVar20 != lVar38);
                    }
                    AABB::AABB((AABB *)&local_b0);
                    puVar10 = local_90;
                    iVar42 = iVar15 + 3;
                    if (-1 < iVar15) {
                      iVar42 = iVar15;
                    }
                    if (local_98 != local_90) {
                      puVar37 = local_98;
                      do {
                        pfVar3 = (float *)(*(long *)pvVar16 +
                                          (long)(iVar42 >> 2) * (ulong)*puVar37 * 4);
                        Vec3::Vec3(aVStack_78,*pfVar3,pfVar3[1],pfVar3[2]);
                        AABB::updateMinMax((AABB *)&local_b0,aVStack_78,1);
                        puVar37 = puVar37 + 1;
                      } while (puVar10 != puVar37);
                    }
                    FUN_00d1c324(pvVar16 + 0x50,&local_b0);
                  }
                }
                else {
                  lVar38 = (ulong)uVar7 * 0x30;
                  do {
                    iVar15 = *piVar35;
                    if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                      iVar15 = 0x15 - *(char *)((long)piVar35 + 0x15);
                    }
                    if (iVar15 == 4) {
                      piVar26 = *(int **)(piVar35 + 2);
                      if ((*(ushort *)((long)piVar35 + 0x16) & 0x1000) != 0) {
                        piVar26 = piVar35;
                      }
                      if ((piVar26 == (int *)&DAT_01419088) || (*piVar26 == 0x62626161))
                      goto LAB_00d21c3c;
                    }
                    lVar38 = lVar38 + -0x30;
                    piVar35 = piVar35 + 0xc;
                  } while (lVar38 != 0);
LAB_00d21cbc:
                  lVar38 = *(long *)(local_80 + 0x70);
                  lVar20 = *(long *)(local_80 + 0x78);
                  if (lVar38 == lVar20) {
                    iVar15 = 0;
                  }
                  else {
                    uVar29 = (lVar20 - lVar38) - 0x10U >> 4;
                    uVar28 = uVar29 + 1;
                    if (uVar28 < 9) {
                      iVar15 = 0;
                    }
                    else {
                      uVar2 = 8;
                      if ((uVar28 & 7) != 0) {
                        uVar2 = uVar28 & 7;
                      }
                      piVar35 = (int *)(lVar38 + 0x4c);
                      iVar15 = 0;
                      iVar42 = 0;
                      iVar43 = 0;
                      iVar44 = 0;
                      lVar38 = lVar38 + (uVar28 - uVar2) * 0x10;
                      lVar30 = (uVar29 - uVar2) + 1;
                      iVar45 = 0;
                      iVar47 = 0;
                      iVar48 = 0;
                      iVar49 = 0;
                      do {
                        piVar31 = piVar35 + -0x10;
                        iVar50 = *piVar35;
                        piVar11 = piVar35 + 4;
                        piVar26 = piVar35 + 8;
                        piVar21 = piVar35 + 0xc;
                        piVar13 = piVar35 + -0xc;
                        piVar14 = piVar35 + -8;
                        piVar12 = piVar35 + -4;
                        lVar30 = lVar30 + -8;
                        piVar35 = piVar35 + 0x20;
                        iVar45 = iVar50 + iVar45;
                        iVar47 = *piVar11 + iVar47;
                        iVar48 = *piVar26 + iVar48;
                        iVar49 = *piVar21 + iVar49;
                        iVar15 = *piVar31 + iVar15;
                        iVar42 = *piVar13 + iVar42;
                        iVar43 = *piVar14 + iVar43;
                        iVar44 = *piVar12 + iVar44;
                      } while (lVar30 != 0);
                      iVar15 = iVar45 + iVar15 + iVar47 + iVar42 + iVar48 + iVar43 + iVar49 + iVar44
                      ;
                    }
                    do {
                      piVar35 = (int *)(lVar38 + 0xc);
                      lVar38 = lVar38 + 0x10;
                      iVar15 = *piVar35 + iVar15;
                    } while (lVar20 != lVar38);
                  }
                  AABB::AABB((AABB *)&local_b0);
                  puVar10 = local_90;
                  iVar42 = iVar15 + 3;
                  if (-1 < iVar15) {
                    iVar42 = iVar15;
                  }
                  if (local_98 != local_90) {
                    puVar37 = local_98;
                    do {
                      pfVar3 = (float *)(*(long *)pvVar16 +
                                        (long)(iVar42 >> 2) * (ulong)*puVar37 * 4);
                      Vec3::Vec3(aVStack_78,*pfVar3,pfVar3[1],pfVar3[2]);
                      AABB::updateMinMax((AABB *)&local_b0,aVStack_78,1);
                      puVar37 = puVar37 + 1;
                    } while (puVar10 != puVar37);
                  }
                  FUN_00d1c324(pvVar16 + 0x50,&local_b0);
                }
                if (local_98 != (ushort *)0x0) {
                  local_90 = local_98;
                  operator_delete(local_98);
                }
                uVar25 = uVar25 + 1;
              } while (uVar25 != uVar18);
            }
          }
          else {
            lVar38 = (ulong)uVar18 * 0x30;
            do {
              iVar15 = *piVar34;
              if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                iVar15 = 0x15 - *(char *)((long)piVar34 + 0x15);
              }
              if (iVar15 == 5) {
                piVar21 = *(int **)(piVar34 + 2);
                if ((*(ushort *)((long)piVar34 + 0x16) & 0x1000) != 0) {
                  piVar21 = piVar34;
                }
                if ((piVar21 == (int *)"parts") || (iVar15 = memcmp("parts",piVar21,5), iVar15 == 0)
                   ) goto LAB_00d21904;
              }
              lVar38 = lVar38 + -0x30;
              piVar34 = piVar34 + 0xc;
            } while (lVar38 != 0);
LAB_00d22210:
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          puVar5 = *(undefined8 **)(param_1 + 8);
          if (puVar5 == *(undefined8 **)(param_1 + 0x10)) {
            std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
            __push_back_slow_path<cocos2d::MeshData*const&>
                      ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)
                       param_1,(MeshData **)&local_80);
          }
          else {
            *puVar5 = local_80;
            *(undefined8 **)(param_1 + 8) = puVar5 + 1;
          }
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar6);
      }
      goto LAB_00d22250;
    }
  }
  else {
    lVar38 = (ulong)uVar6 * 0x30;
    do {
      iVar15 = *piVar27;
      if ((*(ushort *)((long)piVar27 + 0x16) & 0x1000) != 0) {
        iVar15 = 0x15 - *(char *)((long)piVar27 + 0x15);
      }
      if (iVar15 == 6) {
        piVar35 = *(int **)(piVar27 + 2);
        if ((*(ushort *)((long)piVar27 + 0x16) & 0x1000) != 0) {
          piVar35 = piVar27;
        }
        if ((piVar35 == (int *)"meshes") || (iVar15 = memcmp("meshes",piVar35,6), iVar15 == 0))
        goto LAB_00d212a4;
      }
      lVar38 = lVar38 + -0x30;
      piVar27 = piVar27 + 0xc;
    } while (lVar38 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d22250:
  if (*(long *)(lVar9 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}

