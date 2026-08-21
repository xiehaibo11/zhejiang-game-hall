
/* cocos2d::Bundle3D::loadMeshDataJson_0_1(cocos2d::MeshDatas&) */

undefined8 __thiscall cocos2d::Bundle3D::loadMeshDataJson_0_1(Bundle3D *this,MeshDatas *param_1)

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
  uint *puVar19;
  long *plVar20;
  int *piVar21;
  uint *puVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  int *piVar29;
  ulong uVar30;
  ushort *puVar31;
  uint *puVar32;
  uint *puVar33;
  double dVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
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
  uVar18 = *(uint *)(this + 0x68);
  piVar21 = *(int **)(this + 0x70);
  piVar29 = piVar21;
  if (uVar18 == 0) {
LAB_00d20720:
    if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20738;
    piVar29 = piVar29 + 6;
  }
  else {
    lVar28 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar29;
      if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
      }
      if (iVar14 == 4) {
        piVar10 = *(int **)(piVar29 + 2);
        if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar29;
        }
        if ((piVar10 == (int *)0x14190ae) || (*piVar10 == 0x6873656d)) goto LAB_00d20720;
      }
      lVar28 = lVar28 + -0x30;
      piVar29 = piVar29 + 0xc;
    } while (lVar28 != 0);
LAB_00d20738:
    piVar29 = (int *)&rapidjson::
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
  }
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
  puVar19 = *(uint **)(piVar29 + 2);
  uVar18 = *puVar19;
  uVar30 = (ulong)uVar18;
  piVar21 = *(int **)(puVar19 + 2);
  piVar29 = piVar21;
  if (uVar18 == 0) {
LAB_00d20814:
    if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20830;
    puVar22 = *(uint **)(piVar29 + 8);
  }
  else {
    lVar28 = uVar30 * 0x30;
    do {
      iVar14 = *piVar29;
      if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
      }
      if (iVar14 == 4) {
        piVar10 = *(int **)(piVar29 + 2);
        if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar29;
        }
        if ((piVar10 == (int *)0x13d060b) || (*piVar10 == 0x79646f62)) goto LAB_00d20814;
      }
      lVar28 = lVar28 + -0x30;
      piVar29 = piVar29 + 0xc;
    } while (lVar28 != 0);
LAB_00d20830:
    puVar22 = (uint *)0x0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    piVar21 = *(int **)(puVar19 + 2);
    uVar30 = (ulong)*puVar19;
  }
  piVar29 = piVar21;
  local_80 = pvVar16;
  if ((int)uVar30 == 0) {
LAB_00d208d0:
    if (piVar29 == piVar21 + uVar30 * 0xc) goto LAB_00d208e8;
    puVar19 = (uint *)(piVar29 + 6);
    uVar18 = *puVar19;
  }
  else {
    lVar28 = uVar30 * 0x30;
    do {
      iVar14 = *piVar29;
      if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
      }
      if (iVar14 == 10) {
        piVar10 = *(int **)(piVar29 + 2);
        if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar29;
        }
        if ((piVar10 == (int *)"attributes") ||
           (iVar14 = memcmp("attributes",piVar10,10), iVar14 == 0)) goto LAB_00d208d0;
      }
      piVar29 = piVar29 + 0xc;
      lVar28 = lVar28 + -0x30;
    } while (lVar28 != 0);
LAB_00d208e8:
    puVar19 = (uint *)&rapidjson::
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
  lVar28 = *(long *)(pvVar16 + 0x70);
  uVar30 = (ulong)(int)uVar18;
  *(uint *)(pvVar16 + 0x88) = uVar18;
  uVar24 = *(long *)(pvVar16 + 0x78) - lVar28 >> 4;
  if (uVar24 < uVar30) {
    std::__ndk1::vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
    ::__append((vector<cocos2d::MeshVertexAttrib,std::__ndk1::allocator<cocos2d::MeshVertexAttrib>>
                *)(pvVar16 + 0x70),uVar30 - uVar24);
    uVar18 = *puVar19;
  }
  else {
    if (uVar24 != uVar30) {
      *(ulong *)(pvVar16 + 0x78) = lVar28 + uVar30 * 0x10;
    }
    uVar18 = *puVar19;
  }
  if (uVar18 != 0) {
    uVar30 = 0;
    do {
      puVar32 = (uint *)(*(long *)(puVar19 + 2) + uVar30 * 0x18);
      puVar33 = puVar32 + 2;
      piVar21 = *(int **)puVar33;
      uVar18 = *puVar32;
      piVar29 = piVar21;
      if (uVar18 == 0) {
LAB_00d20a10:
        if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20a28;
        iVar14 = piVar29[6];
      }
      else {
        lVar28 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar29;
          if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
          }
          if (iVar14 == 4) {
            piVar10 = *(int **)(piVar29 + 2);
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar29;
            }
            if ((piVar10 == (int *)0x1275948) || (*piVar10 == 0x657a6973)) goto LAB_00d20a10;
          }
          lVar28 = lVar28 + -0x30;
          piVar29 = piVar29 + 0xc;
        } while (lVar28 != 0);
LAB_00d20a28:
        iVar14 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
      piVar29 = (int *)(*(long *)(local_80 + 0x70) + uVar30 * 0x10);
      *piVar29 = iVar14;
      piVar29[3] = iVar14 << 2;
      uVar18 = *puVar32;
      piVar21 = *(int **)puVar33;
      piVar29 = piVar21;
      if (uVar18 == 0) {
LAB_00d20ac4:
        if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20ae4;
        piVar21 = piVar29 + 6;
        if ((*(byte *)((long)piVar29 + 0x2f) >> 4 & 1) == 0) goto LAB_00d20af4;
      }
      else {
        lVar28 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar29;
          if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
          }
          if (iVar14 == 4) {
            piVar10 = *(int **)(piVar29 + 2);
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar29;
            }
            if ((piVar10 == (int *)0x13ff2a0) || (*piVar10 == 0x65707974)) goto LAB_00d20ac4;
          }
          lVar28 = lVar28 + -0x30;
          piVar29 = piVar29 + 0xc;
        } while (lVar28 != 0);
LAB_00d20ae4:
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
LAB_00d20af4:
        piVar21 = *(int **)(piVar21 + 2);
      }
      pBVar17 = (Bundle3D *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_98,(char *)piVar21);
      uVar15 = parseGLType(pBVar17,(basic_string *)&local_98);
      *(undefined4 *)(*(long *)(local_80 + 0x70) + uVar30 * 0x10 + 4) = uVar15;
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar18 = *puVar32;
      piVar21 = *(int **)puVar33;
      piVar29 = piVar21;
      if (uVar18 == 0) {
LAB_00d20ba0:
        if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20bc0;
        piVar21 = piVar29 + 6;
        if ((*(byte *)((long)piVar29 + 0x2f) >> 4 & 1) == 0) goto LAB_00d20bd0;
      }
      else {
        lVar28 = (ulong)uVar18 * 0x30;
        do {
          iVar14 = *piVar29;
          if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
            iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
          }
          if (iVar14 == 9) {
            piVar10 = *(int **)(piVar29 + 2);
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar29;
            }
            if ((piVar10 == (int *)0x14084c3) ||
               (iVar14 = memcmp("attribute",piVar10,9), iVar14 == 0)) goto LAB_00d20ba0;
          }
          lVar28 = lVar28 + -0x30;
          piVar29 = piVar29 + 0xc;
        } while (lVar28 != 0);
LAB_00d20bc0:
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
LAB_00d20bd0:
        piVar21 = *(int **)(piVar21 + 2);
      }
      pBVar17 = (Bundle3D *)
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>
                          ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *)&local_98,(char *)piVar21);
      uVar15 = parseGLProgramAttribute(pBVar17,(basic_string *)&local_98);
      *(undefined4 *)(*(long *)(local_80 + 0x70) + uVar30 * 0x10 + 8) = uVar15;
      if (((ulong)local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar30 = uVar30 + 1;
    } while (uVar30 < *puVar19);
  }
  uVar18 = *puVar22;
  piVar21 = *(int **)(puVar22 + 2);
  piVar29 = piVar21;
  if (uVar18 == 0) {
LAB_00d20ca0:
    if (piVar29 == piVar21 + (ulong)uVar18 * 0xc) goto LAB_00d20cb8;
    iVar14 = piVar29[6];
  }
  else {
    lVar28 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar29;
      if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
      }
      if (iVar14 == 10) {
        piVar10 = *(int **)(piVar29 + 2);
        if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar29;
        }
        if ((piVar10 == (int *)"vertexsize") ||
           (iVar14 = memcmp("vertexsize",piVar10,10), iVar14 == 0)) goto LAB_00d20ca0;
      }
      lVar28 = lVar28 + -0x30;
      piVar29 = piVar29 + 0xc;
    } while (lVar28 != 0);
LAB_00d20cb8:
    iVar14 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar30 = (ulong)iVar14;
  *(int *)(local_80 + 0x18) = iVar14;
  uVar24 = *(long *)(local_80 + 8) - *(long *)local_80 >> 2;
  if (uVar24 < uVar30) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(local_80,uVar30 - uVar24);
  }
  else if (uVar24 != uVar30) {
    *(ulong *)(local_80 + 8) = *(long *)local_80 + uVar30 * 4;
  }
  uVar18 = *puVar22;
  plVar23 = *(long **)(puVar22 + 2);
  plVar20 = plVar23;
  if (uVar18 == 0) {
LAB_00d20d90:
    if (plVar20 == plVar23 + (ulong)uVar18 * 6) goto LAB_00d20e28;
    if ((int)plVar20[3] != 0) {
      lVar28 = 0;
      uVar30 = 0;
      do {
        lVar25 = plVar20[4];
        uVar6 = *(ushort *)(lVar25 + lVar28 + 0x16);
        if ((uVar6 >> 9 & 1) == 0) {
          if ((uVar6 >> 5 & 1) == 0) {
            if ((uVar6 >> 6 & 1) == 0) {
              if ((uVar6 >> 7 & 1) == 0) {
                dVar34 = (double)*(ulong *)(lVar25 + lVar28);
              }
              else {
                dVar34 = (double)(long)*(ulong *)(lVar25 + lVar28);
              }
            }
            else {
              dVar34 = (double)NEON_ucvtf((ulong)*(uint *)(lVar25 + lVar28));
            }
          }
          else {
            dVar34 = (double)(long)*(int *)(lVar25 + lVar28);
          }
        }
        else {
          dVar34 = *(double *)(lVar25 + lVar28);
        }
        lVar28 = lVar28 + 0x18;
        *(float *)(*(long *)local_80 + uVar30 * 4) = (float)dVar34;
        uVar30 = uVar30 + 1;
      } while (uVar30 < *(uint *)(plVar20 + 3));
    }
  }
  else {
    lVar28 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = (int)*plVar20;
      if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)plVar20 + 0x15);
      }
      if (iVar14 == 8) {
        plVar3 = (long *)plVar20[1];
        if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
          plVar3 = plVar20;
        }
        if ((plVar3 == (long *)"vertices") || (*plVar3 == 0x7365636974726576)) goto LAB_00d20d90;
      }
      lVar28 = lVar28 + -0x30;
      plVar20 = plVar20 + 6;
    } while (lVar28 != 0);
LAB_00d20e28:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar18 = *puVar22;
  plVar23 = *(long **)(puVar22 + 2);
  plVar20 = plVar23;
  if (uVar18 == 0) {
LAB_00d20ec4:
    if (plVar20 == plVar23 + (ulong)uVar18 * 6) goto LAB_00d20ef0;
    local_90 = (ushort *)0x0;
    local_88 = (void *)0x0;
    local_98 = (ushort *)0x0;
    if (*(uint *)(plVar20 + 3) != 0) {
      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
                ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_98,
                 (ulong)*(uint *)(plVar20 + 3));
    }
  }
  else {
    lVar28 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = (int)*plVar20;
      if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)plVar20 + 0x15);
      }
      if (iVar14 == 8) {
        plVar3 = (long *)plVar20[1];
        if ((*(ushort *)((long)plVar20 + 0x16) & 0x1000) != 0) {
          plVar3 = plVar20;
        }
        if ((plVar3 == (long *)"indexnum") || (*plVar3 == 0x6d756e7865646e69)) goto LAB_00d20ec4;
      }
      lVar28 = lVar28 + -0x30;
      plVar20 = plVar20 + 6;
    } while (lVar28 != 0);
LAB_00d20ef0:
    local_90 = (ushort *)0x0;
    local_88 = (void *)0x0;
    local_98 = (ushort *)0x0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  uVar18 = *puVar22;
  piVar21 = *(int **)(puVar22 + 2);
  piVar29 = piVar21;
  if (uVar18 == 0) {
LAB_00d20f88:
    if (piVar29 != piVar21 + (ulong)uVar18 * 0xc) {
      if (piVar29[6] != 0) {
        lVar28 = 0;
        uVar30 = 0;
        do {
          puVar1 = (undefined4 *)(*(long *)(piVar29 + 8) + lVar28);
          lVar28 = lVar28 + 0x18;
          local_98[uVar30] = (ushort)*puVar1;
          uVar30 = uVar30 + 1;
        } while (uVar30 < (uint)piVar29[6]);
      }
      goto LAB_00d20fe0;
    }
  }
  else {
    lVar28 = (ulong)uVar18 * 0x30;
    do {
      iVar14 = *piVar29;
      if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
        iVar14 = 0x15 - *(char *)((long)piVar29 + 0x15);
      }
      if (iVar14 == 7) {
        piVar10 = *(int **)(piVar29 + 2);
        if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar29;
        }
        if ((piVar10 == (int *)"indices") || (iVar14 = memcmp("indices",piVar10,7), iVar14 == 0))
        goto LAB_00d20f88;
      }
      lVar28 = lVar28 + -0x30;
      piVar29 = piVar29 + 0xc;
    } while (lVar28 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d20fe0:
  pvVar16 = local_80;
  this_00 = *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(local_80 + 0x28);
  if (this_00 ==
      *(vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> **)(local_80 + 0x30)) {
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
  lVar28 = *(long *)(local_80 + 0x70);
  lVar25 = *(long *)(local_80 + 0x78);
  if (lVar28 == lVar25) {
    iVar14 = 0;
  }
  else {
    uVar24 = (lVar25 - lVar28) - 0x10U >> 4;
    uVar30 = uVar24 + 1;
    if (uVar30 < 9) {
      iVar35 = 0;
    }
    else {
      uVar4 = 8;
      if ((uVar30 & 7) != 0) {
        uVar4 = uVar30 & 7;
      }
      piVar29 = (int *)(lVar28 + 0x4c);
      iVar14 = 0;
      iVar35 = 0;
      iVar36 = 0;
      iVar37 = 0;
      lVar28 = lVar28 + (uVar30 - uVar4) * 0x10;
      lVar26 = (uVar24 - uVar4) + 1;
      iVar38 = 0;
      iVar39 = 0;
      iVar40 = 0;
      iVar41 = 0;
      do {
        piVar27 = piVar29 + -0x10;
        iVar42 = *piVar29;
        piVar9 = piVar29 + 4;
        piVar10 = piVar29 + 8;
        piVar21 = piVar29 + 0xc;
        piVar11 = piVar29 + -0xc;
        piVar12 = piVar29 + -8;
        piVar13 = piVar29 + -4;
        lVar26 = lVar26 + -8;
        piVar29 = piVar29 + 0x20;
        iVar38 = iVar42 + iVar38;
        iVar39 = *piVar9 + iVar39;
        iVar40 = *piVar10 + iVar40;
        iVar41 = *piVar21 + iVar41;
        iVar14 = *piVar27 + iVar14;
        iVar35 = *piVar11 + iVar35;
        iVar36 = *piVar12 + iVar36;
        iVar37 = *piVar13 + iVar37;
      } while (lVar26 != 0);
      iVar35 = iVar38 + iVar14 + iVar39 + iVar35 + iVar40 + iVar36 + iVar41 + iVar37;
    }
    do {
      piVar29 = (int *)(lVar28 + 0xc);
      lVar28 = lVar28 + 0x10;
      iVar35 = *piVar29 + iVar35;
    } while (lVar25 != lVar28);
    iVar14 = iVar35 + 3;
    if (-1 < iVar35) {
      iVar14 = iVar35;
    }
    iVar14 = iVar14 >> 2;
  }
  AABB::AABB(aAStack_b0);
  puVar8 = local_90;
  if (local_98 != local_90) {
    puVar31 = local_98;
    do {
      pfVar2 = (float *)(*(long *)pvVar16 + (long)iVar14 * (ulong)*puVar31 * 4);
      Vec3::Vec3(aVStack_78,*pfVar2,pfVar2[1],pfVar2[2]);
      AABB::updateMinMax(aAStack_b0,aVStack_78,1);
      puVar31 = puVar31 + 1;
    } while (puVar8 != puVar31);
  }
  FUN_00d1c324(pvVar16 + 0x50,aAStack_b0);
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
  if (local_98 != (ushort *)0x0) {
    local_90 = local_98;
    operator_delete(local_98);
  }
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

