
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::extension::DownloadUnit>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::extension::DownloadUnit>
   > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                 (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
                 )

{
  size_t sVar1;
  piecewise_construct_t *ppVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  size_t __n;
  uint uVar6;
  ulong uVar7;
  void *__s1;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  ulong unaff_x27;
  undefined2 uVar15;
  long *local_80;
  basic_string *pbStack_78;
  undefined1 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar7 = (ulong)((byte)*param_2 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_80,ppVar2,uVar7);
  uVar14 = *(ulong *)(param_1 + 8);
  if (uVar14 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar14 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar14 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar14 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar14 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar14 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar14 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar14 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar14))))
                                               ))));
    uVar15 = NEON_uaddlv(uVar8,1);
    uVar12 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar15) & 0xffffffff;
                    /* catch() { ... } // from try @ 00e07f20 with catch @ 00e07ee4 */
    if (uVar12 < 2) {
      unaff_x27 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar14 <= uVar7) {
        uVar10 = 0;
        if (uVar14 != 0) {
          uVar10 = uVar7 / uVar14;
        }
        unaff_x27 = uVar7 - uVar10 * uVar14;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)param_1 + unaff_x27 * 8);
                    /* try { // try from 00e07f18 to 00f07f1f has its CatchHandler @ 00e0802c */
    if ((puVar9 != (undefined8 *)0x0) && (plVar13 = (long *)*puVar9, plVar13 != (long *)0x0)) {
                    /* try { // try from 00e07f20 to 00f08047 has its CatchHandler @ 00e07ee4 */
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar10 = plVar13[1];
        if (uVar10 != uVar7) {
          if (uVar12 < 2) {
            uVar10 = uVar10 & uVar14 - 1;
          }
          else if (uVar14 <= uVar10) {
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar10 / uVar14;
            }
            if (uVar10 - uVar4 * uVar14 == unaff_x27) goto LAB_00e07f90;
            break;
          }
          if (uVar10 != unaff_x27) break;
        }
LAB_00e07f90:
        bVar3 = *(byte *)(plVar13 + 2);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar13[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar13[4];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar13 + 0x11);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              uVar10 = 0;
              while (*(piecewise_construct_t *)((long)plVar13 + uVar10 + 0x11) == ppVar2[uVar10]) {
                uVar10 = uVar10 + 1;
                if (bVar3 >> 1 == uVar10) goto LAB_00e08000;
              }
              goto LAB_00e07f48;
            }
          }
          else if (__n != 0) {
            uVar6 = memcmp(__s1,ppVar2,__n);
            __s1 = (void *)(ulong)uVar6;
            if (uVar6 != 0) goto LAB_00e07f48;
          }
LAB_00e08000:
          uVar8 = 0;
          goto LAB_00e08178;
        }
LAB_00e07f48:
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  plVar13 = operator_new(0x78);
  local_70 = 0;
  local_80 = plVar13;
  pbStack_78 = param_1 + 0x10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::basic_string
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (plVar13 + 2),*(basic_string **)param_4);
                    /* catch() { ... } // from try @ 00e07f18 with catch @ 00e0802c */
  plVar13[0xe] = 0;
  plVar13[0xd] = 0;
  plVar13[0xc] = 0;
  plVar13[0xb] = 0;
  plVar13[10] = 0;
  plVar13[9] = 0;
  plVar13[8] = 0;
  plVar13[7] = 0;
  plVar13[6] = 0;
  plVar13[5] = 0;
  local_70 = 1;
  *local_80 = 0;
  local_80[1] = uVar7;
  if ((uVar14 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar14 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar14 = (ulong)(uVar14 < 3 || (uVar14 & uVar14 - 1) != 0) | uVar14 << 1;
    uVar12 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar12 <= uVar14) {
      uVar12 = uVar14;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
            *)param_1,uVar12);
    uVar14 = *(ulong *)(param_1 + 8);
    if ((uVar14 & uVar14 - 1) == 0) {
      unaff_x27 = uVar14 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar14 <= uVar7) {
                    /* catch() { ... } // from try @ 00e08118 with catch @ 00e080d4 */
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar7 / uVar14;
        }
        unaff_x27 = uVar7 - uVar12 * uVar14;
      }
    }
  }
  plVar13 = local_80;
  plVar11 = *(long **)(*(long *)param_1 + unaff_x27 * 8);
  if (plVar11 == (long *)0x0) {
    *local_80 = *(long *)(param_1 + 0x10);
                    /* try { // try from 00e08110 to 00f08117 has its CatchHandler @ 00e08244 */
    *(long **)(param_1 + 0x10) = local_80;
                    /* try { // try from 00e08118 to 00f0825f has its CatchHandler @ 00e080d4 */
    *(basic_string **)(*(long *)param_1 + unaff_x27 * 8) = param_1 + 0x10;
    if (*local_80 != 0) {
      uVar7 = *(ulong *)(*local_80 + 8);
      if ((uVar14 & uVar14 - 1) == 0) {
        uVar7 = uVar7 & uVar14 - 1;
      }
      else if (uVar14 <= uVar7) {
        uVar12 = 0;
        if (uVar14 != 0) {
          uVar12 = uVar7 / uVar14;
        }
        uVar7 = uVar7 - uVar12 * uVar14;
      }
      *(long **)(*(long *)param_1 + uVar7 * 8) = local_80;
    }
  }
  else {
    *local_80 = *plVar11;
    *plVar11 = (long)local_80;
  }
  local_80 = (long *)0x0;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  __s1 = (void *)FUN_00dffa68(&local_80);
  uVar8 = 1;
LAB_00e08178:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar8);
  }
  return plVar13;
}

