
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<char
   const*, int>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<char
   const*, int>, std::__ndk1::__unordered_map_hasher<char const*,
   std::__ndk1::__hash_value_type<char const*, int>, std::__ndk1::hash<char const*>, true>,
   std::__ndk1::__unordered_map_equal<char const*, std::__ndk1::__hash_value_type<char const*, int>,
   std::__ndk1::equal_to<char const*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<char const*, int> >
   >::__emplace_unique_key_args<char const*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<char const* const&>, std::__ndk1::tuple<> >(char const* const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<char const* const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
       ::
       __emplace_unique_key_args<char_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char_const*const&>,std::__ndk1::tuple<>>
                 (char **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  char **ppcVar5;
  ulong uVar6;
  char *pcVar7;
  long *plVar8;
  char *pcVar9;
  char *pcVar10;
  char *unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pcVar9 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pcVar10 = (char *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pcVar9 != (char *)0x0) {
    uVar12 = CONCAT17(POPCOUNT((char)((ulong)pcVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)((ulong)pcVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)((ulong)pcVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)((ulong)pcVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)((ulong)pcVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)((ulong)pcVar9 >>
                                                                                  0x10)),
                                                                   CONCAT11(POPCOUNT((char)((ulong)
                                                  pcVar9 >> 8)),POPCOUNT((char)pcVar9))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (char *)((ulong)pcVar10 & (ulong)(pcVar9 + -1));
    }
    else {
      unaff_x24 = pcVar10;
      if (pcVar9 <= pcVar10) {
        uVar1 = 0;
        if (pcVar9 != (char *)0x0) {
          uVar1 = (ulong)pcVar10 / (ulong)pcVar9;
        }
        unaff_x24 = pcVar10 + -(uVar1 * (long)pcVar9);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (plVar8 = (long *)**(long **)(*param_1 + (long)unaff_x24 * 8); plVar8 != (long *)0x0;
          plVar8 = (long *)*plVar8) {
        pcVar7 = (char *)plVar8[1];
        if (pcVar7 != pcVar10) {
          if (uVar6 < 2) {
            pcVar7 = (char *)((ulong)pcVar7 & (ulong)(pcVar9 + -1));
          }
          else if (pcVar9 <= pcVar7) {
            uVar1 = 0;
            if (pcVar9 != (char *)0x0) {
              uVar1 = (ulong)pcVar7 / (ulong)pcVar9;
            }
            if (pcVar7 + -(uVar1 * (long)pcVar9) == unaff_x24) goto LAB_009e4350;
            break;
          }
          if (pcVar7 != unaff_x24) break;
        }
LAB_009e4350:
        if (plVar8[2] == uVar2) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  lVar3 = **(long **)param_4;
  *(undefined4 *)(plVar8 + 3) = 0;
  *plVar8 = 0;
  plVar8[1] = (long)pcVar10;
  plVar8[2] = lVar3;
  if ((pcVar9 == (char *)0x0) || (*(float *)(param_1 + 4) * (float)pcVar9 < (float)(param_1[3] + 1))
     ) {
    uVar2 = (ulong)(pcVar9 < (char *)0x3 || ((ulong)pcVar9 & (ulong)(pcVar9 + -1)) != 0) |
            (long)pcVar9 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::__unordered_map_hasher<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::hash<char_const*>,true>,std::__ndk1::__unordered_map_equal<char_const*,std::__ndk1::__hash_value_type<char_const*,int>,std::__ndk1::equal_to<char_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char_const*,int>>>
            *)param_1,uVar6);
    pcVar9 = param_1[1];
    if (((ulong)pcVar9 & (ulong)(pcVar9 + -1)) == 0) {
      unaff_x24 = (char *)((ulong)(pcVar9 + -1) & (ulong)pcVar10);
    }
    else {
      unaff_x24 = pcVar10;
      if (pcVar9 <= pcVar10) {
        uVar2 = 0;
        if (pcVar9 != (char *)0x0) {
          uVar2 = (ulong)pcVar10 / (ulong)pcVar9;
        }
        unaff_x24 = pcVar10 + -(uVar2 * (long)pcVar9);
      }
    }
  }
  pcVar10 = *param_1;
  plVar4 = *(long **)(pcVar10 + (long)unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    ppcVar5 = param_1 + 2;
    *plVar8 = (long)*ppcVar5;
    *ppcVar5 = (char *)plVar8;
    *(char ***)(pcVar10 + (long)unaff_x24 * 8) = ppcVar5;
    if (*plVar8 == 0) goto LAB_009e44a8;
    pcVar10 = *(char **)(*plVar8 + 8);
                    /* try { // try from 009e4478 to 00ae44cb has its CatchHandler @ 009e4478
                       catch() { ... } // from try @ 009e4478 with catch @ 009e4478
                       catch() { ... } // from try @ 009e44e4 with catch @ 009e4478
                       catch() { ... } // from try @ 009e4558 with catch @ 009e4478 */
    if (((ulong)pcVar9 & (ulong)(pcVar9 + -1)) == 0) {
      pcVar10 = (char *)((ulong)pcVar10 & (ulong)(pcVar9 + -1));
    }
    else if (pcVar9 <= pcVar10) {
      uVar2 = 0;
      if (pcVar9 != (char *)0x0) {
        uVar2 = (ulong)pcVar10 / (ulong)pcVar9;
      }
      pcVar10 = pcVar10 + -(uVar2 * (long)pcVar9);
    }
    plVar4 = (long *)(*param_1 + (long)pcVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_009e44a8:
  param_1[3] = param_1[3] + 1;
                    /* try { // try from 009e44cc to 00ae44e3 has its CatchHandler @ 009e45e0 */
  return plVar8;
}

