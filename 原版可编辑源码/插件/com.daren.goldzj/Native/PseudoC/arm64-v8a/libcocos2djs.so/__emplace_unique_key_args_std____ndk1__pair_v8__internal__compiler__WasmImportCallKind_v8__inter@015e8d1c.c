
/* std::__ndk1::pair<std::__ndk1::__hash_iterator<std::__ndk1::__hash_node<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>, void*>*>, bool>
   std::__ndk1::__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>,
   v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,
   std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> >,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> >
   >::__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>,
   std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*>
   const&>(std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&,
   std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&) */

long * __thiscall
std::__ndk1::
__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
::
__emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>const&>
          (__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
           *this,pair *param_1,pair *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  __hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
  *p_Var4;
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
                    ((CacheKeyHash *)(this + 0x18),param_1);
  uVar9 = *(ulong *)(this + 8);
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
    plVar8 = *(long **)(*(long *)this + unaff_x25 * 8);
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
            if (uVar7 - uVar1 * uVar9 == unaff_x25) goto LAB_015e8dec;
            break;
          }
          if (uVar7 != unaff_x25) break;
        }
LAB_015e8dec:
        if ((*(pair *)(plVar8 + 2) == *param_1) && (plVar8[3] == *(long *)(param_1 + 8))) {
          return plVar8;
        }
      }
    }
  }
  plVar8 = operator_new(0x20);
  lVar12 = *(long *)(param_2 + 8);
  lVar6 = *(long *)param_2;
  *plVar8 = 0;
  plVar8[1] = uVar2;
  plVar8[3] = lVar12;
  plVar8[2] = lVar6;
  if ((uVar9 == 0) || (*(float *)(this + 0x20) * (float)uVar9 < (float)(*(long *)(this + 0x18) + 1))
     ) {
    uVar9 = (ulong)(uVar9 < 3 || (uVar9 & uVar9 - 1) != 0) | uVar9 << 1;
    uVar5 = (ulong)((float)(*(long *)(this + 0x18) + 1) / *(float *)(this + 0x20));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    rehash(this,uVar5);
    uVar9 = *(ulong *)(this + 8);
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
  lVar6 = *(long *)this;
  plVar3 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    p_Var4 = this + 0x10;
    *plVar8 = *(long *)p_Var4;
    *(long **)p_Var4 = plVar8;
    *(__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
      **)(lVar6 + unaff_x25 * 8) = p_Var4;
    if (*plVar8 == 0) goto LAB_015e8f14;
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
    plVar3 = (long *)(*(long *)this + uVar2 * 8);
  }
  else {
    *plVar8 = *plVar3;
  }
  *plVar3 = (long)plVar8;
LAB_015e8f14:
  *(long *)(this + 0x18) = *(long *)(this + 0x18) + 1;
  return plVar8;
}

