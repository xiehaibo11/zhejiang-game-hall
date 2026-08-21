
/* cocos2d::Bundle3D::loadMeshDataJson_0_2(cocos2d::MeshDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadMeshDataJson_0_2(Bundle3D *this,MeshDatas *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  long *plVar3;
  ulong uVar4;
  vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *this_00;
  undefined8 *puVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar11;
  int iVar14;
  undefined4 uVar15;
  vector<float,std::__ndk1::allocator<float>> *pvVar16;
  Bundle3D *pBVar17;
  uint uVar18;
  long *plVar19;
  int *piVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  int *piVar28;
  long lVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  int *piVar33;
  uint *puVar34;
  ushort *puVar35;
  double dVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  AABB aAStack_b0 [24];
  ushort *local_98;
  ushort *local_90;
  void *local_88;
  vector<float,std::__ndk1::allocator<float>> *local_80;
  Vec3 aVStack_78 [16];
  long local_68;
  int *piVar10;
  int *piVar12;
  int *piVar13;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  pvVar16 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (pvVar16 != (vector<float,std::__ndk1::allocator<float>> *)0x0) {
    *(undefined8 *)pvVar16 = 0;
    *(undefined8 *)(pvVar16 + 8) = 0;
    *(undefined4 *)(pvVar16 + 0x18) = 0;
    *(undefined8 *)(pvVar16 + 0x10) = 0;
    *(undefined8 *)(pvVar16 + 0x78) = 0;
    *(undefined8 *)(pvVar16 + 0x80) = 0;
    *(undefined8 *)(pvVar16 + 0x70) = 0;
    *(undefined8 *)(pvVar16 + 0x28) = 0;
    *(undefined8 *)(pvVar16 + 0x20) = 0;
    *(undefined8 *)(pvVar16 + 0x38) = 0;
    *(undefined8 *)(pvVar16 + 0x30) = 0;
    *(undefined8 *)(pvVar16 + 0x48) = 0;
    *(undefined8 *)(pvVar16 + 0x40) = 0;
    *(undefined8 *)(pvVar16 + 0x58) = 0;
    *(undefined8 *)(pvVar16 + 0x50) = 0;
    *(undefined8 *)(pvVar16 + 100) = 0;
    *(undefined8 *)(pvVar16 + 0x5c) = 0;
    *(undefined4 *)(pvVar16 + 0x88) = 0;
  }
  uVar18 = *(uint *)(this + 0x68);
  piVar20 = *(int **)(this + 0x70);
  piVar22 = piVar20;
  if (uVar18 == 0) {
LAB_00d26e1c:
    if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d26e34;
    puVar34 = *(uint **)(piVar22 + 8);
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar14 == 4) {
        piVar33 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar33 = piVar22;
        }
        if ((piVar33 == (int *)0x14190ae) || (*piVar33 == 0x6873656d)) goto LAB_00d26e1c;
      }
      lVar29 = lVar29 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar29 != 0);
LAB_00d26e34:
    puVar34 = (uint *)0x0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar18 = *puVar34;
  piVar20 = *(int **)(puVar34 + 2);
  piVar22 = piVar20;
  local_80 = pvVar16;
  if (uVar18 == 0) {
LAB_00d26ec8:
    if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d26ee0;
    puVar30 = (uint *)(piVar22 + 6);
    uVar18 = *puVar30;
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar14 == 10) {
        piVar33 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar33 = piVar22;
        }
        if ((piVar33 == (int *)"attributes") ||
           (iVar14 = memcmp("attributes",piVar33,10), iVar14 == 0)) goto LAB_00d26ec8;
      }
      lVar29 = lVar29 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar29 != 0);
LAB_00d26ee0:
    puVar30 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    uVar18 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  lVar29 = *(long *)(pvVar16 + 0x70);
  uVar21 = (ulong)(int)uVar18;
  *(uint *)(pvVar16 + 0x88) = uVar18;
  uVar24 = *(long *)(pvVar16 + 0x78) - lVar29 >> 4;
  if (uVar24 < uVar21) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::__append((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)(pvVar16 + 0x70),uVar21 - uVar24);
    uVar18 = *puVar30;
  }
  else {
    if (uVar24 != uVar21) {
      *(ulong *)(pvVar16 + 0x78) = lVar29 + uVar21 * 0x10;
    }
    uVar18 = *puVar30;
  }
  if (uVar18 != 0) {
    uVar21 = 0;
    do {
      puVar32 = (uint *)(*(long *)(puVar30 + 2) + uVar21 * 0x18);
      puVar31 = puVar32 + 2;
      piVar20 = *(int **)puVar31;
      uVar18 = *puVar32;
      piVar22 = piVar20;
      if (uVar18 == 0) {
LAB_00d27018:
        if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d27030;
        iVar14 = piVar22[6];
      }
      else {
        lVar29 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar22;
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
          }
          if (iVar14 == 4) {
            piVar33 = *(int **)(piVar22 + 2);
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              piVar33 = piVar22;
            }
            if ((piVar33 == (int *)0x1275948) || (*piVar33 == 0x657a6973)) goto LAB_00d27018;
          }
          lVar29 = lVar29 + -0x30;
          piVar22 = piVar22 + 0xc;
        } while (lVar29 != 0);
LAB_00d27030:
        iVar14 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      piVar22 = (int *)(*(long *)(local_80 + 0x70) + uVar21 * 0x10);
      *piVar22 = iVar14;
      piVar22[3] = iVar14 << 2;
      uVar18 = *puVar32;
      piVar20 = *(int **)puVar31;
      piVar22 = piVar20;
      if (uVar18 == 0) {
LAB_00d270cc:
        if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d270ec;
        piVar20 = piVar22 + 6;
        if ((*(byte *)((long)piVar22 + 0x2f) >> 4 & 1) == 0) goto LAB_00d270fc;
      }
      else {
        lVar29 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar22;
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
          }
          if (iVar14 == 4) {
            piVar33 = *(int **)(piVar22 + 2);
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              piVar33 = piVar22;
            }
            if ((piVar33 == (int *)0x13ff2a0) || (*piVar33 == 0x65707974)) goto LAB_00d270cc;
          }
          lVar29 = lVar29 + -0x30;
          piVar22 = piVar22 + 0xc;
        } while (lVar29 != 0);
LAB_00d270ec:
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
LAB_00d270fc:
        piVar20 = *(int **)(piVar20 + 2);
      }
      pBVar17 = (Bundle3D *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_98,(char *)piVar20);
      uVar15 = parseGLType(pBVar17,(basic_string *)&local_98);
      *(undefined4 *)(*(long *)(local_80 + 0x70) + uVar21 * 0x10 + 4) = uVar15;
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar18 = *puVar32;
      piVar20 = *(int **)puVar31;
      piVar22 = piVar20;
      if (uVar18 == 0) {
LAB_00d271a4:
        if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d271c4;
        piVar20 = piVar22 + 6;
        if ((*(byte *)((long)piVar22 + 0x2f) >> 4 & 1) == 0) goto LAB_00d271d4;
      }
      else {
        lVar29 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar22;
          if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
          }
          if (iVar14 == 9) {
            piVar33 = *(int **)(piVar22 + 2);
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              piVar33 = piVar22;
            }
            if ((piVar33 == (int *)0x14084c3) ||
               (iVar14 = memcmp("attribute",piVar33,9), iVar14 == 0)) goto LAB_00d271a4;
          }
          lVar29 = lVar29 + -0x30;
          piVar22 = piVar22 + 0xc;
        } while (lVar29 != 0);
LAB_00d271c4:
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
LAB_00d271d4:
        piVar20 = *(int **)(piVar20 + 2);
      }
      pBVar17 = (Bundle3D *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_98,(char *)piVar20);
      uVar15 = parseGLProgramAttribute(pBVar17,(basic_string *)&local_98);
      *(undefined4 *)(*(long *)(local_80 + 0x70) + uVar21 * 0x10 + 8) = uVar15;
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < *puVar30);
  }
  uVar18 = *puVar34;
  piVar20 = *(int **)(puVar34 + 2);
  piVar22 = piVar20;
  if (uVar18 == 0) {
LAB_00d27290:
    if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d272a8;
    puVar30 = *(uint **)(piVar22 + 8);
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar14 == 6) {
        piVar33 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar33 = piVar22;
        }
        if ((piVar33 == (int *)"vertex") || (iVar14 = memcmp("vertex",piVar33,6), iVar14 == 0))
        goto LAB_00d27290;
      }
      lVar29 = lVar29 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar29 != 0);
LAB_00d272a8:
    puVar30 = (uint *)0x0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar18 = *puVar30;
  piVar20 = *(int **)(puVar30 + 2);
  piVar22 = piVar20;
  if (uVar18 == 0) {
LAB_00d2733c:
    if (piVar22 == piVar20 + (ulong)uVar18 * 0xc) goto LAB_00d27354;
    iVar14 = piVar22[6];
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar14 == 10) {
        piVar33 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar33 = piVar22;
        }
        if ((piVar33 == (int *)"vertexsize") ||
           (iVar14 = memcmp("vertexsize",piVar33,10), iVar14 == 0)) goto LAB_00d2733c;
      }
      lVar29 = lVar29 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar29 != 0);
LAB_00d27354:
    iVar14 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar21 = (ulong)iVar14;
  *(int *)(local_80 + 0x18) = iVar14;
  uVar24 = *(long *)(local_80 + 8) - *(long *)local_80 >> 2;
  if (uVar24 < uVar21) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(local_80,uVar21 - uVar24);
  }
  else if (uVar24 != uVar21) {
    *(ulong *)(local_80 + 8) = *(long *)local_80 + uVar21 * 4;
  }
  uVar18 = *puVar30;
  plVar23 = *(long **)(puVar30 + 2);
  plVar19 = plVar23;
  if (uVar18 == 0) {
LAB_00d2742c:
    if (plVar19 == plVar23 + (ulong)uVar18 * 6) goto LAB_00d274c4;
    if ((int)plVar19[3] != 0) {
      lVar29 = 0;
      uVar21 = 0;
      do {
        lVar25 = plVar19[4];
        uVar6 = *(ushort *)(lVar25 + lVar29 + 0x16);
        if ((uVar6 >> 9 & 1) == 0) {
          if ((uVar6 >> 5 & 1) == 0) {
            if ((uVar6 >> 6 & 1) == 0) {
              if ((uVar6 >> 7 & 1) == 0) {
                dVar36 = (double)*(ulong *)(lVar25 + lVar29);
              }
              else {
                dVar36 = (double)(long)*(ulong *)(lVar25 + lVar29);
              }
            }
            else {
              dVar36 = (double)NEON_ucvtf((ulong)*(uint *)(lVar25 + lVar29));
            }
          }
          else {
            dVar36 = (double)(long)*(int *)(lVar25 + lVar29);
          }
        }
        else {
          dVar36 = *(double *)(lVar25 + lVar29);
        }
        lVar29 = lVar29 + 0x18;
        *(float *)(*(long *)local_80 + uVar21 * 4) = (float)dVar36;
        uVar21 = uVar21 + 1;
      } while (uVar21 < *(uint *)(plVar19 + 3));
    }
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = (int)*plVar19;
      if ((*(ushort *)((long)plVar19 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)plVar19 + 0x15);
      }
      if (iVar14 == 8) {
        plVar3 = (long *)plVar19[1];
        if ((*(ushort *)((long)plVar19 + 0x16) & 0x1000) != 0) {
          plVar3 = plVar19;
        }
        if ((plVar3 == (long *)"vertices") || (*plVar3 == 0x7365636974726576)) goto LAB_00d2742c;
      }
      lVar29 = lVar29 + -0x30;
      plVar19 = plVar19 + 6;
    } while (lVar29 != 0);
LAB_00d274c4:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar18 = *puVar34;
  piVar20 = *(int **)(puVar34 + 2);
  piVar22 = piVar20;
  if (uVar18 == 0) {
LAB_00d27554:
    if (piVar22 != piVar20 + (ulong)uVar18 * 0xc) {
      if (piVar22[6] != 0) {
        uVar21 = 0;
        do {
          puVar34 = (uint *)(*(long *)(piVar22 + 8) + uVar21 * 0x18);
          plVar23 = *(long **)(puVar34 + 2);
          uVar18 = *puVar34;
          plVar19 = plVar23;
          if (uVar18 == 0) {
LAB_00d27628:
            if (plVar19 == plVar23 + (ulong)uVar18 * 6) goto LAB_00d27654;
            local_90 = (ushort *)0x0;
            local_88 = (void *)0x0;
            local_98 = (ushort *)0x0;
            if (*(uint *)(plVar19 + 3) != 0) {
              std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                        ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_98,
                         (ulong)*(uint *)(plVar19 + 3));
            }
          }
          else {
            lVar29 = (ulong)uVar18 * 0x30;
            do {
              iVar14 = (int)*plVar19;
              if ((*(ushort *)((long)plVar19 + 0x16) & 0x1000) != 0) {
                iVar14 = 0x15 - *(char *)((long)plVar19 + 0x15);
              }
              if (iVar14 == 8) {
                plVar3 = (long *)plVar19[1];
                if ((*(ushort *)((long)plVar19 + 0x16) & 0x1000) != 0) {
                  plVar3 = plVar19;
                }
                if ((plVar3 == (long *)"indexnum") || (*plVar3 == 0x6d756e7865646e69))
                goto LAB_00d27628;
              }
              lVar29 = lVar29 + -0x30;
              plVar19 = plVar19 + 6;
            } while (lVar29 != 0);
LAB_00d27654:
            local_90 = (ushort *)0x0;
            local_88 = (void *)0x0;
            local_98 = (ushort *)0x0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          uVar18 = *puVar34;
          piVar33 = *(int **)(puVar34 + 2);
          piVar20 = piVar33;
          if (uVar18 == 0) {
LAB_00d276e0:
            if (piVar20 == piVar33 + (ulong)uVar18 * 0xc) goto LAB_00d27728;
            if (piVar20[6] != 0) {
              lVar29 = 0;
              uVar24 = 0;
              do {
                puVar1 = (undefined4 *)(*(long *)(piVar20 + 8) + lVar29);
                lVar29 = lVar29 + 0x18;
                local_98[uVar24] = (ushort)*puVar1;
                uVar24 = uVar24 + 1;
              } while (uVar24 < (uint)piVar20[6]);
            }
          }
          else {
            lVar29 = (ulong)uVar18 * 0x30;
            do {
              iVar14 = *piVar20;
              if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                iVar14 = 0x15 - *(char *)((long)piVar20 + 0x15);
              }
              if (iVar14 == 7) {
                piVar9 = *(int **)(piVar20 + 2);
                if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
                  piVar9 = piVar20;
                }
                if ((piVar9 == (int *)"indices") ||
                   (iVar14 = memcmp("indices",piVar9,7), iVar14 == 0)) goto LAB_00d276e0;
              }
              lVar29 = lVar29 + -0x30;
              piVar20 = piVar20 + 0xc;
            } while (lVar29 != 0);
LAB_00d27728:
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
              *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(local_80 + 0x30))
          {
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
            *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(pvVar16 + 0x28) =
                 this_00 + 0x18;
          }
          pvVar16 = local_80;
          lVar29 = *(long *)(local_80 + 0x70);
          lVar25 = *(long *)(local_80 + 0x78);
          if (lVar29 == lVar25) {
            iVar14 = 0;
          }
          else {
            uVar26 = (lVar25 - lVar29) - 0x10U >> 4;
            uVar24 = uVar26 + 1;
            if (uVar24 < 9) {
              iVar14 = 0;
            }
            else {
              uVar4 = 8;
              if ((uVar24 & 7) != 0) {
                uVar4 = uVar24 & 7;
              }
              piVar20 = (int *)(lVar29 + 0x4c);
              iVar14 = 0;
              iVar37 = 0;
              iVar38 = 0;
              iVar39 = 0;
              lVar29 = lVar29 + (uVar24 - uVar4) * 0x10;
              lVar27 = (uVar26 - uVar4) + 1;
              iVar40 = 0;
              iVar41 = 0;
              iVar42 = 0;
              iVar43 = 0;
              do {
                piVar28 = piVar20 + -0x10;
                iVar44 = *piVar20;
                piVar33 = piVar20 + 4;
                piVar9 = piVar20 + 8;
                piVar10 = piVar20 + 0xc;
                piVar11 = piVar20 + -0xc;
                piVar12 = piVar20 + -8;
                piVar13 = piVar20 + -4;
                lVar27 = lVar27 + -8;
                piVar20 = piVar20 + 0x20;
                iVar40 = iVar44 + iVar40;
                iVar41 = *piVar33 + iVar41;
                iVar42 = *piVar9 + iVar42;
                iVar43 = *piVar10 + iVar43;
                iVar14 = *piVar28 + iVar14;
                iVar37 = *piVar11 + iVar37;
                iVar38 = *piVar12 + iVar38;
                iVar39 = *piVar13 + iVar39;
              } while (lVar27 != 0);
              iVar14 = iVar40 + iVar14 + iVar41 + iVar37 + iVar42 + iVar38 + iVar43 + iVar39;
            }
            do {
              piVar20 = (int *)(lVar29 + 0xc);
              lVar29 = lVar29 + 0x10;
              iVar14 = *piVar20 + iVar14;
            } while (lVar25 != lVar29);
          }
          AABB::AABB(aAStack_b0);
          puVar8 = local_90;
          iVar37 = iVar14 + 3;
          if (-1 < iVar14) {
            iVar37 = iVar14;
          }
          if (local_98 != local_90) {
            puVar35 = local_98;
            do {
              pfVar2 = (float *)(*(long *)pvVar16 + (long)(iVar37 >> 2) * (ulong)*puVar35 * 4);
              Vec3::Vec3(aVStack_78,*pfVar2,pfVar2[1],pfVar2[2]);
              AABB::updateMinMax(aAStack_b0,aVStack_78,1);
              puVar35 = puVar35 + 1;
            } while (puVar8 != puVar35);
          }
          FUN_00d1c324(pvVar16 + 0x50,aAStack_b0);
          if (local_98 != (ushort *)0x0) {
            local_90 = local_98;
            operator_delete(local_98);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)piVar22[6]);
      }
      goto LAB_00d278a4;
    }
  }
  else {
    lVar29 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar22;
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar14 == 7) {
        piVar33 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar33 = piVar22;
        }
        if ((piVar33 == (int *)"submesh") || (iVar14 = memcmp("submesh",piVar33,7), iVar14 == 0))
        goto LAB_00d27554;
      }
      lVar29 = lVar29 + -0x30;
      piVar22 = piVar22 + 0xc;
    } while (lVar29 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d278a4:
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 == *(undefined8 **)(param_1 + 0x10)) {
    std::__ndk1::vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>>::
    __push_back_slow_path<cocos2d::MeshData*const&>
              ((vector<cocos2d::MeshData*,std::__ndk1::allocator<cocos2d::MeshData*>> *)param_1,
               (MeshData **)&local_80);
  }
  else {
    *puVar5 = local_80;
    *(undefined8 **)(param_1 + 8) = puVar5 + 1;
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

