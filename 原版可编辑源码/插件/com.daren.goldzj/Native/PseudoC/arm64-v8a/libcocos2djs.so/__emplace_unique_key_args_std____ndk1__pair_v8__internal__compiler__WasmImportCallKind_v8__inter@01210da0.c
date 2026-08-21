
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, v8::internal::wasm::WasmCode*>,
   void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, v8::internal::wasm::WasmCode*>,
   std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>,
   std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, v8::internal::wasm::WasmCode*>,
   v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash, true>,
   std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>,
   std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, v8::internal::wasm::WasmCode*>,
   std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> >, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, v8::internal::wasm::WasmCode*> >
   >::__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, std::__ndk1::piecewise_construct_t
   const&, std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&>, std::__ndk1::tuple<>
   >(std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&,
   std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&>&&, std::__ndk1::tuple<>&&) */

long * std::__ndk1::
       __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>>>
       ::
       __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>const&>,std::__ndk1::tuple<>>
                 (pair *param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  pair *ppVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x25;
  undefined2 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar2 = v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash::operator()
                    ((CacheKeyHash *)(param_1 + 0x18),(pair *)param_2);
  uVar9 = *(ulong *)(param_1 + 8);
  if (uVar9 != 0) {
    uVar11 = CONCAT17(POPCOUNT((char)(uVar9 >> 0x38)),
                      CONCAT16(POPCOUNT((char)(uVar9 >> 0x30)),
                               CONCAT15(POPCOUNT((char)(uVar9 >> 0x28)),
                                        CONCAT14(POPCOUNT((char)(uVar9 >> 0x20)),
                                                 CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                                          CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                                   CONCAT11(POPCOUNT((char)(uVar9 >>
                                                                                           8)),
                                                                            POPCOUNT((char)uVar9))))
                                                ))));
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar5 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar5 < 2) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar7 * uVar9;
      }
    }
    plVar8 = *(long **)(*(long *)param_1 + unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      while (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        if (uVar7 != uVar2) {
          if (uVar5 < 2) {
            uVar7 = uVar7 & uVar9 - 1;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_01210e70;
            break;
          }
          if (uVar7 != unaff_x25) break;
        }
LAB_01210e70:
        if ((*(piecewise_construct_t *)(plVar8 + 2) == *param_2) &&
           (plVar8[3] == *(long *)(param_2 + 8))) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x28);
  lVar12 = (*(long **)param_4)[1];
  lVar6 = **(long **)param_4;
  plVar8[4] = 0;
  *plVar8 = 0;
  plVar8[1] = uVar2;
  plVar8[3] = lVar12;
  plVar8[2] = lVar6;
  if ((uVar9 == 0) ||
     (*(float *)(param_1 + 0x20) * (float)uVar9 < (float)(*(long *)(param_1 + 0x18) + 1))) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(*(long *)(param_1 + 0x18) + 1) / *(float *)(param_1 + 0x20));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>>>
            *)param_1,uVar5);
    uVar9 = *(ulong *)(param_1 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x25 = uVar9 - 1 & uVar2;
    }
    else {
      unaff_x25 = uVar2;
      if (uVar9 <= uVar2) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar2 / uVar9;
        }
        unaff_x25 = uVar2 - uVar5 * uVar9;
      }
    }
  }
  lVar6 = *(long *)param_1;
  plVar3 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    ppVar4 = param_1 + 0x10;
    *plVar8 = *(long *)ppVar4;
    *(long **)ppVar4 = plVar8;
    *(pair **)(lVar6 + unaff_x25 * 8) = ppVar4;
    if (*plVar8 == 0) goto LAB_01210fa0;
    uVar2 = *(ulong *)(*plVar8 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar2 = uVar2 & uVar9 - 1;
    }
    else if (uVar9 <= uVar2) {
      uVar5 = 0;
      if (uVar9 != 0) {
        uVar5 = uVar2 / uVar9;
      }
      uVar2 = uVar2 - uVar5 * uVar9;
    }
    plVar3 = (long *)(*(long *)param_1 + uVar2 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
  *plVar3 = (long)plVar8;
LAB_01210fa0:
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
  return plVar8;
}

