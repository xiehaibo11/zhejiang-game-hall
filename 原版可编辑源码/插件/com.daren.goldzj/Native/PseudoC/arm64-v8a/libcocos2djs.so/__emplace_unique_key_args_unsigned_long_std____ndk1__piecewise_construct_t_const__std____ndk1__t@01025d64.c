
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long,
   std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> > >,
   std::__ndk1::__unordered_map_hasher<unsigned long, std::__ndk1::__hash_value_type<unsigned long,
   std::__ndk1::unique_ptr<char [], std::__ndk1::default_delete<char []> > >,
   std::__ndk1::hash<unsigned long>, true>, std::__ndk1::__unordered_map_equal<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, std::__ndk1::unique_ptr<char [],
   std::__ndk1::default_delete<char []> > >, std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, std::__ndk1::unique_ptr<char
   [], std::__ndk1::default_delete<char []> > > > >::__emplace_unique_key_args<unsigned long,
   std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<unsigned long const&>,
   std::__ndk1::tuple<> >(unsigned long const&, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<unsigned long const&>&&, std::__ndk1::tuple<>&&) */

ulong * std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
        ::
        __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                  (ulong *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  
  uVar7 = param_1[1];
  uVar8 = *(ulong *)param_2;
  if (uVar7 != 0) {
    uVar10 = CONCAT17(POPCOUNT((char)(uVar7 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar7 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar7 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar7 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar7 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar7 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar7 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar7))))
                                                ))));
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar2 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar4 * uVar7;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (puVar6 = (ulong *)*plVar5; puVar6 != (ulong *)0x0; puVar6 = (ulong *)*puVar6) {
        uVar4 = puVar6[1];
        if (uVar4 != uVar8) {
          if (uVar2 < 2) {
            uVar4 = uVar4 & uVar7 - 1;
          }
          else if (uVar7 <= uVar4) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar4 / uVar7;
            }
            if (uVar4 - uVar1 * uVar7 == unaff_x24) goto LAB_01025df0;
            break;
          }
          if (uVar4 != unaff_x24) break;
        }
LAB_01025df0:
        if (puVar6[2] == uVar8) {
          return puVar6;
        }
      }
    }
  }
  puVar6 = operator_new(0x20);
  uVar2 = **(ulong **)param_4;
  *puVar6 = 0;
  puVar6[1] = uVar8;
  puVar6[2] = uVar2;
  puVar6[3] = 0;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar7 = (ulong)(uVar7 < 3 || (uVar7 & uVar7 - 1) != 0) | uVar7 << 1;
    uVar2 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,std::__ndk1::unique_ptr<char[],std::__ndk1::default_delete<char[]>>>>>
            *)param_1,uVar2);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar8;
    }
    else {
      unaff_x24 = uVar8;
      if (uVar7 <= uVar8) {
        uVar2 = 0;
        if (uVar7 != 0) {
          uVar2 = uVar8 / uVar7;
        }
        unaff_x24 = uVar8 - uVar2 * uVar7;
      }
    }
  }
  uVar8 = *param_1;
  puVar3 = *(ulong **)(uVar8 + unaff_x24 * 8);
  if (puVar3 == (ulong *)0x0) {
    puVar3 = param_1 + 2;
    *puVar6 = *puVar3;
    *puVar3 = (ulong)puVar6;
    *(ulong **)(uVar8 + unaff_x24 * 8) = puVar3;
    if (*puVar6 == 0) goto LAB_01025f44;
    uVar8 = *(ulong *)(*puVar6 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar8 = uVar8 & uVar7 - 1;
    }
    else if (uVar7 <= uVar8) {
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar8 / uVar7;
      }
      uVar8 = uVar8 - uVar2 * uVar7;
    }
    puVar3 = (ulong *)(*param_1 + uVar8 * 8);
  }
  else {
    *puVar6 = *puVar3;
  }
  *puVar3 = (ulong)puVar6;
LAB_01025f44:
  param_1[3] = param_1[3] + 1;
  return puVar6;
}

