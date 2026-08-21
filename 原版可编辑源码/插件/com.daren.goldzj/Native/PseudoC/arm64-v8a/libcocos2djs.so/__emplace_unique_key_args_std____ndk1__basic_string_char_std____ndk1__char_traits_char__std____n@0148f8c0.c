
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int>, std::__ndk1::hash<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int>, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, int> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&&>&&, std::__ndk1::tuple<>&&) */

undefined1  [16]
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
::
__emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
          (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  size_t sVar1;
  piecewise_construct_t *ppVar2;
  byte bVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  basic_string *pbVar11;
  long lVar12;
  ulong uVar13;
  void *__s1;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x26;
  undefined2 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_68 [8];
  
  uVar6 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar6 = (ulong)((byte)*param_2 >> 1);
  }
  uVar6 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_68,ppVar2,uVar6);
  uVar15 = *(ulong *)(param_1 + 8);
  if (uVar15 != 0) {
    uVar7 = CONCAT17(POPCOUNT((char)(uVar15 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar15 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar15 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar15 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar15 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar15 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar15 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar15))))
                                               ))));
    uVar16 = NEON_uaddlv(uVar7,1);
    uVar13 = CONCAT62((int6)((ulong)uVar7 >> 0x10),uVar16) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x26 = uVar15 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar15 <= uVar6) {
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar6 / uVar15;
        }
        unaff_x26 = uVar6 - uVar9 * uVar15;
      }
    }
    puVar8 = *(undefined8 **)(*(long *)param_1 + unaff_x26 * 8);
    if ((puVar8 != (undefined8 *)0x0) && (plVar14 = (long *)*puVar8, plVar14 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar9 = plVar14[1];
        if (uVar9 != uVar6) {
          if (uVar13 < 2) {
            uVar9 = uVar9 & uVar15 - 1;
          }
          else if (uVar15 <= uVar9) {
            uVar4 = 0;
            if (uVar15 != 0) {
              uVar4 = uVar9 / uVar15;
            }
            if (uVar9 - uVar4 * uVar15 == unaff_x26) goto LAB_0148f9d0;
            break;
          }
          if (uVar9 != unaff_x26) break;
        }
LAB_0148f9d0:
        bVar3 = *(byte *)(plVar14 + 2);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar14[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar14[4];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar14 + 0x11);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_0148fa40:
              uVar7 = 0;
              goto LAB_0148fb78;
            }
            uVar9 = 0;
            while (*(piecewise_construct_t *)((long)plVar14 + uVar9 + 0x11) == ppVar2[uVar9]) {
              uVar9 = uVar9 + 1;
              if (bVar3 >> 1 == uVar9) goto LAB_0148fa40;
            }
          }
          else if ((__n == 0) || (iVar5 = memcmp(__s1,ppVar2,__n), iVar5 == 0)) goto LAB_0148fa40;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  plVar14 = operator_new(0x30);
  plVar10 = *(long **)param_4;
  lVar17 = *plVar10;
  lVar12 = plVar10[2];
  plVar14[3] = plVar10[1];
  plVar14[2] = lVar17;
  plVar14[4] = lVar12;
  plVar10[1] = 0;
  plVar10[2] = 0;
  *plVar10 = 0;
  *(undefined4 *)(plVar14 + 5) = 0;
  *plVar14 = 0;
  plVar14[1] = uVar6;
  if ((uVar15 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar15 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar15 = (ulong)(uVar15 < 3 || (uVar15 & uVar15 - 1) != 0) | uVar15 << 1;
    uVar13 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar13 <= uVar15) {
      uVar13 = uVar15;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,int>>>
            *)param_1,uVar13);
    uVar15 = *(ulong *)(param_1 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x26 = uVar15 - 1 & uVar6;
    }
    else {
      unaff_x26 = uVar6;
      if (uVar15 <= uVar6) {
        uVar13 = 0;
        if (uVar15 != 0) {
          uVar13 = uVar6 / uVar15;
        }
        unaff_x26 = uVar6 - uVar13 * uVar15;
      }
    }
  }
  lVar12 = *(long *)param_1;
  plVar10 = *(long **)(lVar12 + unaff_x26 * 8);
  if (plVar10 == (long *)0x0) {
    pbVar11 = param_1 + 0x10;
    *plVar14 = *(long *)pbVar11;
    *(long **)pbVar11 = plVar14;
    *(basic_string **)(lVar12 + unaff_x26 * 8) = pbVar11;
    if (*plVar14 == 0) goto LAB_0148fb68;
    uVar6 = *(ulong *)(*plVar14 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar6 = uVar6 & uVar15 - 1;
    }
    else if (uVar15 <= uVar6) {
      uVar13 = 0;
      if (uVar15 != 0) {
        uVar13 = uVar6 / uVar15;
      }
      uVar6 = uVar6 - uVar13 * uVar15;
    }
    plVar10 = (long *)(*(long *)param_1 + uVar6 * 8);
  }
  else {
    *plVar14 = *plVar10;
  }
  *plVar10 = (long)plVar14;
LAB_0148fb68:
  uVar7 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_0148fb78:
  auVar18._8_8_ = uVar7;
  auVar18._0_8_ = plVar14;
  return auVar18;
}

