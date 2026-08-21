
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,
   unsigned long>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned
   long>, std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,
   std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned long>,
   v8::internal::Object::Hasher, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,
   std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned long>,
   std::__ndk1::equal_to<v8::internal::AllocationSite>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite, unsigned
   long> > >::__emplace_unique_key_args<v8::internal::AllocationSite,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::AllocationSite&&>,
   std::__ndk1::tuple<> >(v8::internal::AllocationSite const&, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<v8::internal::AllocationSite&&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
       ::
       __emplace_unique_key_args<v8::internal::AllocationSite,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::AllocationSite&&>,std::__ndk1::tuple<>>
                 (AllocationSite *param_1,piecewise_construct_t *param_2,tuple *param_3,
                 tuple *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  AllocationSite *pAVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(ulong *)(param_1 + 8);
  uVar1 = *(uint *)param_2;
  uVar10 = (ulong)uVar1;
  if (uVar9 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + unaff_x24 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if (uVar6 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar2 = 0;
            if (uVar9 != 0) {
              uVar2 = uVar7 / uVar9;
            }
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_00fe5890;
            break;
          }
          if (uVar7 != unaff_x24) break;
        }
LAB_00fe5890:
        if (*(uint *)(plVar8 + 2) == uVar1) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  lVar3 = **(long **)param_4;
  *plVar8 = 0;
  plVar8[1] = uVar10;
  plVar8[2] = lVar3;
  plVar8[3] = 0;
  if ((uVar9 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar9 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::__unordered_map_hasher<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::AllocationSite,std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>,std::__ndk1::equal_to<v8::internal::AllocationSite>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::AllocationSite,unsigned_long>>>
            *)param_1,uVar6);
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = (ulong)((int)uVar9 - 1U & uVar1);
    }
    else {
      unaff_x24 = uVar10;
      if (uVar9 <= uVar10) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = uVar10 / uVar9;
        }
        unaff_x24 = uVar10 - uVar6 * uVar9;
      }
    }
  }
  lVar3 = *(long *)param_1;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    pAVar5 = param_1 + 0x10;
    *plVar8 = *(long *)pAVar5;
    *(long **)pAVar5 = plVar8;
    *(AllocationSite **)(lVar3 + unaff_x24 * 8) = pAVar5;
    if (*plVar8 == 0) goto LAB_00fe59e8;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar6 = 0;
      if (uVar9 != 0) {
        uVar6 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar6 * uVar9;
    }
    plVar4 = (long *)(*(long *)param_1 + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_00fe59e8:
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return plVar8;
}

