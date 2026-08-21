
/* dragonBones::JSONDataParser::_parseSlotFFDFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4
dragonBones::JSONDataParser::_parseSlotFFDFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  vector<float,std::__ndk1::allocator<float>> *this;
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
  *p_Var1;
  float *pfVar2;
  undefined2 *puVar3;
  int *__s2;
  long lVar4;
  long lVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  long lVar9;
  undefined *__s1;
  void *pvVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  __tree_node_base **pp_Var15;
  __tree_node_base *p_Var16;
  GenericValue *pGVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  double *pdVar23;
  long lVar24;
  int *piVar25;
  int *piVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  int *piVar32;
  uint uVar33;
  __tree_node_base *p_Var34;
  char *pcVar35;
  ulong uVar36;
  int *piVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  __tree_end_node *local_b0;
  ulong uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  pGVar17 = (GenericValue *)(ulong)param_2;
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  lVar4 = *(long *)(param_1 + 0x150);
  lVar5 = *(long *)(param_1 + 0x158);
  uVar11 = (**(code **)(*(long *)param_1 + 0x98))();
                    /* try { // try from 00d98404 to 00e98413 has its CatchHandler @ 00d98f28 */
  uVar13 = _getNumber(pGVar17,DataParser::OFFSET,0);
  uVar13 = uVar13 & 0xffffffff;
  sVar8 = *(short *)(*(long *)(param_1 + 0x108) +
                    (ulong)*(uint *)(*(long *)(param_1 + 0x50) + 0x6c) * 2);
  FUN_007c1fb0(local_e8,*(long *)(*(long *)(param_1 + 0x50) + 0x60) + 0x10,&DAT_0145cbbc);
  lVar20 = *(long *)(param_1 + 0x40);
                    /* try { // try from 00d98450 to 00e98493 has its CatchHandler @ 00d98f94 */
  uVar30 = (ulong)(*(byte *)(lVar20 + 0x20) >> 1);
  pcVar22 = (char *)(lVar20 + 0x21);
  if ((*(byte *)(lVar20 + 0x20) & 1) != 0) {
    uVar30 = *(ulong *)(lVar20 + 0x28);
    pcVar22 = *(char **)(lVar20 + 0x30);
  }
  puVar14 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(local_e8,pcVar22,uVar30);
  uStack_c8 = puVar14[1];
  local_d0 = *puVar14;
  local_c0 = (void *)puVar14[2];
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0;
  puVar14 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_d0,"_",1);
  uStack_a8 = puVar14[1];
  local_b0 = (__tree_end_node *)*puVar14;
  local_a0 = (void *)puVar14[2];
                    /* try { // try from 00d984a0 to 00e984a7 has its CatchHandler @ 00d98f28 */
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
                    /* try { // try from 00d984a8 to 00e984d3 has its CatchHandler @ 00d977a0 */
  lVar20 = *(long *)(param_1 + 0x50);
  uVar30 = (ulong)(*(byte *)(lVar20 + 0x18) >> 1);
  pcVar22 = (char *)(lVar20 + 0x19);
  if ((*(byte *)(lVar20 + 0x18) & 1) != 0) {
    uVar30 = *(ulong *)(lVar20 + 0x20);
    pcVar22 = *(char **)(lVar20 + 0x28);
  }
  puVar14 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_b0,pcVar22,uVar30);
  uStack_88 = puVar14[1];
  local_90 = *puVar14;
                    /* try { // try from 00d984d4 to 00e984df has its CatchHandler @ 00d98f2c */
  local_80 = (void *)puVar14[2];
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
                    /* try { // try from 00d98588 to 00e98593 has its CatchHandler @ 00d98f20 */
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
                    /* try { // try from 00d98598 to 00e9859f has its CatchHandler @ 00d98f18 */
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
                    /* try { // try from 00d9850c to 00e98583 has its CatchHandler @ 00d98f94 */
  this = (vector<float,std::__ndk1::allocator<float>> *)(param_1 + 0x150);
  iVar12 = (int)sVar8;
  uVar30 = (ulong)(uint)(iVar12 << 1);
  lVar20 = *(long *)(*(long *)(param_1 + 0x50) + 0x78);
  if (lVar20 == 0) {
                    /* try { // try from 00d985a8 to 00e985af has its CatchHandler @ 00d98f14 */
    uVar18 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 2;
    uVar36 = uVar18 + uVar30;
    if (uVar18 < uVar36) {
                    /* try { // try from 00d985c4 to 00e985cb has its CatchHandler @ 00d98f3c */
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this,uVar30);
      uVar33 = 0;
    }
    else {
      uVar33 = 0;
                    /* try { // try from 00d985d4 to 00e985eb has its CatchHandler @ 00d98f60 */
      if (uVar18 != uVar36) {
        *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar36 * 4;
      }
    }
    goto LAB_00d988fc;
  }
  p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
            *)(param_1 + 0x1e0);
  pp_Var15 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             ::
             __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                       (p_Var1,&local_b0,(basic_string *)&local_90);
  p_Var34 = *pp_Var15;
  if (p_Var34 == (__tree_node_base *)0x0) {
    p_Var34 = operator_new(0x40);
    pvVar10 = local_80;
    uVar36 = uStack_88;
    *(undefined8 *)(p_Var34 + 0x20) = 0;
    *(undefined8 *)(p_Var34 + 0x28) = 0;
    *(undefined8 *)(p_Var34 + 0x30) = 0;
    if ((local_90 & 1) == 0) {
      *(void **)(p_Var34 + 0x30) = local_80;
      *(ulong *)(p_Var34 + 0x28) = uStack_88;
      *(ulong *)(p_Var34 + 0x20) = local_90;
    }
    else {
                    /* try { // try from 00d985ec to 00e9860f has its CatchHandler @ 00d98f64 */
      if (0xffffffffffffffef < uStack_88) {
LAB_00d99344:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (uStack_88 < 0x17) {
        p_Var16 = p_Var34 + 0x21;
        p_Var34[0x20] = SUB41((int)uStack_88 << 1,0);
        if (uStack_88 != 0) goto LAB_00d9863c;
      }
      else {
        uVar18 = uStack_88 + 0x10 & 0xfffffffffffffff0;
        p_Var16 = operator_new(uVar18);
        *(ulong *)(p_Var34 + 0x28) = uVar36;
        *(__tree_node_base **)(p_Var34 + 0x30) = p_Var16;
        *(ulong *)(p_Var34 + 0x20) = uVar18 | 1;
LAB_00d9863c:
        memcpy(p_Var16,pvVar10,uVar36);
      }
      p_Var16[uVar36] = (__tree_node_base)0x0;
    }
    *(undefined8 *)(p_Var34 + 0x38) = 0;
    *(undefined8 *)p_Var34 = 0;
    *(undefined8 *)(p_Var34 + 8) = 0;
    *(__tree_end_node **)(p_Var34 + 0x10) = local_b0;
    *pp_Var15 = p_Var34;
    p_Var16 = p_Var34;
    if (**(long **)p_Var1 != 0) {
      *(long *)p_Var1 = **(long **)p_Var1;
      p_Var16 = *pp_Var15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(param_1 + 0x1e8),p_Var16);
    *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
  }
  lVar21 = *(long *)(p_Var34 + 0x38);
  pdVar23 = *(double **)(lVar21 + 8);
  uVar7 = *(ushort *)((long)pdVar23 + 0x16);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)(ulong)*pdVar23;
        }
        else {
          dVar41 = (double)(long)*pdVar23;
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
      }
    }
    else {
      dVar41 = (double)(long)*(int *)pdVar23;
    }
  }
  else {
    dVar41 = *pdVar23;
  }
  *(float *)(param_1 + 0x7c) = (float)dVar41;
  lVar24 = *(long *)(lVar21 + 8);
  uVar7 = *(ushort *)(lVar24 + 0x2e);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)*(ulong *)(lVar24 + 0x18);
        }
        else {
          dVar41 = (double)(long)*(ulong *)(lVar24 + 0x18);
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x18));
      }
    }
    else {
      dVar41 = (double)(long)*(int *)(lVar24 + 0x18);
    }
  }
  else {
    dVar41 = *(double *)(lVar24 + 0x18);
  }
  *(float *)(param_1 + 0x80) = (float)dVar41;
  lVar24 = *(long *)(lVar21 + 8);
  uVar7 = *(ushort *)(lVar24 + 0x46);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)*(ulong *)(lVar24 + 0x30);
        }
        else {
          dVar41 = (double)(long)*(ulong *)(lVar24 + 0x30);
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x30));
      }
    }
    else {
      dVar41 = (double)(long)*(int *)(lVar24 + 0x30);
    }
  }
  else {
    dVar41 = *(double *)(lVar24 + 0x30);
  }
  *(float *)(param_1 + 0x84) = (float)dVar41;
  lVar24 = *(long *)(lVar21 + 8);
  uVar7 = *(ushort *)(lVar24 + 0x5e);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)*(ulong *)(lVar24 + 0x48);
        }
        else {
          dVar41 = (double)(long)*(ulong *)(lVar24 + 0x48);
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x48));
      }
    }
    else {
      dVar41 = (double)(long)*(int *)(lVar24 + 0x48);
    }
  }
  else {
    dVar41 = *(double *)(lVar24 + 0x48);
  }
  *(float *)(param_1 + 0x88) = (float)dVar41;
  lVar24 = *(long *)(lVar21 + 8);
  uVar7 = *(ushort *)(lVar24 + 0x76);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)*(ulong *)(lVar24 + 0x60);
        }
        else {
          dVar41 = (double)(long)*(ulong *)(lVar24 + 0x60);
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x60));
      }
    }
    else {
      dVar41 = (double)(long)*(int *)(lVar24 + 0x60);
    }
  }
  else {
    dVar41 = *(double *)(lVar24 + 0x60);
  }
  *(float *)(param_1 + 0x8c) = (float)dVar41;
  lVar21 = *(long *)(lVar21 + 8);
  uVar7 = *(ushort *)(lVar21 + 0x8e);
  if ((uVar7 >> 9 & 1) == 0) {
    if ((uVar7 >> 5 & 1) == 0) {
      if ((uVar7 >> 6 & 1) == 0) {
        if ((uVar7 >> 7 & 1) == 0) {
          dVar41 = (double)*(ulong *)(lVar21 + 0x78);
        }
        else {
          dVar41 = (double)(long)*(ulong *)(lVar21 + 0x78);
        }
      }
      else {
        dVar41 = (double)NEON_ucvtf((ulong)*(uint *)(lVar21 + 0x78));
      }
    }
    else {
      dVar41 = (double)(long)*(int *)(lVar21 + 0x78);
    }
  }
  else {
    dVar41 = *(double *)(lVar21 + 0x78);
  }
  *(float *)(param_1 + 0x90) = (float)dVar41;
  uVar28 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 2;
  uVar18 = (ulong)(uint)(*(int *)(lVar20 + 0x10) << 1);
  uVar36 = uVar28 + uVar18;
  if (uVar28 < uVar36) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this,uVar18);
  }
  else {
                    /* try { // try from 00d988d4 to 00e98a67 has its CatchHandler @ 00d98f40 */
    if (uVar28 != uVar36) {
      *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar36 * 4;
    }
  }
  uVar33 = *(int *)(lVar20 + 0x14) +
           (int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >> 3) + 2;
LAB_00d988fc:
  lVar21 = lVar5 - lVar4 >> 2;
  if (iVar12 != 0) {
    uVar31 = 0;
    uVar36 = 0;
    p_Var1 = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
              *)(param_1 + 0x1f8);
    do {
      __s1 = DataParser::VERTICES;
      pcVar35 = DataParser::VERTICES + -1;
      pcVar22 = pcVar35;
      do {
        pcVar22 = pcVar22 + 1;
      } while (*pcVar22 != '\0');
      piVar32 = *(int **)(pGVar17 + 8);
      uVar19 = *(uint *)pGVar17;
      uVar18 = (ulong)uVar19;
      piVar25 = piVar32 + uVar18 * 0xc;
      piVar26 = piVar32;
      if (uVar19 != 0) {
        uVar28 = (long)pcVar22 - (long)DataParser::VERTICES;
        lVar24 = uVar18 * 0x30;
        piVar37 = piVar32;
        do {
          iVar12 = *piVar37;
          if ((*(ushort *)((long)piVar37 + 0x16) & 0x1000) != 0) {
            iVar12 = 0x15 - *(char *)((long)piVar37 + 0x15);
          }
          if (iVar12 == (int)uVar28) {
            __s2 = *(int **)(piVar37 + 2);
            if ((*(ushort *)((long)piVar37 + 0x16) & 0x1000) != 0) {
              __s2 = piVar37;
            }
            piVar26 = piVar37;
            if ((__s2 == (int *)__s1) ||
               (iVar12 = memcmp(__s1,__s2,uVar28 & 0xffffffff), iVar12 == 0)) break;
          }
          lVar24 = lVar24 + -0x30;
          piVar37 = piVar37 + 0xc;
          piVar26 = piVar25;
        } while (lVar24 != 0);
      }
      if (piVar25 == piVar26) {
        fVar39 = 0.0;
        fVar38 = 0.0;
      }
      else {
        fVar39 = 0.0;
        fVar38 = 0.0;
        pcVar22 = pcVar35;
        if (uVar13 <= uVar36) {
          do {
            pcVar22 = pcVar22 + 1;
          } while (*pcVar22 != '\0');
          if (uVar19 == 0) {
LAB_00d98ac0:
            if (piVar32 == piVar25) goto LAB_00d98aec;
                    /* try { // try from 00d98acc to 00e98afb has its CatchHandler @ 00d98f94 */
            uVar19 = piVar32[6];
          }
          else {
            lVar24 = uVar18 * 0x30;
            do {
                    /* try { // try from 00d98a84 to 00e98ab7 has its CatchHandler @ 00d98f24 */
              iVar12 = *piVar32;
              if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                iVar12 = 0x15 - *(char *)((long)piVar32 + 0x15);
              }
              if (iVar12 == (int)((long)pcVar22 - (long)__s1)) {
                piVar26 = *(int **)(piVar32 + 2);
                if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                  piVar26 = piVar32;
                }
                if ((piVar26 == (int *)__s1) ||
                   (iVar12 = memcmp(__s1,piVar26,(long)pcVar22 - (long)__s1 & 0xffffffff),
                   iVar12 == 0)) goto LAB_00d98ac0;
              }
              lVar24 = lVar24 + -0x30;
              piVar32 = piVar32 + 0xc;
            } while (lVar24 != 0);
LAB_00d98aec:
            uVar19 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          fVar38 = 0.0;
                    /* try { // try from 00d98b0c to 00e98b17 has its CatchHandler @ 00d98f24 */
          pcVar22 = pcVar35;
          if (uVar36 - uVar13 < (ulong)uVar19) {
            do {
              pcVar22 = pcVar22 + 1;
            } while (*pcVar22 != '\0');
            uVar19 = *(uint *)pGVar17;
            piVar26 = *(int **)(pGVar17 + 8);
                    /* try { // try from 00d98b2c to 00e98c4b has its CatchHandler @ 00d98f94 */
            piVar32 = piVar26;
            if (uVar19 == 0) {
LAB_00d98bac:
              if (piVar32 == piVar26 + (ulong)uVar19 * 0xc) goto LAB_00d98bc4;
              lVar24 = *(long *)(piVar32 + 8);
            }
            else {
              lVar24 = (ulong)uVar19 * 0x30;
              do {
                iVar12 = *piVar32;
                if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                  iVar12 = 0x15 - *(char *)((long)piVar32 + 0x15);
                }
                if (iVar12 == (int)((long)pcVar22 - (long)__s1)) {
                  piVar25 = *(int **)(piVar32 + 2);
                  if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                    piVar25 = piVar32;
                  }
                  if ((piVar25 == (int *)__s1) ||
                     (iVar12 = memcmp(__s1,piVar25,(long)pcVar22 - (long)__s1 & 0xffffffff),
                     iVar12 == 0)) goto LAB_00d98bac;
                }
                lVar24 = lVar24 + -0x30;
                piVar32 = piVar32 + 0xc;
              } while (lVar24 != 0);
LAB_00d98bc4:
              lVar24 = 0;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
              DAT_01785a60 = 0;
            }
            pdVar23 = (double *)(lVar24 + (uVar36 - uVar13 & 0xffffffff) * 0x18);
            uVar7 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar7 >> 9 & 1) == 0) {
              if ((uVar7 >> 5 & 1) == 0) {
                if ((uVar7 >> 6 & 1) == 0) {
                  if ((uVar7 >> 7 & 1) == 0) {
                    dVar41 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar41 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar41 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar41 = *pdVar23;
            }
            fVar38 = (float)dVar41;
          }
        }
        uVar18 = (uVar36 | 1) - uVar13;
        pcVar22 = pcVar35;
                    /* try { // try from 00d98c4c to 00e98c8f has its CatchHandler @ 00d977a0 */
        if (uVar13 <= (uVar36 | 1)) {
          do {
            pcVar22 = pcVar22 + 1;
          } while (*pcVar22 != '\0');
          uVar19 = *(uint *)pGVar17;
          piVar26 = *(int **)(pGVar17 + 8);
          piVar32 = piVar26;
          if (uVar19 == 0) {
LAB_00d98cec:
                    /* try { // try from 00d98cec to 00e98cf3 has its CatchHandler @ 00d98ed4 */
                    /* try { // try from 00d98cf4 to 00e98cff has its CatchHandler @ 00d98efc */
            if (piVar32 == piVar26 + (ulong)uVar19 * 0xc) goto LAB_00d98d04;
            uVar19 = piVar32[6];
                    /* try { // try from 00d98d00 to 00e98d07 has its CatchHandler @ 00d98ed0 */
          }
          else {
            lVar24 = (ulong)uVar19 * 0x30;
            do {
                    /* try { // try from 00d98c98 to 00e98c9f has its CatchHandler @ 00d98ef0 */
                    /* try { // try from 00d98ca0 to 00e98ca7 has its CatchHandler @ 00d98efc */
                    /* try { // try from 00d98ca8 to 00e98caf has its CatchHandler @ 00d98eec */
              iVar12 = *piVar32;
                    /* try { // try from 00d98cb0 to 00e98cb3 has its CatchHandler @ 00d98efc */
              if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                iVar12 = 0x15 - *(char *)((long)piVar32 + 0x15);
              }
                    /* try { // try from 00d98cb4 to 00e98cbb has its CatchHandler @ 00d98ee8 */
              if (iVar12 == (int)((long)pcVar22 - (long)__s1)) {
                    /* try { // try from 00d98cbc to 00e98cbf has its CatchHandler @ 00d98efc */
                    /* try { // try from 00d98cc0 to 00e98cc7 has its CatchHandler @ 00d98ee4 */
                piVar25 = *(int **)(piVar32 + 2);
                if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                  piVar25 = piVar32;
                }
                    /* try { // try from 00d98cc8 to 00e98ccf has its CatchHandler @ 00d98ee0 */
                    /* try { // try from 00d98cd0 to 00e98cd3 has its CatchHandler @ 00d98edc */
                    /* try { // try from 00d98cd4 to 00e98cdb has its CatchHandler @ 00d98ed8 */
                    /* try { // try from 00d98cdc to 00e98cdf has its CatchHandler @ 00d98efc */
                if ((piVar25 == (int *)__s1) ||
                   (iVar12 = memcmp(__s1,piVar25,(long)pcVar22 - (long)__s1 & 0xffffffff),
                   iVar12 == 0)) goto LAB_00d98cec;
              }
              lVar24 = lVar24 + -0x30;
                    /* try { // try from 00d98c90 to 00e98c97 has its CatchHandler @ 00d98ef8 */
              piVar32 = piVar32 + 0xc;
            } while (lVar24 != 0);
LAB_00d98d04:
                    /* try { // try from 00d98d08 to 00e98d0f has its CatchHandler @ 00d98ecc */
            uVar19 = 0;
                    /* try { // try from 00d98d10 to 00e98d17 has its CatchHandler @ 00d98ec8 */
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
                    /* try { // try from 00d98d18 to 00e98d1b has its CatchHandler @ 00d98efc */
                    /* try { // try from 00d98d1c to 00e98d23 has its CatchHandler @ 00d98ec4 */
                    /* try { // try from 00d98d24 to 00e98d27 has its CatchHandler @ 00d98efc */
          if (uVar18 < uVar19) {
            do {
                    /* try { // try from 00d98d28 to 00e98d2f has its CatchHandler @ 00d98ec0 */
              pcVar35 = pcVar35 + 1;
            } while (*pcVar35 != '\0');
                    /* try { // try from 00d98d30 to 00e98d33 has its CatchHandler @ 00d98ef4 */
                    /* try { // try from 00d98d34 to 00e98d43 has its CatchHandler @ 00d98efc */
            uVar19 = *(uint *)pGVar17;
            piVar26 = *(int **)(pGVar17 + 8);
            piVar32 = piVar26;
            if (uVar19 == 0) {
LAB_00d98db4:
                    /* try { // try from 00d98db4 to 00e98dbb has its CatchHandler @ 00d98efc */
                    /* try { // try from 00d98dbc to 00e98dc3 has its CatchHandler @ 00d98e90 */
              if (piVar32 == piVar26 + (ulong)uVar19 * 0xc) goto LAB_00d98dcc;
                    /* try { // try from 00d98dc4 to 00e98dcb has its CatchHandler @ 00d98e8c */
              lVar24 = *(long *)(piVar32 + 8);
            }
            else {
                    /* try { // try from 00d98d44 to 00e98d4b has its CatchHandler @ 00d98ebc */
                    /* try { // try from 00d98d4c to 00e98d53 has its CatchHandler @ 00d98eb8 */
              lVar24 = (ulong)uVar19 * 0x30;
                    /* try { // try from 00d98d54 to 00e98d5b has its CatchHandler @ 00d98eb4 */
              do {
                    /* try { // try from 00d98d64 to 00e98d6b has its CatchHandler @ 00d98eac */
                    /* try { // try from 00d98d6c to 00e98d73 has its CatchHandler @ 00d98ea8 */
                    /* try { // try from 00d98d74 to 00e98d7b has its CatchHandler @ 00d98ea4 */
                iVar12 = *piVar32;
                    /* try { // try from 00d98d7c to 00e98d83 has its CatchHandler @ 00d98ea0 */
                if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                  iVar12 = 0x15 - *(char *)((long)piVar32 + 0x15);
                }
                    /* try { // try from 00d98d84 to 00e98d8b has its CatchHandler @ 00d98efc */
                if (iVar12 == (int)((long)pcVar35 - (long)__s1)) {
                    /* try { // try from 00d98d8c to 00e98d93 has its CatchHandler @ 00d98e9c */
                  piVar25 = *(int **)(piVar32 + 2);
                  if ((*(ushort *)((long)piVar32 + 0x16) & 0x1000) != 0) {
                    piVar25 = piVar32;
                  }
                    /* try { // try from 00d98d94 to 00e98d9b has its CatchHandler @ 00d98e98 */
                    /* try { // try from 00d98d9c to 00e98da3 has its CatchHandler @ 00d98ef4 */
                    /* try { // try from 00d98da4 to 00e98dab has its CatchHandler @ 00d98efc */
                  if ((piVar25 == (int *)__s1) ||
                     (iVar12 = memcmp(__s1,piVar25,(long)pcVar35 - (long)__s1 & 0xffffffff),
                     iVar12 == 0)) goto LAB_00d98db4;
                }
                lVar24 = lVar24 + -0x30;
                    /* try { // try from 00d98d5c to 00e98d63 has its CatchHandler @ 00d98eb0 */
                piVar32 = piVar32 + 0xc;
              } while (lVar24 != 0);
LAB_00d98dcc:
                    /* try { // try from 00d98dcc to 00e98dd3 has its CatchHandler @ 00d98e88 */
                    /* try { // try from 00d98dd4 to 00e98ddb has its CatchHandler @ 00d98e84 */
              lVar24 = 0;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01785a58 = 0;
                    /* try { // try from 00d98ddc to 00e98de3 has its CatchHandler @ 00d98e80 */
              DAT_01785a60 = 0;
            }
                    /* try { // try from 00d98de4 to 00e98deb has its CatchHandler @ 00d98e7c */
                    /* try { // try from 00d98dec to 00e98df3 has its CatchHandler @ 00d98e78 */
            pdVar23 = (double *)(lVar24 + (uVar18 & 0xffffffff) * 0x18);
                    /* try { // try from 00d98df4 to 00e98dfb has its CatchHandler @ 00d98e74 */
            uVar7 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar7 >> 9 & 1) == 0) {
                    /* try { // try from 00d98dfc to 00e98dff has its CatchHandler @ 00d98ef4 */
              if ((uVar7 >> 5 & 1) == 0) {
                    /* try { // try from 00d98e00 to 00e98e03 has its CatchHandler @ 00d98efc */
                if ((uVar7 >> 6 & 1) == 0) {
                    /* try { // try from 00d98e04 to 00e98e0b has its CatchHandler @ 00d98e70 */
                  if ((uVar7 >> 7 & 1) == 0) {
                    /* try { // try from 00d98e0c to 00e98e0f has its CatchHandler @ 00d98efc */
                    dVar41 = (double)(ulong)*pdVar23;
                    /* try { // try from 00d98e10 to 00e98e17 has its CatchHandler @ 00d98e6c */
                  }
                  else {
                    /* try { // try from 00d98e38 to 00e98e3f has its CatchHandler @ 00d98e60 */
                    dVar41 = (double)(long)*pdVar23;
                  }
                }
                else {
                    /* try { // try from 00d98e30 to 00e98e37 has its CatchHandler @ 00d98e64 */
                  dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                    /* try { // try from 00d98e20 to 00e98e23 has its CatchHandler @ 00d98ef4 */
                    /* try { // try from 00d98e24 to 00e98e2f has its CatchHandler @ 00d98efc */
                dVar41 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar41 = *pdVar23;
                    /* try { // try from 00d98e18 to 00e98e1f has its CatchHandler @ 00d98e68 */
            }
            fVar39 = (float)dVar41;
                    /* try { // try from 00d98e40 to 00e98e43 has its CatchHandler @ 00d98efc */
          }
        }
      }
                    /* try { // try from 00d98e4c to 00e98e53 has its CatchHandler @ 00d98e58 */
      if (lVar20 == 0) {
        pfVar2 = (float *)(*(long *)this + (uVar36 + lVar21) * 4);
        *pfVar2 = fVar38;
        pfVar2[1] = fVar39;
      }
      else {
                    /* try { // try from 00d98e54 to 00e98fcb has its CatchHandler @ 00d977a0 */
                    /* catch() { ... } // from try @ 00d98e4c with catch @ 00d98e58 */
        pp_Var15 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
                   ::
                   __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             (p_Var1,&local_b0,(basic_string *)&local_90);
                    /* catch() { ... } // from try @ 00d98e44 with catch @ 00d98e5c */
        p_Var34 = *pp_Var15;
                    /* catch() { ... } // from try @ 00d98e38 with catch @ 00d98e60 */
        if (p_Var34 == (__tree_node_base *)0x0) {
                    /* catch() { ... } // from try @ 00d98e30 with catch @ 00d98e64 */
                    /* catch() { ... } // from try @ 00d98e18 with catch @ 00d98e68 */
                    /* catch() { ... } // from try @ 00d98e10 with catch @ 00d98e6c */
          p_Var34 = operator_new(0x40);
          pvVar10 = local_80;
          uVar18 = uStack_88;
                    /* catch() { ... } // from try @ 00d98e04 with catch @ 00d98e70 */
                    /* catch() { ... } // from try @ 00d98df4 with catch @ 00d98e74 */
                    /* catch() { ... } // from try @ 00d98dec with catch @ 00d98e78 */
                    /* catch() { ... } // from try @ 00d98de4 with catch @ 00d98e7c */
          *(undefined8 *)(p_Var34 + 0x20) = 0;
                    /* catch() { ... } // from try @ 00d98ddc with catch @ 00d98e80 */
          *(undefined8 *)(p_Var34 + 0x28) = 0;
          *(undefined8 *)(p_Var34 + 0x30) = 0;
                    /* catch() { ... } // from try @ 00d98dd4 with catch @ 00d98e84 */
          if ((local_90 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d98dcc with catch @ 00d98e88 */
                    /* catch() { ... } // from try @ 00d98dc4 with catch @ 00d98e8c */
                    /* catch() { ... } // from try @ 00d98dbc with catch @ 00d98e90 */
            *(void **)(p_Var34 + 0x30) = local_80;
                    /* catch() { ... } // from try @ 00d98dac with catch @ 00d98e94 */
            *(ulong *)(p_Var34 + 0x28) = uStack_88;
            *(ulong *)(p_Var34 + 0x20) = local_90;
                    /* catch() { ... } // from try @ 00d98d94 with catch @ 00d98e98 */
          }
          else {
                    /* catch() { ... } // from try @ 00d98d8c with catch @ 00d98e9c */
                    /* catch() { ... } // from try @ 00d98d7c with catch @ 00d98ea0 */
                    /* catch() { ... } // from try @ 00d98d74 with catch @ 00d98ea4 */
            if (0xffffffffffffffef < uStack_88) goto LAB_00d99344;
                    /* catch() { ... } // from try @ 00d98d6c with catch @ 00d98ea8 */
                    /* catch() { ... } // from try @ 00d98d64 with catch @ 00d98eac */
                    /* catch() { ... } // from try @ 00d98d5c with catch @ 00d98eb0 */
            if (uStack_88 < 0x17) {
                    /* catch() { ... } // from try @ 00d98d54 with catch @ 00d98eb4 */
                    /* catch() { ... } // from try @ 00d98d4c with catch @ 00d98eb8 */
              p_Var16 = p_Var34 + 0x21;
                    /* catch() { ... } // from try @ 00d98d44 with catch @ 00d98ebc */
              p_Var34[0x20] = SUB41((int)uStack_88 << 1,0);
                    /* catch() { ... } // from try @ 00d98d28 with catch @ 00d98ec0 */
              if (uStack_88 != 0) goto LAB_00d98ee8;
            }
            else {
                    /* catch() { ... } // from try @ 00d98d10 with catch @ 00d98ec8 */
                    /* catch() { ... } // from try @ 00d98d08 with catch @ 00d98ecc */
              uVar28 = uStack_88 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 00d98d00 with catch @ 00d98ed0 */
                    /* catch() { ... } // from try @ 00d98cec with catch @ 00d98ed4 */
              p_Var16 = operator_new(uVar28);
                    /* catch() { ... } // from try @ 00d98cd4 with catch @ 00d98ed8 */
                    /* catch() { ... } // from try @ 00d98cd0 with catch @ 00d98edc */
                    /* catch() { ... } // from try @ 00d98cc8 with catch @ 00d98ee0 */
              *(ulong *)(p_Var34 + 0x28) = uVar18;
              *(__tree_node_base **)(p_Var34 + 0x30) = p_Var16;
                    /* catch() { ... } // from try @ 00d98cc0 with catch @ 00d98ee4 */
              *(ulong *)(p_Var34 + 0x20) = uVar28 | 1;
LAB_00d98ee8:
                    /* catch() { ... } // from try @ 00d98cb4 with catch @ 00d98ee8 */
                    /* catch() { ... } // from try @ 00d98ca8 with catch @ 00d98eec */
                    /* catch() { ... } // from try @ 00d98c98 with catch @ 00d98ef0 */
                    /* catch() { ... } // from try @ 00d98ce0 with catch @ 00d98ef4
                       catch() { ... } // from try @ 00d98ce8 with catch @ 00d98ef4
                       catch() { ... } // from try @ 00d98d30 with catch @ 00d98ef4
                       catch() { ... } // from try @ 00d98d9c with catch @ 00d98ef4
                       catch() { ... } // from try @ 00d98dfc with catch @ 00d98ef4
                       catch() { ... } // from try @ 00d98e20 with catch @ 00d98ef4 */
              memcpy(p_Var16,pvVar10,uVar18);
            }
                    /* catch() { ... } // from try @ 00d98c90 with catch @ 00d98ef8 */
            p_Var16[uVar18] = (__tree_node_base)0x0;
                    /* catch() { ... } // from try @ 00d98ca0 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98cb0 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98cbc with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98cdc with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98ce4 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98cf4 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98d18 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98d24 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98d34 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98d84 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98da4 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98db4 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98e00 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98e0c with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98e24 with catch @ 00d98efc
                       catch() { ... } // from try @ 00d98e40 with catch @ 00d98efc */
          }
                    /* catch() { ... } // from try @ 00d98114 with catch @ 00d98f00 */
                    /* catch() { ... } // from try @ 00d98120 with catch @ 00d98f04 */
                    /* catch() { ... } // from try @ 00d980e0 with catch @ 00d98f08 */
          *(undefined8 *)(p_Var34 + 0x38) = 0;
                    /* catch() { ... } // from try @ 00d980f0 with catch @ 00d98f0c */
          *(undefined8 *)p_Var34 = 0;
          *(undefined8 *)(p_Var34 + 8) = 0;
                    /* catch() { ... } // from try @ 00d9813c with catch @ 00d98f10 */
          *(__tree_end_node **)(p_Var34 + 0x10) = local_b0;
                    /* catch() { ... } // from try @ 00d985a8 with catch @ 00d98f14 */
          *pp_Var15 = p_Var34;
                    /* catch() { ... } // from try @ 00d98598 with catch @ 00d98f18 */
                    /* catch() { ... } // from try @ 00d985a0 with catch @ 00d98f1c */
                    /* catch() { ... } // from try @ 00d98588 with catch @ 00d98f20 */
          p_Var16 = p_Var34;
          if (**(long **)p_Var1 != 0) {
                    /* catch() { ... } // from try @ 00d98a84 with catch @ 00d98f24
                       catch() { ... } // from try @ 00d98b0c with catch @ 00d98f24 */
            *(long *)p_Var1 = **(long **)p_Var1;
                    /* catch() { ... } // from try @ 00d98404 with catch @ 00d98f28
                       catch() { ... } // from try @ 00d984a0 with catch @ 00d98f28 */
            p_Var16 = *pp_Var15;
                    /* catch() { ... } // from try @ 00d984d4 with catch @ 00d98f2c */
          }
          std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                    (*(__tree_node_base **)(param_1 + 0x200),p_Var16);
                    /* catch() { ... } // from try @ 00d985c4 with catch @ 00d98f3c */
                    /* catch() { ... } // from try @ 00d988d4 with catch @ 00d98f40 */
          *(long *)(param_1 + 0x208) = *(long *)(param_1 + 0x208) + 1;
        }
        lVar24 = *(long *)(param_1 + 0x108);
        lVar27 = *(long *)(p_Var34 + 0x38);
                    /* catch() { ... } // from try @ 00d985d4 with catch @ 00d98f60 */
                    /* catch() { ... } // from try @ 00d985ec with catch @ 00d98f64 */
        sVar8 = *(short *)(lVar24 + (ulong)uVar33 * 2);
        fVar40 = (float)*(undefined8 *)(param_1 + 0x7c) * fVar38 +
                 (float)*(undefined8 *)(param_1 + 0x84) * fVar39;
        fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) * fVar38 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x84) >> 0x20) * fVar39;
        *(ulong *)(param_1 + 0xe4) = CONCAT44(fVar38,fVar40);
        for (uVar18 = (long)sVar8 & 0xffffffff; uVar33 = uVar33 + 1, uVar18 != 0;
            uVar18 = uVar18 - 1) {
                    /* try { // try from 00d99038 to 00e99053 has its CatchHandler @ 00d99250 */
          iVar12 = *(short *)(lVar24 + (ulong)uVar33 * 2) * 7;
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 1) * 0x18);
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
          if ((uVar7 >> 9 & 1) == 0) {
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) {
                  dVar41 = (double)(ulong)*pdVar23;
                }
                else {
                  dVar41 = (double)(long)*pdVar23;
                }
              }
              else {
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
              }
            }
            else {
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
          }
          fVar39 = (float)dVar41;
          *(float *)(param_1 + 0x94) = fVar39;
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 2) * 0x18);
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
          if ((uVar7 >> 9 & 1) == 0) {
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                    /* try { // try from 00d990b4 to 00e990bb has its CatchHandler @ 00d991f8 */
                if ((uVar7 >> 7 & 1) == 0) {
                    /* try { // try from 00d990bc to 00e990df has its CatchHandler @ 00d98fd4 */
                  dVar41 = (double)(ulong)*pdVar23;
                }
                else {
                  dVar41 = (double)(long)*pdVar23;
                }
              }
              else {
                    /* try { // try from 00d990e0 to 00e990fb has its CatchHandler @ 00d9921c */
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
              }
            }
            else {
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
          }
          fVar42 = (float)dVar41;
          *(float *)(param_1 + 0x98) = fVar42;
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 3) * 0x18);
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
          if ((uVar7 >> 9 & 1) == 0) {
                    /* try { // try from 00d99108 to 00e99113 has its CatchHandler @ 00d99218 */
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) {
                  dVar41 = (double)(ulong)*pdVar23;
                }
                else {
                  dVar41 = (double)(long)*pdVar23;
                }
              }
              else {
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
              }
            }
            else {
                    /* try { // try from 00d9912c to 00e99137 has its CatchHandler @ 00d991fc */
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
                    /* try { // try from 00d99124 to 00e9912b has its CatchHandler @ 00d99214 */
          }
          fVar43 = (float)dVar41;
          *(float *)(param_1 + 0x9c) = fVar43;
                    /* try { // try from 00d99158 to 00e99177 has its CatchHandler @ 00d99264 */
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 4) * 0x18);
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
          if ((uVar7 >> 9 & 1) == 0) {
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) {
                  dVar41 = (double)(ulong)*pdVar23;
                    /* try { // try from 00d99178 to 00e9917f has its CatchHandler @ 00d9924c */
                }
                else {
                  dVar41 = (double)(long)*pdVar23;
                }
              }
              else {
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                    /* try { // try from 00d9919c to 00e991ab has its CatchHandler @ 00d99264 */
              }
            }
            else {
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
                    /* try { // try from 00d99180 to 00e9918b has its CatchHandler @ 00d9922c */
          }
          fVar45 = (float)dVar41;
          *(float *)(param_1 + 0xa0) = fVar45;
                    /* try { // try from 00d991ac to 00e991ef has its CatchHandler @ 00d98fd4 */
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 5) * 0x18);
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
          if ((uVar7 >> 9 & 1) == 0) {
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) {
                  dVar41 = (double)(ulong)*pdVar23;
                }
                else {
                    /* catch() { ... } // from try @ 00d9912c with catch @ 00d991fc */
                  dVar41 = (double)(long)*pdVar23;
                }
              }
              else {
                    /* try { // try from 00d991f0 to 00e991f7 has its CatchHandler @ 00d991f8 */
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                    /* catch() { ... } // from try @ 00d990b4 with catch @ 00d991f8
                       catch() { ... } // from try @ 00d991f0 with catch @ 00d991f8
                       try { // try from 00d991f8 to 00e9927f has its CatchHandler @ 00d98fd4 */
              }
            }
            else {
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
          }
          fVar47 = (float)dVar41;
          *(float *)(param_1 + 0xa4) = fVar47;
          pdVar23 = (double *)(*(long *)(lVar27 + 8) + (ulong)(iVar12 + 6) * 0x18);
                    /* catch() { ... } // from try @ 00d99124 with catch @ 00d99214 */
          uVar7 = *(ushort *)((long)pdVar23 + 0x16);
                    /* catch() { ... } // from try @ 00d99108 with catch @ 00d99218 */
          if ((uVar7 >> 9 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d990e0 with catch @ 00d9921c */
            if ((uVar7 >> 5 & 1) == 0) {
              if ((uVar7 >> 6 & 1) == 0) {
                if ((uVar7 >> 7 & 1) == 0) {
                    /* catch() { ... } // from try @ 00d99180 with catch @ 00d9922c */
                  dVar41 = (double)(ulong)*pdVar23;
                }
                else {
                    /* catch() { ... } // from try @ 00d99038 with catch @ 00d99250 */
                  dVar41 = (double)(long)*pdVar23;
                    /* catch() { ... } // from try @ 00d99020 with catch @ 00d99254 */
                }
              }
              else {
                dVar41 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                    /* catch() { ... } // from try @ 00d99178 with catch @ 00d9924c */
              }
            }
            else {
              dVar41 = (double)(long)*(int *)pdVar23;
            }
          }
          else {
            dVar41 = *pdVar23;
          }
                    /* catch() { ... } // from try @ 00d98174 with catch @ 00d98f94
                       catch() { ... } // from try @ 00d98450 with catch @ 00d98f94
                       catch() { ... } // from try @ 00d9850c with catch @ 00d98f94
                       catch() { ... } // from try @ 00d98acc with catch @ 00d98f94
                       catch() { ... } // from try @ 00d98b2c with catch @ 00d98f94 */
          lVar29 = *(long *)(param_1 + 0x150);
                    /* catch() { ... } // from try @ 00d97858 with catch @ 00d98fb0 */
          fVar46 = fVar45 * fVar39 - fVar42 * fVar43;
                    /* try { // try from 00d98fd4 to 00e9901f has its CatchHandler @ 00d98fd4
                       catch() { ... } // from try @ 00d98fd4 with catch @ 00d98fd4
                       catch() { ... } // from try @ 00d990bc with catch @ 00d98fd4
                       catch() { ... } // from try @ 00d991ac with catch @ 00d98fd4
                       catch() { ... } // from try @ 00d991f8 with catch @ 00d98fd4 */
          *(float *)(param_1 + 0x94) = fVar45 / fVar46;
          *(float *)(param_1 + 0x98) = -fVar42 / fVar46;
          *(float *)(param_1 + 0x9c) = -fVar43 / fVar46;
          *(float *)(param_1 + 0xa0) = fVar39 / fVar46;
          fVar44 = fVar40 * (fVar45 / fVar46) + fVar38 * (-fVar43 / fVar46);
          *(float *)(param_1 + 0xa4) = (fVar43 * (float)dVar41 - fVar45 * fVar47) / fVar46;
          *(float *)(param_1 + 0xa8) = -(fVar39 * (float)dVar41 - fVar42 * fVar47) / fVar46;
          *(float *)(param_1 + 0xe4) = fVar44;
          *(float *)(param_1 + 0xe8) = fVar40 * (-fVar42 / fVar46) + fVar38 * (fVar39 / fVar46);
          *(float *)(lVar29 + (lVar21 + (ulong)uVar31) * 4) = fVar44;
          uVar19 = uVar31 + 1;
          uVar31 = uVar31 + 2;
                    /* try { // try from 00d99020 to 00e99033 has its CatchHandler @ 00d99254 */
          *(undefined4 *)(lVar29 + (lVar21 + (ulong)uVar19) * 4) = *(undefined4 *)(param_1 + 0xe8);
        }
      }
      uVar36 = uVar36 + 2;
    } while (uVar36 < uVar30);
  }
  if (param_3 == 0) {
    lVar20 = *(long *)(param_1 + 0x138);
    uVar30 = *(long *)(param_1 + 0x140) - lVar20 >> 1;
    if (uVar30 < 0xfffffffffffffffb) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138),5);
      lVar20 = *(long *)(param_1 + 0x138);
    }
    else {
      *(ulong *)(param_1 + 0x140) = lVar20 + uVar30 * 2 + 10;
    }
    puVar3 = (undefined2 *)(lVar20 + uVar30 * 2);
                    /* try { // try from 00d992e8 to 00e992f7 has its CatchHandler @ 00d99758 */
    *puVar3 = (short)*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x6c);
                    /* try { // try from 00d992f8 to 00e99307 has its CatchHandler @ 00d99748 */
    iVar12 = *(int *)(param_1 + 0x158);
    iVar6 = *(int *)(param_1 + 0x150);
    puVar3[3] = 0;
    puVar3[4] = (short)((ulong)(lVar5 - lVar4) >> 2);
    sVar8 = (short)((uint)(iVar12 - iVar6) >> 2) - (short)lVar21;
    puVar3[1] = sVar8;
    puVar3[2] = sVar8;
    *(short *)(*(long *)(param_1 + 0x180) +
              (ulong)(*(int *)(*(long *)(param_1 + 0x60) + 0x14) + 3) * 2) =
         (short)uVar30 - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar9 + 0x28) == local_70) {
                    /* try { // try from 00d99288 to 00e992e7 has its CatchHandler @ 00d99288
                       catch() { ... } // from try @ 00d99288 with catch @ 00d99288
                       catch() { ... } // from try @ 00d996c0 with catch @ 00d99288 */
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

