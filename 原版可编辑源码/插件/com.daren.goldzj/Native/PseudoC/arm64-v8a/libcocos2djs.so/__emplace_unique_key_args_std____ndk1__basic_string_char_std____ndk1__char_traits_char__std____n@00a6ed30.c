
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::AudioEngine::ProfileHelper>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::AudioEngine::ProfileHelper>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::AudioEngine::ProfileHelper>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::AudioEngine::ProfileHelper>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::AudioEngine::ProfileHelper> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>>>
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
  void *__dest;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  byte *pbVar12;
  long *plVar13;
  basic_string *pbVar14;
  long lVar15;
  long *plVar16;
  void *__src;
  ulong uVar17;
  ulong uVar18;
  ulong unaff_x28;
  long lVar19;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00a6ed60 to 00b6ed9b has its CatchHandler @ 00a6ee44 */
  uVar7 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar7 = (ulong)((byte)*param_2 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,ppVar2,uVar7);
  uVar18 = *(ulong *)(param_1 + 8);
  if (uVar18 != 0) {
    uVar17 = uVar18 - 1;
                    /* try { // try from 00a6ed9c to 00b6ee9b has its CatchHandler @ 00a6eb94 */
    if ((uVar17 & uVar18) == 0) {
      unaff_x28 = uVar17 & uVar7;
    }
    else {
      unaff_x28 = uVar7;
      if (uVar18 <= uVar7) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar7 / uVar18;
        }
        unaff_x28 = uVar7 - uVar11 * uVar18;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)param_1 + unaff_x28 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar11 = plVar16[1];
        if (uVar11 != uVar7) {
          if ((uVar17 & uVar18) == 0) {
            uVar11 = uVar11 & uVar17;
          }
          else if (uVar18 <= uVar11) {
            uVar4 = 0;
            if (uVar18 != 0) {
              uVar4 = uVar11 / uVar18;
            }
                    /* catch() { ... } // from try @ 00a6ec68 with catch @ 00a6ee10
                       catch() { ... } // from try @ 00a6ed04 with catch @ 00a6ee10 */
                    /* catch() { ... } // from try @ 00a6ec44 with catch @ 00a6ee14
                       catch() { ... } // from try @ 00a6ecbc with catch @ 00a6ee14 */
            if (uVar11 - uVar4 * uVar18 == unaff_x28) goto LAB_00a6ee2c;
            break;
          }
          if (uVar11 != unaff_x28) break;
        }
LAB_00a6ee2c:
                    /* catch() { ... } // from try @ 00a6ec14 with catch @ 00a6ee2c */
                    /* catch() { ... } // from try @ 00a6ec08 with catch @ 00a6ee30 */
        bVar3 = *(byte *)(plVar16 + 2);
                    /* catch() { ... } // from try @ 00a6ebe8 with catch @ 00a6ee34 */
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar16[3];
        }
                    /* catch() { ... } // from try @ 00a6ec20 with catch @ 00a6ee44
                       catch() { ... } // from try @ 00a6ec9c with catch @ 00a6ee44
                       catch() { ... } // from try @ 00a6ed60 with catch @ 00a6ee44 */
        if (sVar1 == __n) {
          plVar8 = (long *)plVar16[4];
          if ((bVar3 & 1) == 0) {
            plVar8 = (long *)((long)plVar16 + 0x11);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              uVar11 = 0;
              while (*(piecewise_construct_t *)((long)plVar16 + uVar11 + 0x11) == ppVar2[uVar11]) {
                uVar11 = uVar11 + 1;
                if (bVar3 >> 1 == uVar11) goto LAB_00a6efe0;
              }
              goto LAB_00a6ee9c;
            }
          }
          else if (__n != 0) {
            uVar6 = memcmp(plVar8,ppVar2,__n);
            plVar8 = (long *)(ulong)uVar6;
            if (uVar6 != 0) goto LAB_00a6ee9c;
          }
LAB_00a6efe0:
          uVar9 = 0;
          goto LAB_00a6f074;
        }
LAB_00a6ee9c:
                    /* try { // try from 00a6ee9c to 00b6eeef has its CatchHandler @ 00a6ee9c
                       catch() { ... } // from try @ 00a6ee9c with catch @ 00a6ee9c
                       catch() { ... } // from try @ 00a6efa0 with catch @ 00a6ee9c */
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
  }
  plVar16 = operator_new(0x70);
  pbVar12 = *(byte **)param_4;
  plVar16[2] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar8 = plVar16;
  if ((*pbVar12 & 1) == 0) {
    lVar19 = *(long *)(pbVar12 + 8);
    lVar15 = *(long *)pbVar12;
    plVar16[4] = *(long *)(pbVar12 + 0x10);
    plVar16[3] = lVar19;
    plVar16[2] = lVar15;
  }
  else {
    uVar17 = *(ulong *)(pbVar12 + 8);
    if (0xffffffffffffffef < uVar17) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __src = *(void **)(pbVar12 + 0x10);
                    /* try { // try from 00a6eef0 to 00b6ef07 has its CatchHandler @ 00a6f01c */
    if (uVar17 < 0x17) {
      __dest = (void *)((long)plVar16 + 0x11);
      *(char *)(plVar16 + 2) = (char)((int)uVar17 << 1);
      if (uVar17 != 0) goto LAB_00a6ef2c;
    }
    else {
                    /* try { // try from 00a6ef10 to 00b6ef1b has its CatchHandler @ 00a6f018 */
      uVar11 = uVar17 + 0x10 & 0xfffffffffffffff0;
      __dest = operator_new(uVar11);
                    /* try { // try from 00a6ef1c to 00b6ef27 has its CatchHandler @ 00a6f014 */
      plVar16[3] = uVar17;
      plVar16[4] = (long)__dest;
                    /* try { // try from 00a6ef28 to 00b6ef9f has its CatchHandler @ 00a6f02c */
      plVar16[2] = uVar11 | 1;
LAB_00a6ef2c:
      plVar8 = memcpy(__dest,__src,uVar17);
    }
    *(undefined1 *)((long)__dest + uVar17) = 0;
  }
  *(undefined4 *)(plVar16 + 8) = 0;
  plVar16[6] = 0;
  plVar16[7] = 0;
  plVar16[5] = 0;
  plVar16[0xc] = 0;
  plVar16[0xd] = 0;
  plVar16[9] = 0;
  plVar16[10] = (long)(plVar16 + 10);
  plVar16[0xb] = (long)(plVar16 + 10);
  *plVar16 = 0;
  plVar16[1] = uVar7;
  if ((uVar18 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar18 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    if (uVar18 < 3) {
                    /* try { // try from 00a6efa0 to 00b6f083 has its CatchHandler @ 00a6ee9c */
      uVar17 = 1;
    }
    else {
      uVar17 = (ulong)((uVar18 - 1 & uVar18) != 0);
    }
    uVar17 = uVar17 | uVar18 << 1;
    uVar18 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar18 <= uVar17) {
      uVar18 = uVar17;
    }
    plVar8 = (long *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::AudioEngine::ProfileHelper>>>
                             *)param_1,uVar18);
    uVar18 = *(ulong *)(param_1 + 8);
    if ((uVar18 - 1 & uVar18) == 0) {
      unaff_x28 = uVar18 - 1 & uVar7;
    }
    else {
      unaff_x28 = uVar7;
      if (uVar18 <= uVar7) {
        uVar17 = 0;
        if (uVar18 != 0) {
          uVar17 = uVar7 / uVar18;
        }
        unaff_x28 = uVar7 - uVar17 * uVar18;
      }
    }
  }
  lVar15 = *(long *)param_1;
  plVar13 = *(long **)(lVar15 + unaff_x28 * 8);
  if (plVar13 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a6ef1c with catch @ 00a6f014 */
                    /* catch() { ... } // from try @ 00a6ef10 with catch @ 00a6f018 */
    pbVar14 = param_1 + 0x10;
                    /* catch() { ... } // from try @ 00a6eef0 with catch @ 00a6f01c */
    *plVar16 = *(long *)pbVar14;
    *(long **)pbVar14 = plVar16;
    *(basic_string **)(lVar15 + unaff_x28 * 8) = pbVar14;
                    /* catch() { ... } // from try @ 00a6ef28 with catch @ 00a6f02c */
    if (*plVar16 == 0) goto LAB_00a6f064;
    uVar7 = *(ulong *)(*plVar16 + 8);
    if ((uVar18 - 1 & uVar18) == 0) {
      uVar7 = uVar7 & uVar18 - 1;
    }
    else if (uVar18 <= uVar7) {
      uVar17 = 0;
      if (uVar18 != 0) {
        uVar17 = uVar7 / uVar18;
      }
      uVar7 = uVar7 - uVar17 * uVar18;
    }
    plVar13 = (long *)(*(long *)param_1 + uVar7 * 8);
  }
  else {
    *plVar16 = *plVar13;
  }
  *plVar13 = (long)plVar16;
LAB_00a6f064:
  uVar9 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_00a6f074:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar8,uVar9);
  }
                    /* try { // try from 00a6f084 to 00b6f0d7 has its CatchHandler @ 00a6f084
                       catch() { ... } // from try @ 00a6f084 with catch @ 00a6f084
                       catch() { ... } // from try @ 00a6f270 with catch @ 00a6f084 */
  return plVar16;
}

