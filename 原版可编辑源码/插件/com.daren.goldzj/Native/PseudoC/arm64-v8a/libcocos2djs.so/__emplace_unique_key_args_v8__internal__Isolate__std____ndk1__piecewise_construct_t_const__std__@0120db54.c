
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,
   std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo> > >, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,
   std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo> > >,
   std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,
   std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo> > >,
   std::__ndk1::hash<v8::internal::Isolate*>, true>,
   std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,
   std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,
   std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo> > >,
   std::__ndk1::equal_to<v8::internal::Isolate*>, true>,
   std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,
   std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,
   std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo> > > >
   >::__emplace_unique_key_args<v8::internal::Isolate*, std::__ndk1::piecewise_construct_t const&,
   std::__ndk1::tuple<v8::internal::Isolate* const&>, std::__ndk1::tuple<> >(v8::internal::Isolate*
   const&, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<v8::internal::Isolate*
   const&>&&, std::__ndk1::tuple<>&&) */

Isolate * std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                    (Isolate **param_1,piecewise_construct_t *param_2,tuple *param_3,tuple *param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  Isolate **ppIVar4;
  Isolate *pIVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Isolate *pIVar8;
  Isolate *pIVar9;
  Isolate *unaff_x24;
  undefined2 uVar10;
  
  uVar2 = *(ulong *)param_2;
  uVar6 = ((ulong)(uint)((int)uVar2 << 3) + 8 ^ uVar2 >> 0x20) * -0x622015f714c7d297;
  pIVar8 = param_1[1];
  uVar6 = (uVar6 ^ uVar2 >> 0x20 ^ uVar6 >> 0x2f) * -0x622015f714c7d297;
  pIVar9 = (Isolate *)((uVar6 ^ uVar6 >> 0x2f) * -0x622015f714c7d297);
  if (pIVar8 != (Isolate *)0x0) {
    uVar3 = CONCAT17(POPCOUNT((char)((ulong)pIVar8 >> 0x38)),
                     CONCAT16(POPCOUNT((char)((ulong)pIVar8 >> 0x30)),
                              CONCAT15(POPCOUNT((char)((ulong)pIVar8 >> 0x28)),
                                       CONCAT14(POPCOUNT((char)((ulong)pIVar8 >> 0x20)),
                                                CONCAT13(POPCOUNT((char)((ulong)pIVar8 >> 0x18)),
                                                         CONCAT12(POPCOUNT((char)((ulong)pIVar8 >>
                                                                                 0x10)),
                                                                  CONCAT11(POPCOUNT((char)((ulong)
                                                  pIVar8 >> 8)),POPCOUNT((char)pIVar8))))))));
    uVar10 = NEON_uaddlv(uVar3,1);
    uVar6 = CONCAT62((int6)((ulong)uVar3 >> 0x10),uVar10) & 0xffffffff;
    if (uVar6 < 2) {
      unaff_x24 = (Isolate *)((ulong)pIVar9 & (ulong)(pIVar8 + -1));
    }
    else {
      unaff_x24 = pIVar9;
      if (pIVar8 <= pIVar9) {
        uVar1 = 0;
        if (pIVar8 != (Isolate *)0x0) {
          uVar1 = (ulong)pIVar9 / (ulong)pIVar8;
        }
        unaff_x24 = pIVar9 + -(uVar1 * (long)pIVar8);
      }
    }
    if (*(long **)(*param_1 + (long)unaff_x24 * 8) != (long *)0x0) {
      for (pIVar7 = (Isolate *)**(long **)(*param_1 + (long)unaff_x24 * 8); pIVar7 != (Isolate *)0x0
          ; pIVar7 = *(Isolate **)pIVar7) {
        pIVar5 = *(Isolate **)(pIVar7 + 8);
        if (pIVar5 != pIVar9) {
          if (uVar6 < 2) {
            pIVar5 = (Isolate *)((ulong)pIVar5 & (ulong)(pIVar8 + -1));
          }
          else if (pIVar8 <= pIVar5) {
            uVar1 = 0;
            if (pIVar8 != (Isolate *)0x0) {
              uVar1 = (ulong)pIVar5 / (ulong)pIVar8;
            }
            if (pIVar5 + -(uVar1 * (long)pIVar8) == unaff_x24) goto LAB_0120dc18;
            break;
          }
          if (pIVar5 != unaff_x24) break;
        }
LAB_0120dc18:
        if (*(ulong *)(pIVar7 + 0x10) == uVar2) {
          return pIVar7;
        }
      }
    }
  }
  pIVar7 = operator_new(0x20);
  uVar3 = **(undefined8 **)param_4;
  *(undefined8 *)pIVar7 = 0;
  *(Isolate **)(pIVar7 + 8) = pIVar9;
  *(undefined8 *)(pIVar7 + 0x10) = uVar3;
  *(undefined8 *)(pIVar7 + 0x18) = 0;
  if ((pIVar8 == (Isolate *)0x0) ||
     (*(float *)(param_1 + 4) * (float)pIVar8 < (float)(param_1[3] + 1))) {
    uVar2 = (ulong)(pIVar8 < (Isolate *)0x3 || ((ulong)pIVar8 & (ulong)(pIVar8 + -1)) != 0) |
            (long)pIVar8 << 1;
    uVar6 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar6 <= uVar2) {
      uVar6 = uVar2;
    }
    rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
            *)param_1,uVar6);
    pIVar8 = param_1[1];
    if (((ulong)pIVar8 & (ulong)(pIVar8 + -1)) == 0) {
      unaff_x24 = (Isolate *)((ulong)(pIVar8 + -1) & (ulong)pIVar9);
    }
    else {
      unaff_x24 = pIVar9;
      if (pIVar8 <= pIVar9) {
        uVar2 = 0;
        if (pIVar8 != (Isolate *)0x0) {
          uVar2 = (ulong)pIVar9 / (ulong)pIVar8;
        }
        unaff_x24 = pIVar9 + -(uVar2 * (long)pIVar8);
      }
    }
  }
  pIVar5 = *param_1;
  pIVar9 = *(Isolate **)(pIVar5 + (long)unaff_x24 * 8);
  if (pIVar9 == (Isolate *)0x0) {
    ppIVar4 = param_1 + 2;
    *(Isolate **)pIVar7 = *ppIVar4;
    *ppIVar4 = pIVar7;
    *(Isolate ***)(pIVar5 + (long)unaff_x24 * 8) = ppIVar4;
    if (*(long *)pIVar7 == 0) goto LAB_0120dd6c;
    pIVar9 = *(Isolate **)(*(long *)pIVar7 + 8);
    if (((ulong)pIVar8 & (ulong)(pIVar8 + -1)) == 0) {
      pIVar9 = (Isolate *)((ulong)pIVar9 & (ulong)(pIVar8 + -1));
    }
    else if (pIVar8 <= pIVar9) {
      uVar2 = 0;
      if (pIVar8 != (Isolate *)0x0) {
        uVar2 = (ulong)pIVar9 / (ulong)pIVar8;
      }
      pIVar9 = pIVar9 + -(uVar2 * (long)pIVar8);
    }
    pIVar9 = *param_1 + (long)pIVar9 * 8;
  }
  else {
    *(undefined8 *)pIVar7 = *(undefined8 *)pIVar9;
  }
  *(Isolate **)pIVar9 = pIVar7;
LAB_0120dd6c:
  param_1[3] = param_1[3] + 1;
  return pIVar7;
}

