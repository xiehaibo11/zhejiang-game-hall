
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   bool>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, bool>,
   std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int, bool>,
   std::__ndk1::hash<int>, true>, std::__ndk1::__unordered_map_equal<int,
   std::__ndk1::__hash_value_type<int, bool>, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, bool> >
   >::__emplace_unique_key_args<int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<int&&>, std::__ndk1::tuple<> >(int const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<int&&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
       ::
       __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                 (int *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
                    /* catch() { ... } // from try @ 00fddd84 with catch @ 00fddd18
                       catch() { ... } // from try @ 00fdde48 with catch @ 00fddd18 */
  uVar8 = *(ulong *)(param_1 + 2);
  uVar9 = (ulong)*(int *)param_2;
  if (uVar8 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar8 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar8 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar8 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar8 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar8 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar8 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar8 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar8))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar4 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar4 < 2) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar6 * uVar8;
      }
    }
    plVar7 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
                    /* try { // try from 00fddd7c to 010ddd83 has its CatchHandler @ 00fddeac */
    if (plVar7 != (long *)0x0) {
                    /* try { // try from 00fddd84 to 010dde43 has its CatchHandler @ 00fddd18 */
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar9) {
          if (uVar4 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar2 = 0;
            if (uVar8 != 0) {
              uVar2 = uVar6 / uVar8;
            }
            if (uVar6 - uVar2 * uVar8 == unaff_x24) goto LAB_00fddd9c;
            break;
          }
          if (uVar6 != unaff_x24) break;
        }
LAB_00fddd9c:
        if (*(int *)(plVar7 + 2) == *(int *)param_2) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x18);
  uVar1 = **(undefined4 **)param_4;
  *(undefined1 *)((long)plVar7 + 0x14) = 0;
  *plVar7 = 0;
  plVar7[1] = uVar9;
  *(undefined4 *)(plVar7 + 2) = uVar1;
  if ((uVar8 == 0) || ((float)param_1[8] * (float)uVar8 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
                    /* try { // try from 00fdde44 to 010dde47 has its CatchHandler @ 00fddec0 */
                    /* try { // try from 00fdde48 to 010ddedb has its CatchHandler @ 00fddd18 */
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,bool>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,bool>>>
            *)param_1,uVar4);
    uVar8 = *(ulong *)(param_1 + 2);
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x24 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar5 = *(long *)param_1;
  plVar3 = *(long **)(lVar5 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)(param_1 + 4);
                    /* catch() { ... } // from try @ 00fddd7c with catch @ 00fddeac */
    *plVar7 = *plVar3;
    *plVar3 = (long)plVar7;
    *(long **)(lVar5 + unaff_x24 * 8) = plVar3;
    if (*plVar7 == 0) goto LAB_00fddef4;
                    /* catch() { ... } // from try @ 00fdde44 with catch @ 00fddec0 */
    uVar9 = *(ulong *)(*plVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
                    /* catch() { ... } // from try @ 00fddf68 with catch @ 00fddedc
                       catch() { ... } // from try @ 00fde008 with catch @ 00fddedc */
      uVar9 = uVar9 - uVar4 * uVar8;
    }
    plVar3 = (long *)(*(long *)param_1 + uVar9 * 8);
  }
  else {
    *plVar7 = *plVar3;
  }
  *plVar3 = (long)plVar7;
LAB_00fddef4:
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return plVar7;
}

