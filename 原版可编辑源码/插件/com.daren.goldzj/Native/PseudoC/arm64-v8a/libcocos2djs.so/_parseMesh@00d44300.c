
/* dragonBones::JSONDataParser::_parseMesh(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::MeshDisplayData&)
    */

void __thiscall
dragonBones::JSONDataParser::_parseMesh
          (JSONDataParser *this,GenericValue *param_1,MeshDisplayData *param_2)

{
  undefined4 *puVar1;
  vector<short,std::__ndk1::allocator<short>> *this_00;
  vector<float,std::__ndk1::allocator<float>> *this_01;
  undefined2 *puVar2;
  float *pfVar3;
  int *__s2;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  MeshDisplayData *pMVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong *puVar11;
  WeightData *this_02;
  void *__src;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  double *pdVar18;
  int *piVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long lVar27;
  int *piVar28;
  uint uVar29;
  int *piVar30;
  size_t __n;
  void *__dest;
  BoneData *pBVar31;
  ulong uVar32;
  long lVar33;
  uint *puVar34;
  uint *puVar35;
  char *pcVar36;
  int *piVar37;
  float fVar38;
  double dVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  int *local_138;
  ulong local_e8;
  size_t local_e0;
  void *local_d8;
  ulong *local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  puVar8 = DataParser::VERTICES;
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  pcVar15 = DataParser::VERTICES + -1;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  uVar29 = *(uint *)param_1;
  piVar30 = *(int **)(param_1 + 8);
  piVar28 = piVar30;
  if (uVar29 == 0) {
LAB_00d443d0:
    if (piVar28 == piVar30 + (ulong)uVar29 * 0xc) goto LAB_00d443e8;
    puVar34 = (uint *)(piVar28 + 6);
  }
  else {
    uVar32 = (long)pcVar15 - (long)DataParser::VERTICES;
    lVar33 = (ulong)uVar29 * 0x30;
    do {
      iVar9 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar9 == (int)uVar32) {
        piVar19 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar19 = piVar28;
        }
        if ((piVar19 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar19,uVar32 & 0xffffffff), iVar9 == 0)) goto LAB_00d443d0;
      }
      lVar33 = lVar33 + -0x30;
      piVar28 = piVar28 + 0xc;
    } while (lVar33 != 0);
LAB_00d443e8:
    puVar34 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  puVar8 = DataParser::UVS;
  pcVar15 = DataParser::UVS + -1;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  uVar29 = *(uint *)param_1;
  piVar30 = *(int **)(param_1 + 8);
  piVar28 = piVar30;
  if (uVar29 == 0) {
LAB_00d44490:
    if (piVar28 == piVar30 + (ulong)uVar29 * 0xc) goto LAB_00d444a8;
    piVar28 = piVar28 + 6;
  }
  else {
    uVar32 = (long)pcVar15 - (long)DataParser::UVS;
    lVar33 = (ulong)uVar29 * 0x30;
    do {
      iVar9 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar9 == (int)uVar32) {
        piVar19 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar19 = piVar28;
        }
        if ((piVar19 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar19,uVar32 & 0xffffffff), iVar9 == 0)) goto LAB_00d44490;
      }
      lVar33 = lVar33 + -0x30;
      piVar28 = piVar28 + 0xc;
    } while (lVar33 != 0);
LAB_00d444a8:
    piVar28 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  puVar8 = DataParser::TRIANGLES;
  pcVar15 = DataParser::TRIANGLES + -1;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  uVar29 = *(uint *)param_1;
  piVar19 = *(int **)(param_1 + 8);
  piVar30 = piVar19;
  if (uVar29 == 0) {
LAB_00d4455c:
    if (piVar30 == piVar19 + (ulong)uVar29 * 0xc) goto LAB_00d44574;
    puVar35 = (uint *)(piVar30 + 6);
    uVar29 = *puVar35;
  }
  else {
    uVar32 = (long)pcVar15 - (long)DataParser::TRIANGLES;
    lVar33 = (ulong)uVar29 * 0x30;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar32) {
        piVar37 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar37 = piVar30;
        }
        if ((piVar37 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar37,uVar32 & 0xffffffff), iVar9 == 0)) goto LAB_00d4455c;
      }
      lVar33 = lVar33 + -0x30;
      piVar30 = piVar30 + 0xc;
    } while (lVar33 != 0);
LAB_00d44574:
    puVar35 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    uVar29 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  lVar16 = *(long *)(this + 0x48);
  uVar25 = *puVar34;
  lVar33 = *(long *)(this + 0x120);
  lVar21 = *(long *)(this + 0x128);
  lVar17 = *(long *)(this + 0x108);
  lVar24 = *(long *)(this + 0x110);
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  if ((*(byte *)(lVar16 + 0x10) & 1) == 0) {
    __n = (size_t)(*(byte *)(lVar16 + 0x10) >> 1);
    __src = (void *)(lVar16 + 0x11);
  }
  else {
    __n = *(size_t *)(lVar16 + 0x18);
    __src = *(void **)(lVar16 + 0x20);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n + 1 < 0x17) {
    __dest = (void *)((ulong)&local_e8 | 1);
    local_e8 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00d44640;
  }
  else {
    uVar32 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = operator_new(uVar32);
    local_e8 = uVar32 | 1;
    local_e0 = __n;
    local_d8 = __dest;
LAB_00d44640:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_e8
         ,"_",1);
  lVar16 = *(long *)(this + 0x40);
  uVar32 = (ulong)(*(byte *)(lVar16 + 0x20) >> 1);
  pcVar15 = (char *)(lVar16 + 0x21);
  if ((*(byte *)(lVar16 + 0x20) & 1) != 0) {
    uVar32 = *(ulong *)(lVar16 + 0x28);
    pcVar15 = *(char **)(lVar16 + 0x30);
  }
  puVar10 = (undefined8 *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_e8,pcVar15,uVar32);
  local_c0 = (void *)puVar10[2];
  uStack_c8 = puVar10[1];
  local_d0 = (ulong *)*puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_d0,"_",1);
  local_a0 = (void *)puVar11[2];
  pvStack_a8 = (void *)puVar11[1];
  local_b0 = (void *)*puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  uVar32 = (ulong)((byte)param_2[0x18] >> 1);
  pMVar7 = param_2 + 0x19;
  if (((byte)param_2[0x18] & 1) != 0) {
    uVar32 = *(ulong *)(param_2 + 0x20);
    pMVar7 = *(MeshDisplayData **)(param_2 + 0x28);
  }
  puVar11 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_b0,(char *)pMVar7,uVar32);
  local_80 = (void *)puVar11[2];
  uStack_88 = puVar11[1];
  local_90 = *puVar11;
  puVar11[1] = 0;
  puVar11[2] = 0;
  *puVar11 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar5 = (uVar29 / 3) * 3;
  uVar32 = (ulong)uVar5 + 4;
  *(int *)(param_2 + 0x6c) = (int)((ulong)(lVar24 - lVar17) >> 1);
  lVar16 = *(long *)(this + 0x108);
  this_00 = (vector<short,std::__ndk1::allocator<short>> *)(this + 0x108);
  uVar22 = *(long *)(this + 0x110) - lVar16 >> 1;
  uVar20 = uVar32 + uVar22;
  if (uVar22 < uVar20) {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(this_00,uVar32);
    lVar16 = *(long *)this_00;
  }
  else if (uVar20 < uVar22) {
    *(ulong *)(this + 0x110) = lVar16 + uVar20 * 2;
  }
  uVar32 = (ulong)uVar25 & 0xfffffffe;
  puVar2 = (undefined2 *)(lVar16 + (lVar24 - lVar17 >> 1) * 2);
  *puVar2 = (short)(uVar25 >> 1);
  puVar2[1] = (short)(uVar29 / 3);
  puVar2[2] = (short)((ulong)(lVar21 - lVar33) >> 2);
  if (uVar5 != 0) {
    lVar17 = 0;
    uVar20 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(puVar35 + 2) + lVar17);
      lVar17 = lVar17 + 0x18;
      puVar2[uVar20 + 4] = (short)*puVar1;
      uVar20 = uVar20 + 1;
    } while (uVar20 < uVar5);
  }
  uVar22 = uVar32 * 2;
  this_01 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0x120);
  uVar23 = *(long *)(this + 0x128) - *(long *)(this + 0x120) >> 2;
  uVar20 = uVar23 + uVar22;
  if (uVar23 < uVar20) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_01,uVar22);
  }
  else if (uVar20 < uVar23) {
    *(ulong *)(this + 0x128) = *(long *)(this + 0x120) + uVar20 * 4;
  }
  uVar29 = uVar25 >> 1;
  lVar33 = lVar21 - lVar33 >> 2;
  if ((int)uVar32 != 0) {
    lVar24 = ((ulong)uVar25 & 0xfffffffe) * 4;
    lVar16 = lVar33 * 4;
    lVar17 = 0;
    lVar21 = 0;
    do {
      lVar26 = *(long *)(puVar34 + 2);
      uVar4 = *(ushort *)(lVar26 + lVar21 + 0x16);
      if ((uVar4 >> 9 & 1) == 0) {
        if ((uVar4 >> 5 & 1) == 0) {
          if ((uVar4 >> 6 & 1) == 0) {
            if ((uVar4 >> 7 & 1) == 0) {
              dVar39 = (double)*(ulong *)(lVar26 + lVar21);
            }
            else {
              dVar39 = (double)(long)*(ulong *)(lVar26 + lVar21);
            }
          }
          else {
            dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar26 + lVar21));
          }
        }
        else {
          dVar39 = (double)(long)*(int *)(lVar26 + lVar21);
        }
      }
      else {
        dVar39 = *(double *)(lVar26 + lVar21);
      }
      lVar26 = *(long *)this_01;
      *(float *)(lVar26 + lVar16 + lVar17) = (float)dVar39;
      lVar27 = *(long *)(piVar28 + 2);
      uVar4 = *(ushort *)(lVar27 + lVar21 + 0x16);
      if ((uVar4 >> 9 & 1) == 0) {
        if ((uVar4 >> 5 & 1) == 0) {
          if ((uVar4 >> 6 & 1) == 0) {
            if ((uVar4 >> 7 & 1) == 0) {
              dVar39 = (double)*(ulong *)(lVar27 + lVar21);
            }
            else {
              dVar39 = (double)(long)*(ulong *)(lVar27 + lVar21);
            }
          }
          else {
            dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar27 + lVar21));
          }
        }
        else {
          dVar39 = (double)(long)*(int *)(lVar27 + lVar21);
        }
      }
      else {
        dVar39 = *(double *)(lVar27 + lVar21);
      }
      *(float *)(lVar26 + lVar16 + lVar24 + lVar17) = (float)dVar39;
      lVar17 = lVar17 + 4;
      lVar21 = lVar21 + 0x18;
    } while (lVar24 - lVar17 != 0);
  }
  puVar8 = DataParser::WEIGHTS;
  pcVar36 = DataParser::WEIGHTS + -1;
  pcVar15 = pcVar36;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  piVar28 = *(int **)(param_1 + 8);
  uVar25 = *(uint *)param_1;
  uVar32 = (ulong)uVar25;
  piVar19 = piVar28 + uVar32 * 0xc;
  piVar30 = piVar28;
  if (uVar25 != 0) {
    uVar20 = (long)pcVar15 - (long)DataParser::WEIGHTS;
    lVar17 = uVar32 * 0x30;
    piVar37 = piVar28;
    do {
      iVar9 = *piVar37;
      if ((*(ushort *)((long)piVar37 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar37 + 0x15);
      }
      if (iVar9 == (int)uVar20) {
        __s2 = *(int **)(piVar37 + 2);
        if ((*(ushort *)((long)piVar37 + 0x16) & 0x1000) != 0) {
          __s2 = piVar37;
        }
        piVar30 = piVar37;
        if ((__s2 == (int *)puVar8) || (iVar9 = memcmp(puVar8,__s2,uVar20 & 0xffffffff), iVar9 == 0)
           ) break;
      }
      lVar17 = lVar17 + -0x30;
      piVar37 = piVar37 + 0xc;
      piVar30 = piVar19;
    } while (lVar17 != 0);
  }
  if (piVar19 == piVar30) goto LAB_00d4545c;
  do {
    pcVar36 = pcVar36 + 1;
  } while (*pcVar36 != '\0');
  if (uVar25 == 0) {
LAB_00d44a54:
    if (piVar28 == piVar19) goto LAB_00d44a64;
    piVar28 = piVar28 + 6;
  }
  else {
    lVar17 = uVar32 * 0x30;
    do {
      iVar9 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar9 == (int)((long)pcVar36 - (long)puVar8)) {
        piVar30 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar30 = piVar28;
        }
        if ((piVar30 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar30,(long)pcVar36 - (long)puVar8 & 0xffffffff), iVar9 == 0))
        goto LAB_00d44a54;
      }
      lVar17 = lVar17 + -0x30;
      piVar28 = piVar28 + 0xc;
    } while (lVar17 != 0);
LAB_00d44a64:
    piVar28 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  puVar8 = DataParser::SLOT_POSE;
  pcVar15 = DataParser::SLOT_POSE + -1;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  uVar25 = *(uint *)param_1;
  piVar30 = *(int **)(param_1 + 8);
  local_138 = piVar30;
  if (uVar25 == 0) {
LAB_00d44b0c:
    if (local_138 == piVar30 + (ulong)uVar25 * 0xc) goto LAB_00d44b28;
    local_138 = local_138 + 6;
  }
  else {
    uVar32 = (long)pcVar15 - (long)DataParser::SLOT_POSE;
    lVar17 = (ulong)uVar25 * 0x30;
    do {
      iVar9 = *local_138;
      if ((*(ushort *)((long)local_138 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)local_138 + 0x15);
      }
      if (iVar9 == (int)uVar32) {
        piVar19 = *(int **)(local_138 + 2);
        if ((*(ushort *)((long)local_138 + 0x16) & 0x1000) != 0) {
          piVar19 = local_138;
        }
        if ((piVar19 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar19,uVar32 & 0xffffffff), iVar9 == 0)) goto LAB_00d44b0c;
      }
      lVar17 = lVar17 + -0x30;
      local_138 = local_138 + 0xc;
    } while (lVar17 != 0);
LAB_00d44b28:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    local_138 = (int *)&rapidjson::
                        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                        ::
                        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                        ::buffer;
    DAT_01d38c20 = 0;
  }
  puVar8 = DataParser::BONE_POSE;
  pcVar15 = DataParser::BONE_POSE + -1;
  do {
    pcVar15 = pcVar15 + 1;
  } while (*pcVar15 != '\0');
  uVar25 = *(uint *)param_1;
  piVar19 = *(int **)(param_1 + 8);
  piVar30 = piVar19;
  if (uVar25 == 0) {
LAB_00d44bd4:
    if (piVar30 == piVar19 + (ulong)uVar25 * 0xc) goto LAB_00d44bec;
    puVar34 = (uint *)(piVar30 + 6);
    uVar25 = *puVar34;
  }
  else {
    uVar32 = (long)pcVar15 - (long)DataParser::BONE_POSE;
    lVar17 = (ulong)uVar25 * 0x30;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar32) {
        piVar37 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar37 = piVar30;
        }
        if ((piVar37 == (int *)puVar8) ||
           (iVar9 = memcmp(puVar8,piVar37,uVar32 & 0xffffffff), iVar9 == 0)) goto LAB_00d44bd4;
      }
      lVar17 = lVar17 + -0x30;
      piVar30 = piVar30 + 0xc;
    } while (lVar17 != 0);
LAB_00d44bec:
    puVar34 = (uint *)&rapidjson::
                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                       ::
                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                       ::buffer;
    uVar25 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  lVar16 = *(long *)(this + 0x30);
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_b0 = (void *)0x0;
  lVar21 = *(long *)(this + 0x120);
  lVar24 = *(long *)(this + 0x128);
  uVar32 = (ulong)uVar25 / 7;
  uVar5 = *piVar28 - uVar29 >> 1;
  lVar17 = *(long *)(this + 0x110) - *(long *)(this + 0x108) >> 1;
  this_02 = BaseObject::borrowObject<dragonBones::WeightData>();
  *(uint *)(this_02 + 0x10) = uVar5;
  *(int *)(this_02 + 0x14) = (int)lVar17;
  uVar20 = (long)pvStack_a8 - (long)local_b0 >> 2;
  if (uVar20 < uVar32) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_b0,
               uVar32 - uVar20);
  }
  else if (uVar20 != uVar32) {
    pvStack_a8 = (void *)((long)local_b0 + uVar32 * 4);
  }
  lVar26 = *(long *)(this + 0x108);
  uVar23 = *(long *)(this + 0x110) - lVar26 >> 1;
  uVar20 = uVar32 + 2 + (ulong)uVar29 + (ulong)uVar5;
  uVar22 = uVar20 + uVar23;
  if (uVar23 < uVar22) {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(this_00,uVar20);
    lVar26 = *(long *)this_00;
  }
  else if (uVar22 < uVar23) {
    *(ulong *)(this + 0x110) = lVar26 + uVar22 * 2;
  }
  *(short *)(lVar26 + lVar17 * 2 + 2) = (short)((ulong)(lVar24 - lVar21) >> 2);
  if (6 < uVar25) {
    uVar20 = 0;
    do {
      uVar25 = *(uint *)(*(long *)(puVar34 + 2) + uVar20 * 0xa8);
      pBVar31 = *(BoneData **)(*(long *)(this + 0x10) + (ulong)uVar25 * 8);
      WeightData::addBone(this_02,pBVar31);
      *(uint *)((long)local_b0 + uVar20 * 4) = uVar25;
      lVar26 = *(long *)(lVar16 + 0x60);
      lVar27 = *(long *)(lVar16 + 0x68) - lVar26;
      if (lVar27 != 0) {
        uVar22 = 0;
        do {
          if (*(BoneData **)(lVar26 + uVar22 * 8) == pBVar31) goto LAB_00d44d6c;
          uVar22 = uVar22 + 1;
        } while (uVar22 < (ulong)(lVar27 >> 3));
      }
      uVar22 = 0xffff;
LAB_00d44d6c:
      lVar26 = lVar17 + 2 + uVar20;
      uVar20 = uVar20 + 1;
      *(short *)(*(long *)this_00 + lVar26 * 2) = (short)uVar22;
    } while (uVar20 < uVar32);
  }
  uVar22 = *(long *)(this + 0x128) - *(long *)(this + 0x120) >> 2;
  uVar20 = uVar22 + uVar5 * 3;
  if (uVar22 < uVar20) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_01,(ulong)(uVar5 * 3));
  }
  else if (uVar22 != uVar20) {
    *(ulong *)(this + 0x128) = *(long *)(this + 0x120) + uVar20 * 4;
  }
  pdVar18 = *(double **)(local_138 + 2);
  uVar4 = *(ushort *)((long)pdVar18 + 0x16);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)(ulong)*pdVar18;
        }
        else {
          dVar39 = (double)(long)*pdVar18;
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
      }
    }
    else {
      dVar39 = (double)(long)*(int *)pdVar18;
    }
  }
  else {
    dVar39 = *pdVar18;
  }
  fVar38 = (float)dVar39;
  *(float *)(this + 0x7c) = fVar38;
  lVar16 = *(long *)(local_138 + 2);
  uVar4 = *(ushort *)(lVar16 + 0x2e);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)*(ulong *)(lVar16 + 0x18);
        }
        else {
          dVar39 = (double)(long)*(ulong *)(lVar16 + 0x18);
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x18));
      }
    }
    else {
      dVar39 = (double)(long)*(int *)(lVar16 + 0x18);
    }
  }
  else {
    dVar39 = *(double *)(lVar16 + 0x18);
  }
  fVar40 = (float)dVar39;
  *(float *)(this + 0x80) = fVar40;
  lVar16 = *(long *)(local_138 + 2);
  uVar4 = *(ushort *)(lVar16 + 0x46);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)*(ulong *)(lVar16 + 0x30);
        }
        else {
          dVar39 = (double)(long)*(ulong *)(lVar16 + 0x30);
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x30));
      }
    }
    else {
      dVar39 = (double)(long)*(int *)(lVar16 + 0x30);
    }
  }
  else {
    dVar39 = *(double *)(lVar16 + 0x30);
  }
  fVar41 = (float)dVar39;
  *(float *)(this + 0x84) = fVar41;
  lVar16 = *(long *)(local_138 + 2);
  uVar4 = *(ushort *)(lVar16 + 0x5e);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)*(ulong *)(lVar16 + 0x48);
        }
        else {
          dVar39 = (double)(long)*(ulong *)(lVar16 + 0x48);
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x48));
      }
    }
    else {
      dVar39 = (double)(long)*(int *)(lVar16 + 0x48);
    }
  }
  else {
    dVar39 = *(double *)(lVar16 + 0x48);
  }
  fVar42 = (float)dVar39;
  *(float *)(this + 0x88) = fVar42;
  lVar16 = *(long *)(local_138 + 2);
  uVar4 = *(ushort *)(lVar16 + 0x76);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)*(ulong *)(lVar16 + 0x60);
        }
        else {
          dVar39 = (double)(long)*(ulong *)(lVar16 + 0x60);
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x60));
      }
    }
    else {
      dVar39 = (double)(long)*(int *)(lVar16 + 0x60);
    }
  }
  else {
    dVar39 = *(double *)(lVar16 + 0x60);
  }
  fVar43 = (float)dVar39;
  *(float *)(this + 0x8c) = fVar43;
  lVar16 = *(long *)(local_138 + 2);
  uVar4 = *(ushort *)(lVar16 + 0x8e);
  if ((uVar4 >> 9 & 1) == 0) {
    if ((uVar4 >> 5 & 1) == 0) {
      if ((uVar4 >> 6 & 1) == 0) {
        if ((uVar4 >> 7 & 1) == 0) {
          dVar39 = (double)*(ulong *)(lVar16 + 0x78);
        }
        else {
          dVar39 = (double)(long)*(ulong *)(lVar16 + 0x78);
        }
      }
      else {
        dVar39 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x78));
      }
    }
    else {
      dVar39 = (double)(long)*(int *)(lVar16 + 0x78);
    }
  }
  else {
    dVar39 = *(double *)(lVar16 + 0x78);
  }
  fVar44 = (float)dVar39;
  *(float *)(this + 0x90) = fVar44;
  if (uVar29 != 0) {
    lVar16 = *(long *)(this + 0x108);
    lVar26 = *(long *)(this + 0x120);
    uVar20 = 0;
    lVar21 = lVar24 - lVar21 >> 2;
    lVar17 = uVar32 + 2 + lVar17;
    uVar32 = 0;
    do {
      uVar22 = uVar32 + 1;
      uVar25 = *(uint *)(*(long *)(piVar28 + 2) + (uVar32 & 0xffffffff) * 0x18);
      uVar23 = (ulong)uVar25;
      pfVar3 = (float *)(lVar26 + (lVar33 + uVar20 * 2) * 4);
      *(short *)(lVar16 + lVar17 * 2) = (short)uVar25;
      fVar45 = *pfVar3;
      fVar47 = pfVar3[1];
      lVar17 = lVar17 + 1;
      fVar43 = fVar45 * fVar38 + fVar47 * fVar41 + fVar43;
      fVar44 = fVar45 * fVar40 + fVar47 * fVar42 + fVar44;
      *(float *)(this + 0xe4) = fVar43;
      *(float *)(this + 0xe8) = fVar44;
      if (uVar25 != 0) {
        uVar12 = 0;
        lVar27 = lVar17 + uVar23;
        lVar24 = lVar21;
        uVar14 = uVar22;
        do {
          if ((long)pvStack_a8 - (long)local_b0 != 0) {
            uVar13 = 0;
            do {
              if (*(int *)((long)local_b0 + uVar13 * 4) ==
                  *(int *)(*(long *)(piVar28 + 2) + (uVar14 & 0xffffffff) * 0x18))
              goto LAB_00d450a0;
              uVar13 = uVar13 + 1;
            } while (uVar13 < (ulong)((long)pvStack_a8 - (long)local_b0 >> 2));
          }
          uVar13 = 0xffffffff;
LAB_00d450a0:
          iVar9 = (int)uVar13 * 7;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 1) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar38 = (float)dVar39;
          *(float *)(this + 0x94) = fVar38;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 2) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar40 = (float)dVar39;
          *(float *)(this + 0x98) = fVar40;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 3) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar41 = (float)dVar39;
          *(float *)(this + 0x9c) = fVar41;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 4) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar42 = (float)dVar39;
          *(float *)(this + 0xa0) = fVar42;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 5) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar45 = (float)dVar39;
          *(float *)(this + 0xa4) = fVar45;
          pdVar18 = (double *)(*(long *)(puVar34 + 2) + (ulong)(iVar9 + 6) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          fVar46 = fVar42 * fVar38 - fVar40 * fVar41;
          *(float *)(this + 0x94) = fVar42 / fVar46;
          *(float *)(this + 0x98) = -fVar40 / fVar46;
          *(float *)(this + 0x9c) = -fVar41 / fVar46;
          *(float *)(this + 0xa0) = fVar38 / fVar46;
          fVar47 = (fVar41 * (float)dVar39 - fVar42 * fVar45) / fVar46;
          fVar45 = -(fVar38 * (float)dVar39 - fVar40 * fVar45) / fVar46;
          *(float *)(this + 0xa4) = fVar47;
          *(float *)(this + 0xa8) = fVar45;
          *(float *)(this + 0xe4) =
               fVar43 * (fVar42 / fVar46) + fVar44 * (-fVar41 / fVar46) + fVar47;
          *(float *)(this + 0xe8) =
               fVar43 * (-fVar40 / fVar46) + fVar44 * (fVar38 / fVar46) + fVar45;
          *(short *)(lVar16 + lVar17 * 2) = (short)uVar13;
          pdVar18 = (double *)(*(long *)(piVar28 + 2) + (uVar32 + 2 & 0xffffffff) * 0x18);
          uVar4 = *(ushort *)((long)pdVar18 + 0x16);
          if ((uVar4 >> 9 & 1) == 0) {
            if ((uVar4 >> 5 & 1) == 0) {
              if ((uVar4 >> 6 & 1) == 0) {
                if ((uVar4 >> 7 & 1) == 0) {
                  dVar39 = (double)(ulong)*pdVar18;
                }
                else {
                  dVar39 = (double)(long)*pdVar18;
                }
              }
              else {
                dVar39 = (double)NEON_ucvtf((ulong)*(uint *)pdVar18);
              }
            }
            else {
              dVar39 = (double)(long)*(int *)pdVar18;
            }
          }
          else {
            dVar39 = *pdVar18;
          }
          pfVar3 = (float *)(lVar26 + lVar24 * 4);
          *pfVar3 = (float)dVar39;
          uVar12 = uVar12 + 1;
          lVar24 = lVar24 + 3;
          lVar17 = lVar17 + 1;
          pfVar3[1] = *(float *)(this + 0xe4);
          pfVar3[2] = *(float *)(this + 0xe8);
          uVar14 = uVar32 + 3;
          uVar32 = uVar32 + 2;
        } while (uVar12 != uVar23);
        lVar21 = lVar21 + uVar23 * 3;
        uVar22 = uVar22 + uVar23 * 2;
        lVar17 = lVar27;
      }
      uVar20 = uVar20 + 1;
      if (uVar20 == uVar29) break;
      fVar38 = *(float *)(this + 0x7c);
      fVar40 = *(float *)(this + 0x80);
      fVar41 = *(float *)(this + 0x84);
      fVar42 = *(float *)(this + 0x88);
      fVar43 = *(float *)(this + 0x8c);
      fVar44 = *(float *)(this + 0x90);
      uVar32 = uVar22;
    } while( true );
  }
  *(WeightData **)(param_2 + 0x78) = this_02;
  local_d0 = &local_90;
  lVar33 = std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                     ((basic_string *)(this + 0x1e0),(piecewise_construct_t *)&local_90,
                      (tuple *)&DAT_01948c98,(tuple *)&local_d0);
  *(int **)(lVar33 + 0x38) = local_138;
  local_d0 = &local_90;
  lVar33 = std::__ndk1::
           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
           ::
           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                     ((basic_string *)(this + 0x1f8),(piecewise_construct_t *)&local_90,
                      (tuple *)&DAT_01948c98,(tuple *)&local_d0);
  *(uint **)(lVar33 + 0x38) = puVar34;
  if (local_b0 != (void *)0x0) {
    pvStack_a8 = local_b0;
    operator_delete(local_b0);
  }
LAB_00d4545c:
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

