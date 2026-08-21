
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, unsigned int>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   unsigned int>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, unsigned int> >
   >::__emplace_unique_key_args<unsigned int, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned int&&>, std::__ndk1::tuple<> >(unsigned int const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned int&&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
       ::
       __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int&&>,std::__ndk1::tuple<>>
                 (uint *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  uint *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(ulong *)(param_1 + 2);
  uVar1 = *(uint *)param_2;
  uVar11 = (ulong)uVar1;
  if (uVar10 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar11) {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar3 = 0;
            if (uVar10 != 0) {
              uVar3 = uVar8 / uVar10;
            }
            if (uVar8 - uVar3 * uVar10 == unaff_x24) goto LAB_00efe788;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_00efe788:
        if (*(uint *)(plVar9 + 2) == uVar1) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x18);
  uVar2 = **(undefined4 **)param_4;
  *plVar9 = 0;
  plVar9[1] = uVar11;
  *(undefined4 *)(plVar9 + 2) = uVar2;
  *(undefined4 *)((long)plVar9 + 0x14) = 0;
  if ((uVar10 == 0) || ((float)param_1[8] * (float)uVar10 < (float)(*(long *)(param_1 + 6) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(*(long *)(param_1 + 6) + 1) / (float)param_1[8]);
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,unsigned_int>>>
            *)param_1,uVar6);
    uVar10 = *(ulong *)(param_1 + 2);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x24 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *(long *)param_1;
  plVar4 = *(long **)(lVar7 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    puVar5 = param_1 + 4;
    *plVar9 = *(long *)puVar5;
    *(long **)puVar5 = plVar9;
    *(uint **)(lVar7 + unaff_x24 * 8) = puVar5;
    if (*plVar9 == 0) goto LAB_00efe8e0;
    uVar11 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar11 = uVar11 & uVar10 - 1;
    }
    else if (uVar10 <= uVar11) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar11 / uVar10;
      }
      uVar11 = uVar11 - uVar6 * uVar10;
    }
    plVar4 = (long *)(*(long *)param_1 + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar4;
  }
  *plVar4 = (long)plVar9;
LAB_00efe8e0:
  *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
  return plVar9;
}

