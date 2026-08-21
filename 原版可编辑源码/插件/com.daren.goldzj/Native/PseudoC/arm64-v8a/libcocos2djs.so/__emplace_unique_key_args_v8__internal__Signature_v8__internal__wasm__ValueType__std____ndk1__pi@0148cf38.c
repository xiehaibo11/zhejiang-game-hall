
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
   v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,
   unsigned int> >
   >::__emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Signature<v8::internal::wasm::ValueType> const&>,
   std::__ndk1::tuple<> >(v8::internal::Signature<v8::internal::wasm::ValueType> const&,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Signature<v8::internal::wasm::ValueType> const&>&&,
   std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
       ::
       __emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Signature<v8::internal::wasm::ValueType>const&>,std::__ndk1::tuple<>>
                 (Signature *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  Zone *this;
  long *plVar4;
  Signature *pSVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  ulong unaff_x25;
  undefined2 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  
  uVar2 = v8::base::hash_combine(*(ulong *)(param_2 + 8),*(ulong *)param_2);
  pbVar12 = *(byte **)(param_2 + 0x10);
  if (pbVar12 != pbVar12 + *(long *)(param_2 + 8) + *(long *)param_2) {
    lVar7 = *(long *)param_2 + *(long *)(param_2 + 8);
    do {
      uVar3 = v8::base::hash_combine(0,(ulong)*pbVar12);
      uVar2 = v8::base::hash_value(uVar2);
      uVar2 = v8::base::hash_combine(uVar3,uVar2);
      lVar7 = lVar7 + -1;
      unaff_x25 = 0;
      pbVar12 = pbVar12 + 1;
    } while (lVar7 != 0);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 != 0) {
    uVar14 = CONCAT17(POPCOUNT((char)(uVar3 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar3 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar3 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar3 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar3 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar3 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar3 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar3))))
                                                ))));
    uVar13 = NEON_uaddlv(uVar14,1);
    uVar8 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
    if (uVar8 < 2) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar9 = 0;
        if (uVar3 != 0) {
          uVar9 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar9 * uVar3;
      }
    }
    plVar6 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      lVar7 = *(long *)param_2;
      lVar15 = *(long *)(param_2 + 8);
      do {
        uVar9 = plVar6[1];
        if (uVar9 != uVar2) {
          if (uVar8 < 2) {
            uVar9 = uVar9 & uVar3 - 1;
          }
          else if (uVar3 <= uVar9) {
            uVar1 = 0;
            if (uVar3 != 0) {
              uVar1 = uVar9 / uVar3;
            }
            if (uVar9 - uVar1 * uVar3 == unaff_x25) goto LAB_0148d06c;
            break;
          }
          if (uVar9 != unaff_x25) break;
        }
LAB_0148d06c:
        if ((piecewise_construct_t *)(plVar6 + 2) == param_2) {
          return plVar6;
        }
        if ((plVar6[3] == lVar15) && (plVar6[2] == lVar7)) {
          pcVar10 = (char *)plVar6[4];
          lVar16 = lVar7 + lVar15;
          pcVar11 = *(char **)(param_2 + 0x10);
          if (pcVar10 == pcVar10 + lVar15 + lVar7) {
            return plVar6;
          }
          while (*pcVar10 == *pcVar11) {
            pcVar10 = pcVar10 + 1;
            lVar16 = lVar16 + -1;
            pcVar11 = pcVar11 + 1;
            if (lVar16 == 0) {
              return plVar6;
            }
          }
        }
        plVar6 = (long *)*plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  this = *(Zone **)(param_1 + 0x20);
  plVar6 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar6) < 0x30) {
    plVar6 = (long *)v8::internal::Zone::NewExpand(this,0x30);
  }
  else {
    *(long **)(this + 0x10) = plVar6 + 6;
  }
  plVar4 = *(long **)param_4;
  lVar7 = plVar4[2];
  lVar16 = plVar4[1];
  lVar15 = *plVar4;
  *(undefined4 *)(plVar6 + 5) = 0;
  *plVar6 = 0;
  plVar6[1] = uVar2;
  plVar6[4] = lVar7;
  plVar6[3] = lVar16;
  plVar6[2] = lVar15;
  if ((uVar3 == 0) ||
     (*(float *)(param_1 + 0x30) * (float)uVar3 < (float)(*(long *)(param_1 + 0x28) + 1))) {
    uVar3 = (ulong)(uVar3 < 3 || (uVar3 & uVar3 - 1) != 0) | uVar3 << 1;
    uVar8 = (ulong)((float)(*(long *)(param_1 + 0x28) + 1) / *(float *)(param_1 + 0x30));
    if (uVar8 <= uVar3) {
      uVar8 = uVar3;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
            *)param_1,uVar8);
    uVar3 = *(ulong *)(param_1 + 8);
    if ((uVar3 & uVar3 - 1) == 0) {
      unaff_x25 = uVar3 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar3 <= uVar2) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        unaff_x25 = uVar2 - uVar8 * uVar3;
      }
    }
  }
  plVar4 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
  if (plVar4 == (long *)0x0) {
    pSVar5 = param_1 + 0x18;
    *plVar6 = *(long *)pSVar5;
    *(long **)pSVar5 = plVar6;
    *(Signature **)(*(long *)param_1 + unaff_x25 * 8) = pSVar5;
    if (*plVar6 != 0) {
      uVar2 = *(ulong *)(*plVar6 + 8);
      if ((uVar3 & uVar3 - 1) == 0) {
        uVar2 = uVar2 & uVar3 - 1;
      }
      else if (uVar3 <= uVar2) {
        uVar8 = 0;
        if (uVar3 != 0) {
          uVar8 = uVar2 / uVar3;
        }
        uVar2 = uVar2 - uVar8 * uVar3;
      }
      *(long **)(*(long *)param_1 + uVar2 * 8) = plVar6;
    }
  }
  else {
    *plVar6 = *plVar4;
    *plVar4 = (long)plVar6;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return plVar6;
}

