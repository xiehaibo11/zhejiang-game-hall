
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::DataPool<cocos2d::Particle3D> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::DataPool<cocos2d::Particle3D> >,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::DataPool<cocos2d::Particle3D> >,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::DataPool<cocos2d::Particle3D> >,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   cocos2d::DataPool<cocos2d::Particle3D> > >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>>>
       ::
       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                 (basic_string *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4
                 )

{
  basic_string *pbVar1;
  size_t sVar2;
  piecewise_construct_t *ppVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  uint uVar7;
  ulong uVar8;
  void *__s1;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined2 uVar17;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar8 = *(ulong *)(param_2 + 8);
  ppVar3 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar3 = param_2 + 1;
    uVar8 = (ulong)((byte)*param_2 >> 1);
  }
  uVar8 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,ppVar3,uVar8);
  uVar16 = *(ulong *)(param_1 + 8);
  if (uVar16 != 0) {
    uVar9 = CONCAT17(POPCOUNT((char)(uVar16 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar16 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar16 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar16 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar16 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar16 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar16 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar16))))
                                               ))));
    uVar17 = NEON_uaddlv(uVar9,1);
    uVar13 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar17) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x27 = uVar16 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar16 <= uVar8) {
        uVar11 = 0;
        if (uVar16 != 0) {
          uVar11 = uVar8 / uVar16;
        }
        unaff_x27 = uVar8 - uVar11 * uVar16;
      }
    }
    puVar10 = *(undefined8 **)(*(long *)param_1 + unaff_x27 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar10, plVar15 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar3 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar3 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar11 = plVar15[1];
        if (uVar11 != uVar8) {
          if (uVar13 < 2) {
            uVar11 = uVar11 & uVar16 - 1;
          }
          else if (uVar16 <= uVar11) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar11 / uVar16;
            }
            if (uVar11 - uVar5 * uVar16 == unaff_x27) goto LAB_00e20458;
            break;
          }
                    /* try { // try from 00e20454 to 00f2046b has its CatchHandler @ 00e2063c */
          if (uVar11 != unaff_x27) break;
        }
LAB_00e20458:
        bVar4 = *(byte *)(plVar15 + 2);
        sVar2 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar2 = plVar15[3];
        }
        if (sVar2 == __n) {
          __s1 = (void *)plVar15[4];
                    /* try { // try from 00e2047c to 00f20483 has its CatchHandler @ 00e205d4 */
          if ((bVar4 & 1) == 0) {
            __s1 = (void *)((long)plVar15 + 0x11);
          }
                    /* try { // try from 00e20484 to 00f20597 has its CatchHandler @ 00e1fd8c */
          if ((bVar4 & 1) == 0) {
            if (__n != 0) {
              uVar11 = 0;
              while (*(piecewise_construct_t *)((long)plVar15 + uVar11 + 0x11) == ppVar3[uVar11]) {
                uVar11 = uVar11 + 1;
                if (bVar4 >> 1 == uVar11) goto LAB_00e204c8;
              }
              goto LAB_00e20410;
            }
          }
          else if (__n != 0) {
            uVar7 = memcmp(__s1,ppVar3,__n);
            __s1 = (void *)(ulong)uVar7;
            if (uVar7 != 0) goto LAB_00e20410;
          }
LAB_00e204c8:
          uVar9 = 0;
          goto LAB_00e20608;
        }
LAB_00e20410:
        plVar15 = (long *)*plVar15;
                    /* try { // try from 00e20414 to 00f2041b has its CatchHandler @ 00e205d4 */
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = operator_new(0x60);
  __s1 = (void *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)(plVar15 + 2),*(basic_string **)param_4);
  plVar15[10] = (long)(plVar15 + 9);
  plVar15[0xb] = 0;
  plVar15[5] = 0;
  plVar15[6] = (long)(plVar15 + 6);
  plVar15[7] = (long)(plVar15 + 6);
  plVar15[8] = 0;
  plVar15[9] = (long)(plVar15 + 9);
  *plVar15 = 0;
  plVar15[1] = uVar8;
  pbVar1 = param_1 + 0x10;
  if ((uVar16 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar16 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar13 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::DataPool<cocos2d::Particle3D>>>>
                           *)param_1,uVar13);
    uVar16 = *(ulong *)(param_1 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar8;
    }
    else {
      unaff_x27 = uVar8;
      if (uVar16 <= uVar8) {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar8 / uVar16;
        }
        unaff_x27 = uVar8 - uVar13 * uVar16;
      }
    }
  }
  lVar14 = *(long *)param_1;
                    /* try { // try from 00e20598 to 00f2059f has its CatchHandler @ 00e205a0 */
  plVar12 = *(long **)(lVar14 + unaff_x27 * 8);
  if (plVar12 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00e20220 with catch @ 00e205ac */
    *plVar15 = *(long *)pbVar1;
    *(long **)pbVar1 = plVar15;
    *(basic_string **)(lVar14 + unaff_x27 * 8) = pbVar1;
                    /* catch() { ... } // from try @ 00e2016c with catch @ 00e205c0 */
    if (*plVar15 == 0) goto LAB_00e205f8;
    uVar8 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar8 = uVar8 & uVar16 - 1;
    }
    else {
                    /* catch() { ... } // from try @ 00e20414 with catch @ 00e205d4
                       catch() { ... } // from try @ 00e2047c with catch @ 00e205d4 */
                    /* catch() { ... } // from try @ 00e20310 with catch @ 00e205d8 */
      if (uVar16 <= uVar8) {
                    /* catch() { ... } // from try @ 00e1fdd0 with catch @ 00e205dc */
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar8 / uVar16;
        }
        uVar8 = uVar8 - uVar13 * uVar16;
      }
    }
                    /* catch() { ... } // from try @ 00e2012c with catch @ 00e205ec */
                    /* catch() { ... } // from try @ 00e1ff50 with catch @ 00e205f0 */
    plVar12 = (long *)(*(long *)param_1 + uVar8 * 8);
  }
  else {
                    /* catch() { ... } // from try @ 00e20598 with catch @ 00e205a0
                       try { // try from 00e205a0 to 00f20667 has its CatchHandler @ 00e1fd8c */
                    /* catch() { ... } // from try @ 00e20300 with catch @ 00e205a4 */
    *plVar15 = *plVar12;
                    /* catch() { ... } // from try @ 00e202d8 with catch @ 00e205a8 */
  }
  *plVar12 = (long)plVar15;
LAB_00e205f8:
  uVar9 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_00e20608:
                    /* catch() { ... } // from try @ 00e1ff44 with catch @ 00e20610 */
                    /* catch() { ... } // from try @ 00e200e8 with catch @ 00e20614 */
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00e20454 with catch @ 00e2063c */
    __stack_chk_fail(__s1,uVar9);
  }
                    /* catch() { ... } // from try @ 00e1ff28 with catch @ 00e20624 */
                    /* catch() { ... } // from try @ 00e201a0 with catch @ 00e20638
                       catch() { ... } // from try @ 00e2023c with catch @ 00e20638 */
  return plVar15;
}

