
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<void*,
   unsigned long>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<void*,
   unsigned long>, std::__ndk1::__unordered_map_hasher<void*, std::__ndk1::__hash_value_type<void*,
   unsigned long>, std::__ndk1::hash<void*>, true>, std::__ndk1::__unordered_map_equal<void*,
   std::__ndk1::__hash_value_type<void*, unsigned long>, std::__ndk1::equal_to<void*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*, unsigned long> >
   >::__emplace_unique_key_args<void*, std::__ndk1::pair<void* const, unsigned long> >(void* const&,
   std::__ndk1::pair<void* const, unsigned long>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
::__emplace_unique_key_args<void*,std::__ndk1::pair<void*const,unsigned_long>>
          (__hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
           *this,void **param_1,pair *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long *plVar3;
  __hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
  *p_Var4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong unaff_x24;
  undefined2 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  pvVar2 = *param_1;
  uVar7 = ((ulong)(uint)((int)pvVar2 << 3) + 8 ^ (ulong)pvVar2 >> 0x20) * -0x622015f714c7d297;
  uVar10 = *(ulong *)(this + 8);
  uVar7 = (uVar7 ^ (ulong)pvVar2 >> 0x20 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  if (uVar10 != 0) {
    uVar12 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar10 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar10 
                                                  >> 8)),POPCOUNT((char)uVar10))))))));
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar5 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x24 = uVar7 & uVar10 - 1;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar10 <= uVar7) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar7 / uVar10;
        }
        unaff_x24 = uVar7 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x24 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar7) {
          if (uVar5 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar1 = 0;
            if (uVar10 != 0) {
              uVar1 = uVar8 / uVar10;
            }
            if (uVar8 - uVar1 * uVar10 == unaff_x24) goto LAB_011aa688;
            break;
          }
          if (uVar8 != unaff_x24) break;
        }
LAB_011aa688:
        if ((void *)plVar9[2] == pvVar2) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x20);
  lVar13 = *(long *)(param_2 + 8);
  lVar6 = *(long *)param_2;
  *plVar9 = 0;
  plVar9[1] = uVar7;
  plVar9[3] = lVar13;
  plVar9[2] = lVar6;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar10) {
      uVar5 = uVar10;
    }
    rehash(this,uVar5);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x24 = uVar10 - 1 & uVar7;
    }
    else {
      unaff_x24 = uVar7;
      if (uVar10 <= uVar7) {
        uVar5 = 0;
        if (uVar10 != 0) {
          uVar5 = uVar7 / uVar10;
        }
        unaff_x24 = uVar7 - uVar5 * uVar10;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar9 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,unsigned_long>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,unsigned_long>>>
      **)(lVar6 + unaff_x24 * 8) = p_Var4;
    if (*plVar9 == 0) goto LAB_011aa7d8;
    uVar7 = *(ulong *)(*plVar9 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar7 = uVar7 & uVar10 - 1;
    }
    else if (uVar10 <= uVar7) {
      uVar5 = 0;
      if (uVar10 != 0) {
        uVar5 = uVar7 / uVar10;
      }
      uVar7 = uVar7 - uVar5 * uVar10;
    }
    plVar3 = (long *)(*(long *)this + uVar7 * 8);
  }
  else {
    *plVar9 = *plVar3;
  }
  *plVar3 = (long)plVar9;
LAB_011aa7d8:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar9;
}

