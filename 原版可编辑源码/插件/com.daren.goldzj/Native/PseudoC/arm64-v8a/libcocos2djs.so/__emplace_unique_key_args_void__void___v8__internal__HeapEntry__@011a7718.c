
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<void*,
   v8::internal::HeapEntry*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<void*, v8::internal::HeapEntry*>,
   std::__ndk1::__unordered_map_hasher<void*, std::__ndk1::__hash_value_type<void*,
   v8::internal::HeapEntry*>, std::__ndk1::hash<void*>, true>,
   std::__ndk1::__unordered_map_equal<void*, std::__ndk1::__hash_value_type<void*,
   v8::internal::HeapEntry*>, std::__ndk1::equal_to<void*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*, v8::internal::HeapEntry*> >
   >::__emplace_unique_key_args<void*, void*&, v8::internal::HeapEntry*>(void* const&, void*&,
   v8::internal::HeapEntry*&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
::__emplace_unique_key_args<void*,void*&,v8::internal::HeapEntry*>
          (__hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
           *this,void **param_1,void **param_2,HeapEntry **param_3)

{
  ulong uVar1;
  void *pvVar2;
  HeapEntry *pHVar3;
  long *plVar4;
  __hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
  *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x25;
  undefined2 uVar12;
  undefined8 uVar13;
  
  pvVar2 = *param_1;
  uVar8 = ((ulong)(uint)((int)pvVar2 << 3) + 8 ^ (ulong)pvVar2 >> 0x20) * -0x622015f714c7d297;
  uVar11 = *(ulong *)(this + 8);
  uVar8 = (uVar8 ^ (ulong)pvVar2 >> 0x20 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  uVar8 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
  if (uVar11 != 0) {
    uVar13 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar11 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar11 
                                                  >> 8)),POPCOUNT((char)uVar11))))))));
    uVar12 = NEON_uaddlv(uVar13,1);
    uVar6 = CONCAT62((int6)((ulong)uVar13 >> 0x10),uVar12) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x25 = uVar8 & uVar11 - 1;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar11 <= uVar8) {
        uVar9 = 0;
        if (uVar11 != 0) {
          uVar9 = uVar8 / uVar11;
        }
        unaff_x25 = uVar8 - uVar9 * uVar11;
      }
    }
    plVar10 = *(long **)(*(long *)this + unaff_x25 * 8);
    if (plVar10 != (long *)0x0) {
      for (plVar10 = (long *)*plVar10; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 != uVar8) {
          if (uVar6 < 2) {
            uVar9 = uVar9 & uVar11 - 1;
          }
          else if (uVar11 <= uVar9) {
            uVar1 = 0;
            if (uVar11 != 0) {
              uVar1 = uVar9 / uVar11;
            }
            if (uVar9 - uVar1 * uVar11 == unaff_x25) goto LAB_011a77e4;
            break;
          }
          if (uVar9 != unaff_x25) break;
        }
LAB_011a77e4:
        if ((void *)plVar10[2] == pvVar2) {
          return plVar10;
        }
      }
    }
  }
  plVar10 = operator_new(0x20);
  pvVar2 = *param_2;
  plVar10[1] = uVar8;
  plVar10[2] = (long)pvVar2;
  pHVar3 = *param_3;
  *plVar10 = 0;
  plVar10[3] = (long)pHVar3;
  if ((uVar11 == 0) ||
     (*(float *)(this + 0x20) * (float)uVar11 < (float)(*(long *)(this + 0x18) + 1))) {
    uVar11 = (ulong)(uVar11 < 3 || (uVar11 & uVar11 - 1) != 0) | uVar11 << 1;
    uVar6 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar6 <= uVar11) {
      uVar6 = uVar11;
    }
    rehash(this,uVar6);
    uVar11 = *(ulong *)(this + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x25 = uVar11 - 1 & uVar8;
    }
    else {
      unaff_x25 = uVar8;
      if (uVar11 <= uVar8) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar8 / uVar11;
        }
        unaff_x25 = uVar8 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *(long *)this;
  plVar4 = *(long **)(lVar7 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    p_Var5 = this + 0x10;
    *plVar10 = *(long *)p_Var5;
    *(long **)p_Var5 = plVar10;
    *(__hash_table<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::__unordered_map_hasher<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::hash<void*>,true>,std::__ndk1::__unordered_map_equal<void*,std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>,std::__ndk1::equal_to<void*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<void*,v8::internal::HeapEntry*>>>
      **)(lVar7 + unaff_x25 * 8) = p_Var5;
    if (*plVar10 == 0) goto LAB_011a793c;
    uVar8 = *(ulong *)(*plVar10 + 8);
    if ((uVar11 & uVar11 - 1) == 0) {
      uVar8 = uVar8 & uVar11 - 1;
    }
    else if (uVar11 <= uVar8) {
      uVar6 = 0;
      if (uVar11 != 0) {
        uVar6 = uVar8 / uVar11;
      }
      uVar8 = uVar8 - uVar6 * uVar11;
    }
    plVar4 = (long *)(*(long *)this + uVar8 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_011a793c:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar10;
}

