
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned long, unsigned int>,
   std::__ndk1::__unordered_map_hasher<unsigned long, std::__ndk1::__hash_value_type<unsigned long,
   unsigned int>, std::__ndk1::hash<unsigned long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long, std::__ndk1::__hash_value_type<unsigned long,
   unsigned int>, std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, unsigned int> >
   >::__emplace_unique_key_args<unsigned long, std::__ndk1::pair<unsigned long, unsigned int>
   >(unsigned long const&, std::__ndk1::pair<unsigned long, unsigned int>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
::__emplace_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long,unsigned_int>>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
           *this,ulong *param_1,pair *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
  *p_Var5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  
  uVar9 = *(ulong *)(this + 8);
  uVar10 = *param_1;
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
      unaff_x24 = uVar9 - 1 & uVar10;
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
    plVar8 = *(long **)(*(long *)this + unaff_x24 * 8);
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
            if (uVar7 - uVar2 * uVar9 == unaff_x24) goto LAB_0120896c;
            break;
          }
          if (uVar7 != unaff_x24) break;
        }
LAB_0120896c:
        if (plVar8[2] == uVar10) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  lVar3 = *(long *)param_2;
  plVar8[1] = uVar10;
  plVar8[2] = lVar3;
  uVar1 = *(undefined4 *)(param_2 + 8);
  *plVar8 = 0;
  *(undefined4 *)(plVar8 + 3) = uVar1;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar9) {
      uVar6 = uVar9;
    }
    rehash(this,uVar6);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar10;
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
  lVar3 = *(long *)this;
  plVar4 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
      **)(lVar3 + unaff_x24 * 8) = p_Var5;
    if (*plVar8 == 0) goto LAB_01208ac4;
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
    plVar4 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_01208ac4:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

