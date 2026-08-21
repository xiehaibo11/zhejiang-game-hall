
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int>,
   std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned
   int>, std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType> >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> >
   >::__emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::pair<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned int>
   >(v8::internal::Signature<v8::internal::wasm::ValueType> const&,
   std::__ndk1::pair<v8::internal::Signature<v8::internal::wasm::ValueType>, unsigned int>&&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
::
__emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::pair<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>
          (__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
           *this,Signature *param_1,pair *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
  *p_Var7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  byte *pbVar14;
  ulong unaff_x25;
  undefined2 uVar15;
  undefined8 uVar16;
  long lVar17;
  
  uVar3 = v8::base::hash_combine(*(ulong *)(param_1 + 8),*(ulong *)param_1);
  pbVar14 = *(byte **)(param_1 + 0x10);
  if (pbVar14 != pbVar14 + *(long *)(param_1 + 8) + *(long *)param_1) {
    lVar5 = *(long *)param_1 + *(long *)(param_1 + 8);
    do {
      uVar4 = v8::base::hash_combine(0,(ulong)*pbVar14);
      uVar3 = v8::base::hash_value(uVar3);
      uVar3 = v8::base::hash_combine(uVar4,uVar3);
      lVar5 = lVar5 + -1;
      unaff_x25 = 0;
      pbVar14 = pbVar14 + 1;
    } while (lVar5 != 0);
  }
  uVar4 = *(ulong *)(this + 8);
  if (uVar4 != 0) {
    uVar16 = CONCAT17(POPCOUNT((char)(uVar4 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar4 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar4 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar4 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar4 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar4))))
                                                ))));
    uVar15 = NEON_uaddlv(uVar16,1);
    uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
    if (uVar9 < 2) {
      unaff_x25 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar4 <= uVar3) {
        uVar10 = 0;
        if (uVar4 != 0) {
          uVar10 = uVar3 / uVar4;
        }
        unaff_x25 = uVar3 - uVar10 * uVar4;
      }
    }
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      lVar5 = *(long *)param_1;
      lVar17 = *(long *)(param_1 + 8);
      do {
        uVar10 = plVar8[1];
        if (uVar10 != uVar3) {
          if (uVar9 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar10 / uVar4;
            }
            if (uVar10 - uVar2 * uVar4 == unaff_x25) goto LAB_015fbba0;
            break;
          }
          if (uVar10 != unaff_x25) break;
        }
LAB_015fbba0:
        if ((Signature *)(plVar8 + 2) == param_1) {
          return plVar8;
        }
        if ((plVar8[3] == lVar17) && (plVar8[2] == lVar5)) {
          pcVar11 = (char *)plVar8[4];
          lVar12 = lVar5 + lVar17;
          pcVar13 = *(char **)(param_1 + 0x10);
          if (pcVar11 == pcVar11 + lVar17 + lVar5) {
            return plVar8;
          }
          while (*pcVar11 == *pcVar13) {
            pcVar11 = pcVar11 + 1;
            lVar12 = lVar12 + -1;
            pcVar13 = pcVar13 + 1;
            if (lVar12 == 0) {
              return plVar8;
            }
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
    }
  }
  plVar8 = operator_new(0x30);
  lVar17 = *(long *)param_2;
  lVar5 = *(long *)(param_2 + 0x10);
  plVar8[3] = *(long *)(param_2 + 8);
  plVar8[2] = lVar17;
  plVar8[4] = lVar5;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *plVar8 = 0;
  plVar8[1] = uVar3;
  *(undefined4 *)(plVar8 + 5) = uVar1;
  if ((uVar4 == 0) || (*(float *)(this + 0x20) * (float)uVar4 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar4 = (ulong)(uVar4 < 3 || (uVar4 & uVar4 - 1) != 0) | uVar4 << 1;
    uVar9 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar9 <= uVar4) {
      uVar9 = uVar4;
    }
    rehash(this,uVar9);
    uVar4 = *(ulong *)(this + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      unaff_x25 = uVar4 - 1 & uVar3;
    }
    else {
      unaff_x25 = uVar3;
      if (uVar4 <= uVar3) {
        uVar9 = 0;
        if (uVar4 != 0) {
          uVar9 = uVar3 / uVar4;
        }
        unaff_x25 = uVar3 - uVar9 * uVar4;
      }
    }
  }
  lVar5 = *(long *)this;
  plVar6 = *(long **)(lVar5 + unaff_x25 * 8);
  if (plVar6 == (long *)0x0) {
    p_Var7 = this + 0x10;
    *plVar8 = *(long *)p_Var7;
    *(long **)p_Var7 = plVar8;
    *(__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
      **)(lVar5 + unaff_x25 * 8) = p_Var7;
    if (*plVar8 == 0) goto LAB_015fbd20;
    uVar3 = *(ulong *)(*plVar8 + 8);
    if ((uVar4 & uVar4 - 1) == 0) {
      uVar3 = uVar3 & uVar4 - 1;
    }
    else if (uVar4 <= uVar3) {
      uVar9 = 0;
      if (uVar4 != 0) {
        uVar9 = uVar3 / uVar4;
      }
      uVar3 = uVar3 - uVar9 * uVar4;
    }
    plVar6 = (long *)(*(long *)this + uVar3 * 8);
  }
  else {
    *plVar8 = *plVar6;
  }
  *plVar6 = (long)plVar8;
LAB_015fbd20:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

