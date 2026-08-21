
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<unsigned
   int, v8::internal::HeapEntry*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<unsigned int, v8::internal::HeapEntry*>,
   std::__ndk1::__unordered_map_hasher<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::HeapEntry*>, std::__ndk1::hash<unsigned int>, true>,
   std::__ndk1::__unordered_map_equal<unsigned int, std::__ndk1::__hash_value_type<unsigned int,
   v8::internal::HeapEntry*>, std::__ndk1::equal_to<unsigned int>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned int, v8::internal::HeapEntry*> >
   >::__emplace_unique_key_args<unsigned int, unsigned int, v8::internal::HeapEntry*>(unsigned int
   const&, unsigned int&&, v8::internal::HeapEntry*&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
::__emplace_unique_key_args<unsigned_int,unsigned_int,v8::internal::HeapEntry*>
          (__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
           *this,uint *param_1,uint *param_2,HeapEntry **param_3)

{
  uint uVar1;
  ulong uVar2;
  HeapEntry *pHVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
  *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  
  uVar10 = *(ulong *)(this + 8);
  uVar1 = *param_1;
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
      unaff_x25 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar8 = 0;
        if (uVar10 != 0) {
          uVar8 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar8 * uVar10;
      }
    }
    plVar9 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar9 != (long *)0x0) {
      for (plVar9 = (long *)*plVar9; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        uVar8 = plVar9[1];
        if (uVar8 != uVar11) {
          if (uVar6 < 2) {
            uVar8 = uVar8 & uVar10 - 1;
          }
          else if (uVar10 <= uVar8) {
            uVar2 = 0;
            if (uVar10 != 0) {
              uVar2 = uVar8 / uVar10;
            }
            if (uVar8 - uVar2 * uVar10 == unaff_x25) goto LAB_011aa1e8;
            break;
          }
          if (uVar8 != unaff_x25) break;
        }
LAB_011aa1e8:
        if (*(uint *)(plVar9 + 2) == uVar1) {
          return plVar9;
        }
      }
    }
  }
  plVar9 = operator_new(0x20);
  *(uint *)(plVar9 + 2) = *param_2;
  pHVar3 = *param_3;
  *plVar9 = 0;
  plVar9[1] = uVar11;
  plVar9[3] = (long)pHVar3;
  if ((uVar10 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar10 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar10 = (ulong)(uVar10 < 3 || (uVar10 & uVar10 - 1) != 0) | uVar10 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar10) {
      uVar6 = uVar10;
    }
    rehash(this,uVar6);
    uVar10 = *(ulong *)(this + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      unaff_x25 = (ulong)((int)uVar10 - 1U & uVar1);
    }
    else {
      unaff_x25 = uVar11;
      if (uVar10 <= uVar11) {
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar11 / uVar10;
        }
        unaff_x25 = uVar11 - uVar6 * uVar10;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar4 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar9 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar9;
    *(__hash_table<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,v8::internal::HeapEntry*>>>
      **)(lVar7 + unaff_x25 * 8) = p_Var5;
    if (*plVar9 == 0) goto LAB_011aa344;
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
    plVar4 = (long *)(*(long *)this + uVar11 * 8);
  }
  else {
    *plVar9 = *plVar4;
  }
  *plVar4 = (long)plVar9;
LAB_011aa344:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar9;
}

