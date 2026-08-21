
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<int,
   std::__ndk1::pair<void*, unsigned int> >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<int, std::__ndk1::pair<void*, unsigned
   int> >, std::__ndk1::__unordered_map_hasher<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::pair<void*, unsigned int> >, std::__ndk1::hash<int>, true>,
   std::__ndk1::__unordered_map_equal<int, std::__ndk1::__hash_value_type<int,
   std::__ndk1::pair<void*, unsigned int> >, std::__ndk1::equal_to<int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<int, std::__ndk1::pair<void*, unsigned int>
   > > >::__emplace_unique_key_args<int, int&, std::__ndk1::pair<void*, unsigned int> >(int const&,
   int&, std::__ndk1::pair<void*, unsigned int>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
::__emplace_unique_key_args<int,int&,std::__ndk1::pair<void*,unsigned_int>>
          (__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
           *this,int *param_1,int *param_2,pair *param_3)

{
  ulong uVar1;
  long *plVar2;
  __hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
  *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar8 = *(ulong *)(this + 8);
  uVar9 = (ulong)*param_1;
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
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar6 * uVar8;
      }
    }
                    /* catch() { ... } // from try @ 00fd1cb4 with catch @ 00fd1d2c */
    plVar7 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar7 != (long *)0x0) {
      for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        uVar6 = plVar7[1];
        if (uVar6 != uVar9) {
          if (uVar4 < 2) {
            uVar6 = uVar6 & uVar8 - 1;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            if (uVar6 - uVar1 * uVar8 == unaff_x25) goto LAB_00fd1d54;
            break;
          }
          if (uVar6 != unaff_x25) break;
        }
LAB_00fd1d54:
        if (*(int *)(plVar7 + 2) == *param_1) {
          return plVar7;
        }
      }
    }
  }
  plVar7 = operator_new(0x28);
  *(int *)(plVar7 + 2) = *param_2;
  lVar12 = *(long *)(param_3 + 8);
  lVar5 = *(long *)param_3;
  *plVar7 = 0;
  plVar7[1] = uVar9;
  plVar7[4] = lVar12;
  plVar7[3] = lVar5;
  if ((uVar8 == 0) || (*(float *)(this + 0x20) * (float)uVar8 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar8 = (ulong)(uVar8 < 3 || (uVar8 & uVar8 - 1) != 0) | uVar8 << 1;
    uVar4 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar4 <= uVar8) {
      uVar4 = uVar8;
    }
    rehash(this,uVar4);
    uVar8 = *(ulong *)(this + 8);
    if ((uVar8 & uVar8 - 1) == 0) {
                    /* catch() { ... } // from try @ 00fd1e5c with catch @ 00fd1e2c */
      unaff_x25 = uVar8 - 1 & uVar9;
    }
    else {
      unaff_x25 = uVar9;
      if (uVar8 <= uVar9) {
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar9 / uVar8;
        }
        unaff_x25 = uVar9 - uVar4 * uVar8;
      }
    }
  }
  lVar5 = *(long *)this;
  plVar2 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 00fd1e5c to 010d1ee7 has its CatchHandler @ 00fd1e2c */
    p_Var3 = this + 0x10;
    *plVar7 = *(long *)p_Var3;
    *(long **)p_Var3 = plVar7;
    *(__hash_table<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,std::__ndk1::pair<void*,unsigned_int>>>>
      **)(lVar5 + unaff_x25 * 8) = p_Var3;
    if (*plVar7 == 0) goto LAB_00fd1eac;
    uVar9 = *(ulong *)(*plVar7 + 8);
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
    plVar2 = (long *)(*(long *)this + uVar9 * 8);
  }
  else {
                    /* try { // try from 00fd1e54 to 010d1e5b has its CatchHandler @ 00fd1ecc */
    *plVar7 = *plVar2;
  }
  *plVar2 = (long)plVar7;
LAB_00fd1eac:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
                    /* catch() { ... } // from try @ 00fd1e54 with catch @ 00fd1ecc */
  return plVar7;
}

