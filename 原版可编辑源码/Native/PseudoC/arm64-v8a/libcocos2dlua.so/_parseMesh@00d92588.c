
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
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
  *p_Var2;
  undefined2 *puVar3;
  float *pfVar4;
  int *__s2;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  MeshDisplayData *pMVar8;
  undefined *puVar9;
  void *pvVar10;
  int iVar11;
  ulong *puVar12;
  WeightData *this_02;
  __tree_node_base **pp_Var13;
  __tree_node_base *p_Var14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  char *pcVar18;
  long lVar19;
  long lVar20;
  double *pdVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  int *piVar32;
  uint *puVar33;
  __tree_node_base *p_Var34;
  int *piVar35;
  BoneData *pBVar36;
  ulong uVar37;
  uint *puVar38;
  long lVar39;
  char *pcVar40;
  int *piVar41;
  uint *puVar42;
  float fVar43;
  double dVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  __tree_end_node *local_d0;
  ulong uStack_c8;
  void *local_c0;
  void *local_b0;
  void *pvStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  puVar9 = DataParser::VERTICES;
  lVar7 = tpidr_el0;
  local_70 = *(long *)(lVar7 + 0x28);
                    /* try { // try from 00d925c8 to 00e925db has its CatchHandler @ 00d935cc */
  pcVar18 = DataParser::VERTICES + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
                    /* try { // try from 00d925e0 to 00e925f7 has its CatchHandler @ 00d931a8 */
  uVar17 = *(uint *)param_1;
  piVar35 = *(int **)(param_1 + 8);
  puVar42 = (uint *)&rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::
                     operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                     ::buffer;
  piVar41 = piVar35;
  if (uVar17 == 0) {
LAB_00d92664:
                    /* try { // try from 00d92668 to 00e9268f has its CatchHandler @ 00d93194 */
    if (piVar41 == piVar35 + (ulong)uVar17 * 0xc) goto LAB_00d9267c;
    puVar33 = (uint *)(piVar41 + 6);
  }
  else {
    uVar37 = (long)pcVar18 - (long)DataParser::VERTICES;
                    /* try { // try from 00d925f8 to 00e9260b has its CatchHandler @ 00d93124 */
    lVar39 = (ulong)uVar17 * 0x30;
    do {
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar24 = *(int **)(piVar41 + 2);
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar24 = piVar41;
        }
                    /* try { // try from 00d92650 to 00e92663 has its CatchHandler @ 00d93114 */
        if ((piVar24 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar24,uVar37 & 0xffffffff), iVar11 == 0)) goto LAB_00d92664;
      }
      lVar39 = lVar39 + -0x30;
                    /* try { // try from 00d92610 to 00e9263f has its CatchHandler @ 00d9352c */
      piVar41 = piVar41 + 0xc;
    } while (lVar39 != 0);
LAB_00d9267c:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    puVar33 = puVar42;
  }
  puVar9 = DataParser::UVS;
  pcVar18 = DataParser::UVS + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
                    /* try { // try from 00d926a0 to 00e926df has its CatchHandler @ 00d9332c */
  uVar17 = *(uint *)param_1;
  piVar35 = *(int **)(param_1 + 8);
  piVar41 = piVar35;
  if (uVar17 == 0) {
LAB_00d9272c:
                    /* try { // try from 00d9272c to 00e9273f has its CatchHandler @ 00d935c8 */
    if (piVar41 == piVar35 + (ulong)uVar17 * 0xc) goto LAB_00d92744;
    puVar28 = (uint *)(piVar41 + 6);
  }
  else {
    uVar37 = (long)pcVar18 - (long)DataParser::UVS;
    lVar39 = (ulong)uVar17 * 0x30;
    do {
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar24 = *(int **)(piVar41 + 2);
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar24 = piVar41;
        }
        if ((piVar24 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar24,uVar37 & 0xffffffff), iVar11 == 0)) goto LAB_00d9272c;
      }
      lVar39 = lVar39 + -0x30;
      piVar41 = piVar41 + 0xc;
    } while (lVar39 != 0);
LAB_00d92744:
                    /* try { // try from 00d92744 to 00e9275b has its CatchHandler @ 00d93190 */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    puVar28 = puVar42;
  }
  puVar9 = DataParser::TRIANGLES;
                    /* try { // try from 00d9275c to 00e9276f has its CatchHandler @ 00d93104 */
  pcVar18 = DataParser::TRIANGLES + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  uVar17 = *(uint *)param_1;
  piVar35 = *(int **)(param_1 + 8);
                    /* try { // try from 00d92774 to 00e927a3 has its CatchHandler @ 00d934cc */
  piVar41 = piVar35;
  if (uVar17 == 0) {
LAB_00d927fc:
                    /* try { // try from 00d92804 to 00e92843 has its CatchHandler @ 00d932cc */
    if (piVar41 == piVar35 + (ulong)uVar17 * 0xc) goto LAB_00d92814;
    uVar17 = piVar41[6];
    puVar38 = (uint *)(piVar41 + 6);
  }
  else {
    uVar37 = (long)pcVar18 - (long)DataParser::TRIANGLES;
    lVar39 = (ulong)uVar17 * 0x30;
    do {
                    /* try { // try from 00d927b4 to 00e927c7 has its CatchHandler @ 00d930f4 */
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
                    /* try { // try from 00d927cc to 00e927f3 has its CatchHandler @ 00d9317c */
        piVar24 = *(int **)(piVar41 + 2);
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar24 = piVar41;
        }
        if ((piVar24 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar24,uVar37 & 0xffffffff), iVar11 == 0)) goto LAB_00d927fc;
      }
      lVar39 = lVar39 + -0x30;
      piVar41 = piVar41 + 0xc;
    } while (lVar39 != 0);
LAB_00d92814:
    uVar17 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    puVar38 = puVar42;
  }
  uVar29 = *puVar33;
  lVar39 = *(long *)(this + 0x120);
  lVar23 = *(long *)(this + 0x128);
  lVar20 = *(long *)(this + 0x108);
  lVar27 = *(long *)(this + 0x110);
  FUN_007c1fb0(local_e8,*(long *)(this + 0x48) + 0x10,&DAT_0145cbbc);
  lVar19 = *(long *)(this + 0x40);
  uVar37 = (ulong)(*(byte *)(lVar19 + 0x20) >> 1);
  pcVar18 = (char *)(lVar19 + 0x21);
  if ((*(byte *)(lVar19 + 0x20) & 1) != 0) {
    uVar37 = *(ulong *)(lVar19 + 0x28);
    pcVar18 = *(char **)(lVar19 + 0x30);
  }
  puVar12 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_e8,pcVar18,uVar37);
  uStack_c8 = puVar12[1];
  local_d0 = (__tree_end_node *)*puVar12;
  local_c0 = (void *)puVar12[2];
                    /* try { // try from 00d92890 to 00e928a3 has its CatchHandler @ 00d935c4 */
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
                    /* try { // try from 00d928a8 to 00e928bf has its CatchHandler @ 00d93178 */
  puVar12 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_d0,"_",1);
  pvStack_a8 = (void *)puVar12[1];
  local_b0 = (void *)*puVar12;
  local_a0 = (void *)puVar12[2];
                    /* try { // try from 00d928c0 to 00e928d3 has its CatchHandler @ 00d930e4 */
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
                    /* try { // try from 00d928d8 to 00e92907 has its CatchHandler @ 00d9346c */
  uVar37 = (ulong)((byte)param_2[0x18] >> 1);
  pMVar8 = param_2 + 0x19;
  if (((byte)param_2[0x18] & 1) != 0) {
    uVar37 = *(ulong *)(param_2 + 0x20);
    pMVar8 = *(MeshDisplayData **)(param_2 + 0x28);
  }
  puVar12 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_b0,(char *)pMVar8,uVar37);
  uStack_88 = puVar12[1];
  local_90 = *puVar12;
  local_80 = (void *)puVar12[2];
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
                    /* try { // try from 00d92918 to 00e9292b has its CatchHandler @ 00d930d4 */
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
                    /* try { // try from 00d92930 to 00e92957 has its CatchHandler @ 00d93164 */
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  uVar6 = (uVar17 / 3) * 3;
  *(int *)(param_2 + 0x6c) = (int)((ulong)(lVar27 - lVar20) >> 1);
  lVar19 = *(long *)(this + 0x108);
  uVar37 = (ulong)uVar6 + 4;
  this_00 = (vector<short,std::__ndk1::allocator<short>> *)(this + 0x108);
                    /* try { // try from 00d92968 to 00e929a7 has its CatchHandler @ 00d9326c */
  uVar25 = *(long *)(this + 0x110) - lVar19 >> 1;
  uVar22 = uVar37 + uVar25;
  if (uVar25 < uVar22) {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(this_00,uVar37);
    lVar19 = *(long *)this_00;
  }
  else if (uVar22 < uVar25) {
    *(ulong *)(this + 0x110) = lVar19 + uVar22 * 2;
  }
  uVar37 = (ulong)uVar29 & 0xfffffffe;
  puVar3 = (undefined2 *)(lVar19 + (lVar27 - lVar20 >> 1) * 2);
  *puVar3 = (short)(uVar29 >> 1);
  puVar3[1] = (short)(uVar17 / 3);
  puVar3[2] = (short)((ulong)(lVar23 - lVar39) >> 2);
  if (uVar6 != 0) {
    lVar20 = 0;
    uVar22 = 0;
    do {
      puVar1 = (undefined4 *)(*(long *)(puVar38 + 2) + lVar20);
      lVar20 = lVar20 + 0x18;
      puVar3[uVar22 + 4] = (short)*puVar1;
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar6);
  }
                    /* try { // try from 00d929f4 to 00e92a07 has its CatchHandler @ 00d935c0 */
  uVar25 = uVar37 * 2;
  this_01 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0x120);
  uVar26 = *(long *)(this + 0x128) - *(long *)(this + 0x120) >> 2;
  uVar22 = uVar26 + uVar25;
                    /* try { // try from 00d92a0c to 00e92a23 has its CatchHandler @ 00d93160 */
  if (uVar26 < uVar22) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_01,uVar25);
                    /* try { // try from 00d92a24 to 00e92a37 has its CatchHandler @ 00d930c4 */
  }
  else if (uVar22 < uVar26) {
    *(ulong *)(this + 0x128) = *(long *)(this + 0x120) + uVar22 * 4;
  }
  uVar17 = uVar29 >> 1;
                    /* try { // try from 00d92a3c to 00e92a6b has its CatchHandler @ 00d9340c */
  lVar39 = lVar23 - lVar39 >> 2;
  if ((int)uVar37 != 0) {
    lVar27 = ((ulong)uVar29 & 0xfffffffe) * 4;
    lVar19 = lVar39 * 4;
    lVar20 = 0;
    lVar23 = 0;
    do {
      lVar30 = *(long *)(puVar33 + 2);
      uVar5 = *(ushort *)(lVar30 + lVar23 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
                    /* try { // try from 00d92a94 to 00e92abb has its CatchHandler @ 00d9314c */
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar44 = (double)*(ulong *)(lVar30 + lVar23);
            }
            else {
                    /* try { // try from 00d92acc to 00e92b0b has its CatchHandler @ 00d9320c */
              dVar44 = (double)(long)*(ulong *)(lVar30 + lVar23);
            }
          }
          else {
            dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar30 + lVar23));
          }
        }
        else {
          dVar44 = (double)(long)*(int *)(lVar30 + lVar23);
        }
      }
      else {
        dVar44 = *(double *)(lVar30 + lVar23);
      }
      lVar30 = *(long *)this_01;
      *(float *)(lVar30 + lVar19 + lVar20) = (float)dVar44;
      lVar31 = *(long *)(puVar28 + 2);
      uVar5 = *(ushort *)(lVar31 + lVar23 + 0x16);
      if ((uVar5 >> 9 & 1) == 0) {
        if ((uVar5 >> 5 & 1) == 0) {
          if ((uVar5 >> 6 & 1) == 0) {
            if ((uVar5 >> 7 & 1) == 0) {
              dVar44 = (double)*(ulong *)(lVar31 + lVar23);
            }
            else {
              dVar44 = (double)(long)*(ulong *)(lVar31 + lVar23);
            }
          }
          else {
            dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar31 + lVar23));
          }
        }
        else {
          dVar44 = (double)(long)*(int *)(lVar31 + lVar23);
        }
      }
      else {
        dVar44 = *(double *)(lVar31 + lVar23);
      }
      *(float *)(lVar30 + lVar19 + lVar27 + lVar20) = (float)dVar44;
      lVar20 = lVar20 + 4;
      lVar23 = lVar23 + 0x18;
                    /* try { // try from 00d92a7c to 00e92a8f has its CatchHandler @ 00d930b4 */
    } while (lVar27 - lVar20 != 0);
  }
  puVar9 = DataParser::WEIGHTS;
  pcVar40 = DataParser::WEIGHTS + -1;
  pcVar18 = pcVar40;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar41 = *(int **)(param_1 + 8);
                    /* try { // try from 00d92b58 to 00e92b6b has its CatchHandler @ 00d935a0 */
  uVar29 = *(uint *)param_1;
  uVar37 = (ulong)uVar29;
  piVar24 = piVar41 + uVar37 * 0xc;
                    /* try { // try from 00d92b70 to 00e92b87 has its CatchHandler @ 00d93148 */
  piVar35 = piVar41;
  if (uVar29 != 0) {
    uVar22 = (long)pcVar18 - (long)DataParser::WEIGHTS;
                    /* try { // try from 00d92b88 to 00e92b9b has its CatchHandler @ 00d930a4 */
    lVar20 = uVar37 * 0x30;
    piVar32 = piVar41;
    do {
                    /* try { // try from 00d92ba0 to 00e92bcf has its CatchHandler @ 00d9338c */
      iVar11 = *piVar32;
      if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar32 + 0x15);
      }
      if (iVar11 == (int)uVar22) {
        __s2 = *(int **)(piVar32 + 2);
        if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
          __s2 = piVar32;
        }
        piVar35 = piVar32;
                    /* try { // try from 00d92be0 to 00e92bf3 has its CatchHandler @ 00d93094 */
        if ((__s2 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,__s2,uVar22 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar20 = lVar20 + -0x30;
      piVar32 = piVar32 + 0xc;
      piVar35 = piVar24;
    } while (lVar20 != 0);
  }
  if (piVar24 == piVar35) goto LAB_00d93838;
  do {
                    /* try { // try from 00d92bf8 to 00e92c1f has its CatchHandler @ 00d93134 */
    pcVar40 = pcVar40 + 1;
  } while (*pcVar40 != '\0');
  if (uVar29 == 0) {
LAB_00d92c70:
    if (piVar41 == piVar24) goto LAB_00d92c80;
    puVar33 = (uint *)(piVar41 + 6);
  }
  else {
    lVar20 = uVar37 * 0x30;
    do {
                    /* try { // try from 00d92c30 to 00e92c6f has its CatchHandler @ 00d931ac */
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)((long)pcVar40 - (long)puVar9)) {
        piVar35 = *(int **)(piVar41 + 2);
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar35 = piVar41;
        }
        if ((piVar35 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar35,(long)pcVar40 - (long)puVar9 & 0xffffffff), iVar11 == 0))
        goto LAB_00d92c70;
      }
      lVar20 = lVar20 + -0x30;
      piVar41 = piVar41 + 0xc;
    } while (lVar20 != 0);
LAB_00d92c80:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    puVar33 = puVar42;
  }
  puVar9 = DataParser::SLOT_POSE;
  pcVar18 = DataParser::SLOT_POSE + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  uVar29 = *(uint *)param_1;
  piVar35 = *(int **)(param_1 + 8);
  piVar41 = piVar35;
  if (uVar29 == 0) {
LAB_00d92d30:
                    /* try { // try from 00d92d34 to 00e92d3b has its CatchHandler @ 00d93680 */
    if (piVar41 == piVar35 + (ulong)uVar29 * 0xc) goto LAB_00d92d48;
    puVar28 = (uint *)(piVar41 + 6);
  }
  else {
    uVar37 = (long)pcVar18 - (long)DataParser::SLOT_POSE;
    lVar20 = (ulong)uVar29 * 0x30;
    do {
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar24 = *(int **)(piVar41 + 2);
                    /* try { // try from 00d92d08 to 00e92d0f has its CatchHandler @ 00d935cc */
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar24 = piVar41;
        }
        if ((piVar24 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar24,uVar37 & 0xffffffff), iVar11 == 0)) goto LAB_00d92d30;
      }
      lVar20 = lVar20 + -0x30;
      piVar41 = piVar41 + 0xc;
                    /* try { // try from 00d92cdc to 00e92ce3 has its CatchHandler @ 00d93690 */
    } while (lVar20 != 0);
LAB_00d92d48:
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
    puVar28 = puVar42;
  }
  puVar9 = DataParser::BONE_POSE;
                    /* try { // try from 00d92d60 to 00e92d67 has its CatchHandler @ 00d935c8 */
  pcVar18 = DataParser::BONE_POSE + -1;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  uVar29 = *(uint *)param_1;
  piVar35 = *(int **)(param_1 + 8);
  piVar41 = piVar35;
  if (uVar29 == 0) {
LAB_00d92dfc:
    if (piVar41 == piVar35 + (ulong)uVar29 * 0xc) goto LAB_00d92e18;
    puVar42 = (uint *)(piVar41 + 6);
    uVar29 = *puVar42;
  }
  else {
    uVar37 = (long)pcVar18 - (long)DataParser::BONE_POSE;
                    /* try { // try from 00d92d8c to 00e92d93 has its CatchHandler @ 00d93670 */
    lVar20 = (ulong)uVar29 * 0x30;
    do {
                    /* try { // try from 00d92db8 to 00e92dbf has its CatchHandler @ 00d935c4 */
      iVar11 = *piVar41;
      if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar41 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar24 = *(int **)(piVar41 + 2);
        if ((*(ushort *)((long)piVar41 + 0x16) & 0x1000) != 0) {
          piVar24 = piVar41;
        }
        if ((piVar24 == (int *)puVar9) ||
           (iVar11 = memcmp(puVar9,piVar24,uVar37 & 0xffffffff), iVar11 == 0)) goto LAB_00d92dfc;
      }
      lVar20 = lVar20 + -0x30;
      piVar41 = piVar41 + 0xc;
    } while (lVar20 != 0);
LAB_00d92e18:
    uVar29 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
  lVar19 = *(long *)(this + 0x30);
  pvStack_a8 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_b0 = (void *)0x0;
                    /* try { // try from 00d92e50 to 00e92e57 has its CatchHandler @ 00d93660 */
  lVar23 = *(long *)(this + 0x120);
  lVar27 = *(long *)(this + 0x128);
  uVar37 = (ulong)uVar29 / 7;
  uVar6 = *puVar33 - uVar17 >> 1;
  lVar20 = *(long *)(this + 0x110) - *(long *)(this + 0x108) >> 1;
  this_02 = BaseObject::borrowObject<dragonBones::WeightData>();
  *(uint *)(this_02 + 0x10) = uVar6;
  *(int *)(this_02 + 0x14) = (int)lVar20;
                    /* try { // try from 00d92e7c to 00e92e83 has its CatchHandler @ 00d935c0 */
  uVar22 = (long)pvStack_a8 - (long)local_b0 >> 2;
  if (uVar22 < uVar37) {
    std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
              ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_b0,
               uVar37 - uVar22);
  }
  else if (uVar22 != uVar37) {
    pvStack_a8 = (void *)((long)local_b0 + uVar37 * 4);
  }
  lVar30 = *(long *)(this + 0x108);
  uVar26 = *(long *)(this + 0x110) - lVar30 >> 1;
  uVar22 = uVar37 + 2 + (ulong)uVar17 + (ulong)uVar6;
  uVar25 = uVar22 + uVar26;
  if (uVar26 < uVar25) {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append(this_00,uVar22);
    lVar30 = *(long *)this_00;
  }
  else if (uVar25 < uVar26) {
    *(ulong *)(this + 0x110) = lVar30 + uVar25 * 2;
  }
                    /* try { // try from 00d92f14 to 00e92f1b has its CatchHandler @ 00d9365c */
  *(short *)(lVar30 + lVar20 * 2 + 2) = (short)((ulong)(lVar27 - lVar23) >> 2);
  if (6 < uVar29) {
    uVar22 = 0;
    do {
      uVar29 = *(uint *)(*(long *)(puVar42 + 2) + uVar22 * 0xa8);
      pBVar36 = *(BoneData **)(*(long *)(this + 0x10) + (ulong)uVar29 * 8);
      WeightData::addBone(this_02,pBVar36);
      *(uint *)((long)local_b0 + uVar22 * 4) = uVar29;
      lVar30 = *(long *)(lVar19 + 0x60);
      lVar31 = *(long *)(lVar19 + 0x68) - lVar30;
      if (lVar31 != 0) {
        uVar25 = 0;
        do {
          if (*(BoneData **)(lVar30 + uVar25 * 8) == pBVar36) goto LAB_00d92f40;
          uVar25 = uVar25 + 1;
        } while (uVar25 < (ulong)(lVar31 >> 3));
      }
      uVar25 = 0xffff;
LAB_00d92f40:
                    /* try { // try from 00d92f40 to 00e92f47 has its CatchHandler @ 00d935a0 */
      lVar30 = lVar20 + 2 + uVar22;
                    /* try { // try from 00d92f48 to 00e93737 has its CatchHandler @ 00d91d00 */
      uVar22 = uVar22 + 1;
      *(short *)(*(long *)this_00 + lVar30 * 2) = (short)uVar25;
    } while (uVar22 < uVar37);
  }
  uVar25 = *(long *)(this + 0x128) - *(long *)(this + 0x120) >> 2;
  uVar22 = uVar25 + uVar6 * 3;
  if (uVar25 < uVar22) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_01,(ulong)(uVar6 * 3));
  }
  else if (uVar25 != uVar22) {
    *(ulong *)(this + 0x128) = *(long *)(this + 0x120) + uVar22 * 4;
  }
  pdVar21 = *(double **)(puVar28 + 2);
  uVar5 = *(ushort *)((long)pdVar21 + 0x16);
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
          dVar44 = (double)(ulong)*pdVar21;
        }
        else {
          dVar44 = (double)(long)*pdVar21;
        }
      }
      else {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
      }
    }
    else {
      dVar44 = (double)(long)*(int *)pdVar21;
    }
  }
  else {
    dVar44 = *pdVar21;
  }
  fVar43 = (float)dVar44;
  *(float *)(this + 0x7c) = fVar43;
  lVar19 = *(long *)(puVar28 + 2);
  uVar5 = *(ushort *)(lVar19 + 0x2e);
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
          dVar44 = (double)*(ulong *)(lVar19 + 0x18);
        }
        else {
          dVar44 = (double)(long)*(ulong *)(lVar19 + 0x18);
        }
      }
      else {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar19 + 0x18));
                    /* catch() { ... } // from try @ 00d92b88 with catch @ 00d930a4 */
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d92be0 with catch @ 00d93094 */
      dVar44 = (double)(long)*(int *)(lVar19 + 0x18);
    }
  }
  else {
    dVar44 = *(double *)(lVar19 + 0x18);
  }
  fVar45 = (float)dVar44;
  *(float *)(this + 0x80) = fVar45;
                    /* catch() { ... } // from try @ 00d92a7c with catch @ 00d930b4 */
  lVar19 = *(long *)(puVar28 + 2);
  uVar5 = *(ushort *)(lVar19 + 0x46);
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d92a24 with catch @ 00d930c4 */
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
          dVar44 = (double)*(ulong *)(lVar19 + 0x30);
                    /* catch() { ... } // from try @ 00d92918 with catch @ 00d930d4 */
        }
        else {
          dVar44 = (double)(long)*(ulong *)(lVar19 + 0x30);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00d927b4 with catch @ 00d930f4 */
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar19 + 0x30));
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d928c0 with catch @ 00d930e4 */
      dVar44 = (double)(long)*(int *)(lVar19 + 0x30);
    }
  }
  else {
    dVar44 = *(double *)(lVar19 + 0x30);
  }
  fVar46 = (float)dVar44;
                    /* catch() { ... } // from try @ 00d9275c with catch @ 00d93104 */
  *(float *)(this + 0x84) = fVar46;
  lVar19 = *(long *)(puVar28 + 2);
  uVar5 = *(ushort *)(lVar19 + 0x5e);
  if ((uVar5 >> 9 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d92650 with catch @ 00d93114 */
    if ((uVar5 >> 5 & 1) == 0) {
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d925f8 with catch @ 00d93124 */
          dVar44 = (double)*(ulong *)(lVar19 + 0x48);
        }
        else {
          dVar44 = (double)(long)*(ulong *)(lVar19 + 0x48);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00d92b70 with catch @ 00d93148 */
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar19 + 0x48));
                    /* catch() { ... } // from try @ 00d92a94 with catch @ 00d9314c */
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d92bf8 with catch @ 00d93134 */
      dVar44 = (double)(long)*(int *)(lVar19 + 0x48);
    }
  }
  else {
    dVar44 = *(double *)(lVar19 + 0x48);
  }
  fVar47 = (float)dVar44;
  *(float *)(this + 0x88) = fVar47;
  lVar19 = *(long *)(puVar28 + 2);
                    /* catch() { ... } // from try @ 00d92a0c with catch @ 00d93160 */
  uVar5 = *(ushort *)(lVar19 + 0x76);
                    /* catch() { ... } // from try @ 00d92930 with catch @ 00d93164 */
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d928a8 with catch @ 00d93178 */
          dVar44 = (double)*(ulong *)(lVar19 + 0x60);
                    /* catch() { ... } // from try @ 00d927cc with catch @ 00d9317c */
        }
        else {
          dVar44 = (double)(long)*(ulong *)(lVar19 + 0x60);
        }
      }
      else {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar19 + 0x60));
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d92744 with catch @ 00d93190 */
      dVar44 = (double)(long)*(int *)(lVar19 + 0x60);
                    /* catch() { ... } // from try @ 00d92668 with catch @ 00d93194 */
    }
  }
  else {
    dVar44 = *(double *)(lVar19 + 0x60);
  }
                    /* catch() { ... } // from try @ 00d925e0 with catch @ 00d931a8 */
  fVar48 = (float)dVar44;
                    /* catch() { ... } // from try @ 00d92c30 with catch @ 00d931ac */
  *(float *)(this + 0x8c) = fVar48;
  lVar19 = *(long *)(puVar28 + 2);
  uVar5 = *(ushort *)(lVar19 + 0x8e);
  if ((uVar5 >> 9 & 1) == 0) {
    if ((uVar5 >> 5 & 1) == 0) {
      if ((uVar5 >> 6 & 1) == 0) {
        if ((uVar5 >> 7 & 1) == 0) {
          dVar44 = (double)*(ulong *)(lVar19 + 0x78);
        }
        else {
          dVar44 = (double)(long)*(ulong *)(lVar19 + 0x78);
        }
      }
      else {
        dVar44 = (double)NEON_ucvtf((ulong)*(uint *)(lVar19 + 0x78));
      }
    }
    else {
      dVar44 = (double)(long)*(int *)(lVar19 + 0x78);
    }
  }
  else {
    dVar44 = *(double *)(lVar19 + 0x78);
  }
  fVar49 = (float)dVar44;
  *(float *)(this + 0x90) = fVar49;
  if (uVar17 != 0) {
                    /* catch() { ... } // from try @ 00d92acc with catch @ 00d9320c */
    lVar19 = *(long *)(this + 0x108);
    lVar30 = *(long *)(this + 0x120);
    uVar22 = 0;
    lVar23 = lVar27 - lVar23 >> 2;
    lVar20 = uVar37 + 2 + lVar20;
    uVar37 = 0;
    do {
      uVar29 = *(uint *)(*(long *)(puVar33 + 2) + (uVar37 & 0xffffffff) * 0x18);
      pfVar4 = (float *)(lVar30 + (lVar39 + uVar22 * 2) * 4);
      *(short *)(lVar19 + lVar20 * 2) = (short)uVar29;
      fVar50 = *pfVar4;
      fVar52 = pfVar4[1];
      lVar20 = lVar20 + 1;
      uVar25 = uVar37 + 1;
      fVar48 = fVar50 * fVar43 + fVar52 * fVar46 + fVar48;
                    /* catch() { ... } // from try @ 00d92968 with catch @ 00d9326c */
      fVar49 = fVar50 * fVar45 + fVar52 * fVar47 + fVar49;
      *(float *)(this + 0xe4) = fVar48;
      *(float *)(this + 0xe8) = fVar49;
      if (uVar29 != 0) {
        uVar26 = 0;
        uVar16 = uVar25;
        do {
                    /* catch() { ... } // from try @ 00d92804 with catch @ 00d932cc */
          if ((long)pvStack_a8 - (long)local_b0 != 0) {
            uVar15 = 0;
            do {
              if (*(int *)((long)local_b0 + uVar15 * 4) ==
                  *(int *)(*(long *)(puVar33 + 2) + (uVar16 & 0xffffffff) * 0x18))
              goto LAB_00d93304;
              uVar15 = uVar15 + 1;
            } while (uVar15 < (ulong)((long)pvStack_a8 - (long)local_b0 >> 2));
          }
          uVar15 = 0xffffffff;
LAB_00d93304:
          iVar11 = (int)uVar15 * 7;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 1) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d926a0 with catch @ 00d9332c */
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar43 = (float)dVar44;
          *(float *)(this + 0x94) = fVar43;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 2) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d92ba0 with catch @ 00d9338c */
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar45 = (float)dVar44;
          *(float *)(this + 0x98) = fVar45;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 3) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                    /* catch() { ... } // from try @ 00d92a3c with catch @ 00d9340c */
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar46 = (float)dVar44;
          *(float *)(this + 0x9c) = fVar46;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 4) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
                    /* catch() { ... } // from try @ 00d928d8 with catch @ 00d9346c */
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar47 = (float)dVar44;
          *(float *)(this + 0xa0) = fVar47;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 5) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                    /* catch() { ... } // from try @ 00d92774 with catch @ 00d934cc */
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar50 = (float)dVar44;
          *(float *)(this + 0xa4) = fVar50;
          pdVar21 = (double *)(*(long *)(puVar42 + 2) + (ulong)(iVar11 + 6) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
          if ((uVar5 >> 9 & 1) == 0) {
            if ((uVar5 >> 5 & 1) == 0) {
              if ((uVar5 >> 6 & 1) == 0) {
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                    /* catch() { ... } // from try @ 00d92610 with catch @ 00d9352c */
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
              }
            }
            else {
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          fVar51 = fVar47 * fVar43 - fVar45 * fVar46;
          *(float *)(this + 0x94) = fVar47 / fVar51;
          *(float *)(this + 0x98) = -fVar45 / fVar51;
          *(float *)(this + 0x9c) = -fVar46 / fVar51;
          *(float *)(this + 0xa0) = fVar43 / fVar51;
                    /* catch() { ... } // from try @ 00d923bc with catch @ 00d9358c */
          fVar52 = (fVar46 * (float)dVar44 - fVar47 * fVar50) / fVar51;
                    /* catch() { ... } // from try @ 00d92264 with catch @ 00d93590 */
          fVar50 = -(fVar43 * (float)dVar44 - fVar45 * fVar50) / fVar51;
                    /* catch() { ... } // from try @ 00d9210c with catch @ 00d93594 */
                    /* catch() { ... } // from try @ 00d91fb4 with catch @ 00d93598 */
                    /* catch() { ... } // from try @ 00d91e5c with catch @ 00d9359c */
          *(float *)(this + 0xa4) = fVar52;
          *(float *)(this + 0xa8) = fVar50;
                    /* catch() { ... } // from try @ 00d923c4 with catch @ 00d935a0
                       catch() { ... } // from try @ 00d92b58 with catch @ 00d935a0
                       catch() { ... } // from try @ 00d92f40 with catch @ 00d935a0 */
          *(float *)(this + 0xe4) =
               fVar48 * (fVar47 / fVar51) + fVar49 * (-fVar46 / fVar51) + fVar52;
          *(float *)(this + 0xe8) =
               fVar48 * (-fVar45 / fVar51) + fVar49 * (fVar43 / fVar51) + fVar50;
          *(short *)(lVar19 + lVar20 * 2) = (short)uVar15;
          pdVar21 = (double *)(*(long *)(puVar33 + 2) + (uVar37 + 2 & 0xffffffff) * 0x18);
          uVar5 = *(ushort *)((long)pdVar21 + 0x16);
                    /* catch() { ... } // from try @ 00d9226c with catch @ 00d935c0
                       catch() { ... } // from try @ 00d929f4 with catch @ 00d935c0
                       catch() { ... } // from try @ 00d92e7c with catch @ 00d935c0 */
          if ((uVar5 >> 9 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d92114 with catch @ 00d935c4
                       catch() { ... } // from try @ 00d92890 with catch @ 00d935c4
                       catch() { ... } // from try @ 00d92db8 with catch @ 00d935c4 */
            if ((uVar5 >> 5 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d91fbc with catch @ 00d935c8
                       catch() { ... } // from try @ 00d9272c with catch @ 00d935c8
                       catch() { ... } // from try @ 00d92d60 with catch @ 00d935c8 */
              if ((uVar5 >> 6 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d91e64 with catch @ 00d935cc
                       catch() { ... } // from try @ 00d925c8 with catch @ 00d935cc
                       catch() { ... } // from try @ 00d92d08 with catch @ 00d935cc */
                    /* catch() { ... } // from try @ 00d92354 with catch @ 00d935d0 */
                if ((uVar5 >> 7 & 1) == 0) {
                  dVar44 = (double)(ulong)*pdVar21;
                }
                else {
                    /* catch() { ... } // from try @ 00d920a4 with catch @ 00d935f8 */
                  dVar44 = (double)(long)*pdVar21;
                }
              }
              else {
                dVar44 = (double)NEON_ucvtf((ulong)*(uint *)pdVar21);
                    /* catch() { ... } // from try @ 00d92160 with catch @ 00d935f4 */
              }
            }
            else {
                    /* catch() { ... } // from try @ 00d922b8 with catch @ 00d935e0 */
                    /* catch() { ... } // from try @ 00d921fc with catch @ 00d935e4 */
              dVar44 = (double)(long)*(int *)pdVar21;
            }
          }
          else {
            dVar44 = *pdVar21;
          }
          pfVar4 = (float *)(lVar30 + lVar23 * 4);
          *pfVar4 = (float)dVar44;
          uVar26 = uVar26 + 1;
          lVar23 = lVar23 + 3;
          lVar20 = lVar20 + 1;
          pfVar4[1] = *(float *)(this + 0xe4);
          pfVar4[2] = *(float *)(this + 0xe8);
          uVar16 = uVar37 + 3;
          uVar37 = uVar37 + 2;
        } while (uVar26 != uVar29);
        uVar25 = uVar25 + (ulong)uVar29 * 2;
      }
                    /* catch() { ... } // from try @ 00d91f4c with catch @ 00d9360c */
      uVar22 = uVar22 + 1;
      if (uVar22 == uVar17) break;
      fVar43 = *(float *)(this + 0x7c);
      fVar45 = *(float *)(this + 0x80);
      fVar46 = *(float *)(this + 0x84);
      fVar47 = *(float *)(this + 0x88);
      fVar48 = *(float *)(this + 0x8c);
      fVar49 = *(float *)(this + 0x90);
      uVar37 = uVar25;
    } while( true );
  }
  p_Var2 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
            *)(this + 0x1e0);
  *(WeightData **)(param_2 + 0x78) = this_02;
  pp_Var13 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       (p_Var2,&local_d0,(basic_string *)&local_90);
  p_Var34 = *pp_Var13;
                    /* catch() { ... } // from try @ 00d91eb0 with catch @ 00d93648 */
  if (p_Var34 == (__tree_node_base *)0x0) {
                    /* catch() { ... } // from try @ 00d91df4 with catch @ 00d9364c */
    p_Var34 = operator_new(0x40);
    pvVar10 = local_80;
    uVar37 = uStack_88;
                    /* catch() { ... } // from try @ 00d92394 with catch @ 00d9365c
                       catch() { ... } // from try @ 00d923f0 with catch @ 00d9365c
                       catch() { ... } // from try @ 00d92f14 with catch @ 00d9365c */
                    /* catch() { ... } // from try @ 00d9223c with catch @ 00d93660
                       catch() { ... } // from try @ 00d92298 with catch @ 00d93660
                       catch() { ... } // from try @ 00d92e50 with catch @ 00d93660 */
    *(undefined8 *)(p_Var34 + 0x20) = 0;
    *(undefined8 *)(p_Var34 + 0x28) = 0;
    *(undefined8 *)(p_Var34 + 0x30) = 0;
    if ((local_90 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d920e4 with catch @ 00d93670
                       catch() { ... } // from try @ 00d92140 with catch @ 00d93670
                       catch() { ... } // from try @ 00d92d8c with catch @ 00d93670 */
      *(void **)(p_Var34 + 0x30) = local_80;
      *(ulong *)(p_Var34 + 0x28) = uStack_88;
      *(ulong *)(p_Var34 + 0x20) = local_90;
                    /* catch() { ... } // from try @ 00d91f8c with catch @ 00d93680
                       catch() { ... } // from try @ 00d91fe8 with catch @ 00d93680
                       catch() { ... } // from try @ 00d92d34 with catch @ 00d93680 */
    }
    else {
      if (0xffffffffffffffef < uStack_88) goto LAB_00d93880;
                    /* catch() { ... } // from try @ 00d91e34 with catch @ 00d93690
                       catch() { ... } // from try @ 00d91e90 with catch @ 00d93690
                       catch() { ... } // from try @ 00d92cdc with catch @ 00d93690 */
      if (uStack_88 < 0x17) {
                    /* catch() { ... } // from try @ 00d92440 with catch @ 00d936a0 */
        p_Var14 = p_Var34 + 0x21;
                    /* catch() { ... } // from try @ 00d92460 with catch @ 00d936a4 */
        p_Var34[0x20] = SUB41((int)uStack_88 << 1,0);
        if (uStack_88 != 0) goto LAB_00d936d0;
      }
      else {
        uVar22 = uStack_88 + 0x10 & 0xfffffffffffffff0;
        p_Var14 = operator_new(uVar22);
        *(ulong *)(p_Var34 + 0x28) = uVar37;
        *(__tree_node_base **)(p_Var34 + 0x30) = p_Var14;
        *(ulong *)(p_Var34 + 0x20) = uVar22 | 1;
LAB_00d936d0:
        memcpy(p_Var14,pvVar10,uVar37);
      }
      p_Var14[uVar37] = (__tree_node_base)0x0;
    }
    *(undefined8 *)(p_Var34 + 0x38) = 0;
    *(undefined8 *)p_Var34 = 0;
    *(undefined8 *)(p_Var34 + 8) = 0;
    *(__tree_end_node **)(p_Var34 + 0x10) = local_d0;
    *pp_Var13 = p_Var34;
    p_Var14 = p_Var34;
    if (**(long **)p_Var2 != 0) {
      *(long *)p_Var2 = **(long **)p_Var2;
      p_Var14 = *pp_Var13;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x1e8),p_Var14);
    *(long *)(this + 0x1f0) = *(long *)(this + 0x1f0) + 1;
  }
  p_Var2 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
            *)(this + 0x1f8);
  *(uint **)(p_Var34 + 0x38) = puVar28;
  pp_Var13 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       (p_Var2,&local_d0,(basic_string *)&local_90);
  p_Var34 = *pp_Var13;
  if (p_Var34 == (__tree_node_base *)0x0) {
    p_Var34 = operator_new(0x40);
    pvVar10 = local_80;
    uVar37 = uStack_88;
    *(undefined8 *)(p_Var34 + 0x20) = 0;
    *(undefined8 *)(p_Var34 + 0x28) = 0;
    *(undefined8 *)(p_Var34 + 0x30) = 0;
    if ((local_90 & 1) == 0) {
      *(void **)(p_Var34 + 0x30) = local_80;
      *(ulong *)(p_Var34 + 0x28) = uStack_88;
      *(ulong *)(p_Var34 + 0x20) = local_90;
    }
    else {
      if (0xffffffffffffffef < uStack_88) {
LAB_00d93880:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uStack_88 < 0x17) {
        p_Var14 = p_Var34 + 0x21;
        p_Var34[0x20] = SUB41((int)uStack_88 << 1,0);
        if (uStack_88 != 0) goto LAB_00d937cc;
      }
      else {
        uVar22 = uStack_88 + 0x10 & 0xfffffffffffffff0;
        p_Var14 = operator_new(uVar22);
        *(ulong *)(p_Var34 + 0x28) = uVar37;
        *(__tree_node_base **)(p_Var34 + 0x30) = p_Var14;
        *(ulong *)(p_Var34 + 0x20) = uVar22 | 1;
LAB_00d937cc:
                    /* catch() { ... } // from try @ 00d9380c with catch @ 00d937d4 */
        memcpy(p_Var14,pvVar10,uVar37);
      }
      p_Var14[uVar37] = (__tree_node_base)0x0;
    }
    *(undefined8 *)(p_Var34 + 0x38) = 0;
    *(undefined8 *)p_Var34 = 0;
    *(undefined8 *)(p_Var34 + 8) = 0;
    *(__tree_end_node **)(p_Var34 + 0x10) = local_d0;
    *pp_Var13 = p_Var34;
    p_Var14 = p_Var34;
    if (**(long **)p_Var2 != 0) {
      *(long *)p_Var2 = **(long **)p_Var2;
                    /* try { // try from 00d93804 to 00e9380b has its CatchHandler @ 00d93844 */
      p_Var14 = *pp_Var13;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 0x200),p_Var14);
    *(long *)(this + 0x208) = *(long *)(this + 0x208) + 1;
  }
  *(uint **)(p_Var34 + 0x38) = puVar42;
  if (local_b0 != (void *)0x0) {
    pvStack_a8 = local_b0;
    operator_delete(local_b0);
  }
LAB_00d93838:
  if ((local_90 & 1) != 0) {
                    /* catch() { ... } // from try @ 00d93804 with catch @ 00d93844 */
    operator_delete(local_80);
  }
  if (*(long *)(lVar7 + 0x28) == local_70) {
                    /* catch() { ... } // from try @ 00d93898 with catch @ 00d93860 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

