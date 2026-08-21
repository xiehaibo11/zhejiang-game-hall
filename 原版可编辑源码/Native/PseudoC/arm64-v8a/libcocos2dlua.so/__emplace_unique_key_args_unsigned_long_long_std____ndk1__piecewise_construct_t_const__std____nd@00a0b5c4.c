
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long long, std::__ndk1::function<void (universe::network::ZhouLuJun*)> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long long,
   std::__ndk1::function<void (universe::network::ZhouLuJun*)> >,
   std::__ndk1::__unordered_map_hasher<unsigned long long, std::__ndk1::__hash_value_type<unsigned
   long long, std::__ndk1::function<void (universe::network::ZhouLuJun*)> >,
   std::__ndk1::hash<unsigned long long>, true>, std::__ndk1::__unordered_map_equal<unsigned long
   long, std::__ndk1::__hash_value_type<unsigned long long, std::__ndk1::function<void
   (universe::network::ZhouLuJun*)> >, std::__ndk1::equal_to<unsigned long long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long long,
   std::__ndk1::function<void (universe::network::ZhouLuJun*)> > >
   >::__emplace_unique_key_args<unsigned long long, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long long const&>, std::__ndk1::tuple<> >(unsigned long long const&,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long long const&>&&,
   std::__ndk1::tuple<>&&) */

ulonglong *
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>>>
::
__emplace_unique_key_args<unsigned_long_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_long_const&>,std::__ndk1::tuple<>>
          (ulonglong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulonglong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_1[1];
  uVar9 = *(ulong *)param_2;
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
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        unaff_x24 = uVar9 - uVar5 * uVar8;
      }
    }
    plVar6 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar6 != (long *)0x0) {
      for (puVar7 = (ulonglong *)*plVar6; puVar7 != (ulonglong *)0x0; puVar7 = (ulonglong *)*puVar7)
      {
        uVar5 = puVar7[1];
        if (uVar5 != uVar9) {
          if (uVar4 < 2) {
            uVar5 = uVar5 & uVar8 - 1;
          }
          else if (uVar8 <= uVar5) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar5 / uVar8;
            }
            if (uVar5 - uVar1 * uVar8 == unaff_x24) goto LAB_00a0b650;
            break;
          }
          if (uVar5 != unaff_x24) break;
        }
LAB_00a0b650:
        if (puVar7[2] == uVar9) {
          return puVar7;
        }
      }
    }
  }
  puVar7 = operator_new(0x50);
  uVar2 = **(ulonglong **)param_4;
  puVar7[8] = 0;
  *puVar7 = 0;
  puVar7[1] = uVar9;
  puVar7[2] = uVar2;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
                    /* try { // try from 00a0b6fc to 00b0b74b has its CatchHandler @ 00a0b6fc
                       catch() { ... } // from try @ 00a0b6fc with catch @ 00a0b6fc
                       catch() { ... } // from try @ 00a0b7a0 with catch @ 00a0b6fc
                       catch() { ... } // from try @ 00a0b7e4 with catch @ 00a0b6fc */
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,std::__ndk1::function<void(universe::network::ZhouLuJun*)>>>>
            *)param_1,uVar4);
    uVar8 = param_1[1];
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
  uVar2 = *param_1;
  puVar3 = *(ulonglong **)(uVar2 + unaff_x24 * 8);
  if (puVar3 == (ulonglong *)0x0) {
    puVar3 = param_1 + 2;
    *puVar7 = *puVar3;
    *puVar3 = (ulonglong)puVar7;
    *(ulonglong **)(uVar2 + unaff_x24 * 8) = puVar3;
    if (*puVar7 == 0) goto LAB_00a0b7a8;
    uVar9 = *(ulong *)(*puVar7 + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
      uVar9 = uVar9 & uVar8 - 1;
    }
    else if (uVar8 <= uVar9) {
      uVar4 = 0;
      if (uVar8 != 0) {
        uVar4 = uVar9 / uVar8;
      }
      uVar9 = uVar9 - uVar4 * uVar8;
    }
                    /* try { // try from 00a0b7a0 to 00b0b7cf has its CatchHandler @ 00a0b6fc */
    puVar3 = (ulonglong *)(*param_1 + uVar9 * 8);
  }
  else {
                    /* try { // try from 00a0b74c to 00b0b79f has its CatchHandler @ 00a0b824 */
    *puVar7 = *puVar3;
  }
  *puVar3 = (ulonglong)puVar7;
LAB_00a0b7a8:
  param_1[3] = param_1[3] + 1;
  return puVar7;
}

