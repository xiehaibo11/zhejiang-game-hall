
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   long, void*>, void*>*>, bool> std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned
   long, void*>, std::__ndk1::__unordered_map_hasher<unsigned long,
   std::__ndk1::__hash_value_type<unsigned long, void*>, std::__ndk1::hash<unsigned long>, true>,
   std::__ndk1::__unordered_map_equal<unsigned long, std::__ndk1::__hash_value_type<unsigned long,
   void*>, std::__ndk1::equal_to<unsigned long>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned long, void*> >
   >::__emplace_unique_key_args<unsigned long, unsigned long const&, void* const&>(unsigned long
   const&, unsigned long const&, void* const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
::__emplace_unique_key_args<unsigned_long,unsigned_long_const&,void*const&>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
           *this,ulong *param_1,ulong *param_2,void **param_3)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
  *p_Var5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x25;
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
    uVar2 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar10) {
          if (uVar2 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_011aad28;
            break;
          }
          if (uVar7 != unaff_x25) break;
        }
LAB_011aad28:
        if (plVar8[2] == uVar10) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  uVar2 = *param_2;
  plVar8[1] = uVar10;
  plVar8[2] = uVar2;
  pvVar3 = *param_3;
  *plVar8 = 0;
  plVar8[3] = (long)pvVar3;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar2 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar2 <= uVar9) {
      uVar2 = uVar9;
    }
    rehash(this,uVar2);
    uVar9 = *(ulong *)(this + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar9 <= uVar10) {
        uVar2 = 0;
        if (uVar9 != 0) {
          uVar2 = uVar10 / uVar9;
        }
        unaff_x25 = uVar10 - uVar2 * uVar9;
      }
    }
  }
  lVar6 = *(long *)this;
  plVar4 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar8 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,void*>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,void*>>>
      **)(lVar6 + unaff_x25 * 8) = p_Var5;
    if (*plVar8 == 0) goto LAB_011aae80;
    uVar10 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar10 = uVar10 & uVar9 - 1;
    }
    else if (uVar9 <= uVar10) {
      uVar2 = 0;
      if (uVar9 != 0) {
        uVar2 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar2 * uVar9;
    }
    plVar4 = (long *)(*(long *)this + uVar10 * 8);
  }
  else {
    *plVar8 = *plVar4;
  }
  *plVar4 = (long)plVar8;
LAB_011aae80:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

