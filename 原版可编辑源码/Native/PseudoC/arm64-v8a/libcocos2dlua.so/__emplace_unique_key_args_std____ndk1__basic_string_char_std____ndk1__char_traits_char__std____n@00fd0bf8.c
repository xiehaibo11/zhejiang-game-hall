
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttrib>, void*>*>,
   bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttrib>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::VertexAttrib>,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, cocos2d::VertexAttrib>,
   std::__ndk1::equal_to<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::VertexAttrib> >
   >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>&&, std::__ndk1::tuple<>&&)
    */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>>>
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
  basic_string *pbVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x27;
  undefined2 uVar17;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* catch() { ... } // from try @ 00fd0bb4 with catch @ 00fd0c24 */
  uVar7 = *(ulong *)(param_2 + 8);
  ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    ppVar2 = param_2 + 1;
    uVar7 = (ulong)((byte)*param_2 >> 1);
  }
  uVar7 = __murmur2_or_cityhash<unsigned_long,64ul>::operator()(a_Stack_70,ppVar2,uVar7);
  uVar16 = *(ulong *)(param_1 + 8);
  if (uVar16 != 0) {
    uVar8 = CONCAT17(POPCOUNT((char)(uVar16 >> 0x38)),
                     CONCAT16(POPCOUNT((char)(uVar16 >> 0x30)),
                              CONCAT15(POPCOUNT((char)(uVar16 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)(uVar16 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)(uVar16 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)(uVar16 >> 0x10)),
                                                                  CONCAT11(POPCOUNT((char)(uVar16 >>
                                                                                          8)),
                                                                           POPCOUNT((char)uVar16))))
                                               ))));
    uVar17 = NEON_uaddlv(uVar8,1);
    uVar13 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar17) & 0xffffffff;
    if (uVar13 < 2) {
      unaff_x27 = uVar16 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar16 <= uVar7) {
        uVar10 = 0;
        if (uVar16 != 0) {
          uVar10 = uVar7 / uVar16;
        }
        unaff_x27 = uVar7 - uVar10 * uVar16;
      }
    }
    puVar9 = *(undefined8 **)(*(long *)param_1 + unaff_x27 * 8);
    if ((puVar9 != (undefined8 *)0x0) && (plVar15 = (long *)*puVar9, plVar15 != (long *)0x0)) {
      __n = (ulong)((byte)*param_2 >> 1);
      ppVar2 = param_2 + 1;
      if (((byte)*param_2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
        ppVar2 = *(piecewise_construct_t **)(param_2 + 0x10);
      }
      do {
        uVar10 = plVar15[1];
        if (uVar10 != uVar7) {
                    /* catch() { ... } // from try @ 00fd0d1c with catch @ 00fd0cec */
          if (uVar13 < 2) {
            uVar10 = uVar10 & uVar16 - 1;
          }
          else if (uVar16 <= uVar10) {
            uVar4 = 0;
            if (uVar16 != 0) {
              uVar4 = uVar10 / uVar16;
            }
            if (uVar10 - uVar4 * uVar16 == unaff_x27) goto LAB_00fd0d1c;
            break;
          }
                    /* try { // try from 00fd0d14 to 010d0d1b has its CatchHandler @ 00fd0d84 */
          if (uVar10 != unaff_x27) break;
        }
LAB_00fd0d1c:
                    /* try { // try from 00fd0d1c to 010d0d9f has its CatchHandler @ 00fd0cec */
        bVar3 = *(byte *)(plVar15 + 2);
        sVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar1 = plVar15[3];
        }
        if (sVar1 == __n) {
          __s1 = (void *)plVar15[4];
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)((long)plVar15 + 0x11);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              uVar10 = 0;
              while (*(piecewise_construct_t *)((long)plVar15 + uVar10 + 0x11) == ppVar2[uVar10]) {
                uVar10 = uVar10 + 1;
                if (bVar3 >> 1 == uVar10) goto LAB_00fd0d8c;
              }
              goto LAB_00fd0cd4;
            }
          }
          else if (__n != 0) {
                    /* catch() { ... } // from try @ 00fd0d14 with catch @ 00fd0d84 */
            uVar6 = memcmp(__s1,ppVar2,__n);
            __s1 = (void *)(ulong)uVar6;
            if (uVar6 != 0) goto LAB_00fd0cd4;
          }
LAB_00fd0d8c:
          uVar8 = 0;
          goto LAB_00fd0ec4;
        }
LAB_00fd0cd4:
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
  plVar15 = operator_new(0x50);
  __s1 = (void *)basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)(plVar15 + 2),*(basic_string **)param_4);
  plVar15[9] = 0;
  plVar15[8] = 0;
  plVar15[7] = 0;
  plVar15[6] = 0;
  plVar15[5] = 0;
  *plVar15 = 0;
  plVar15[1] = uVar7;
  if ((uVar16 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar16 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar16 = (ulong)(uVar16 < 3 || (uVar16 & uVar16 - 1) != 0) | uVar16 << 1;
    uVar13 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar13 <= uVar16) {
      uVar13 = uVar16;
    }
    __s1 = (void *)rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::VertexAttrib>>>
                           *)param_1,uVar13);
    uVar16 = *(ulong *)(param_1 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x27 = uVar16 - 1 & uVar7;
    }
    else {
      unaff_x27 = uVar7;
      if (uVar16 <= uVar7) {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar7 / uVar16;
        }
        unaff_x27 = uVar7 - uVar13 * uVar16;
      }
    }
  }
                    /* catch() { ... } // from try @ 00fd0e7c with catch @ 00fd0e4c */
  lVar14 = *(long *)param_1;
  plVar11 = *(long **)(lVar14 + unaff_x27 * 8);
  if (plVar11 == (long *)0x0) {
    pbVar12 = param_1 + 0x10;
    *plVar15 = *(long *)pbVar12;
    *(long **)pbVar12 = plVar15;
                    /* try { // try from 00fd0e74 to 010d0e7b has its CatchHandler @ 00fd0ee4 */
    *(basic_string **)(lVar14 + unaff_x27 * 8) = pbVar12;
                    /* try { // try from 00fd0e7c to 010d0eff has its CatchHandler @ 00fd0e4c */
    if (*plVar15 == 0) goto LAB_00fd0eb4;
    uVar7 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar7 = uVar7 & uVar16 - 1;
    }
    else if (uVar16 <= uVar7) {
      uVar13 = 0;
      if (uVar16 != 0) {
        uVar13 = uVar7 / uVar16;
      }
      uVar7 = uVar7 - uVar13 * uVar16;
    }
    plVar11 = (long *)(*(long *)param_1 + uVar7 * 8);
  }
  else {
    *plVar15 = *plVar11;
  }
  *plVar11 = (long)plVar15;
LAB_00fd0eb4:
  uVar8 = 1;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
LAB_00fd0ec4:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__s1,uVar8);
  }
                    /* catch() { ... } // from try @ 00fd0e74 with catch @ 00fd0ee4 */
  return plVar15;
}

