
undefined4 FUN_015e47fc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong extraout_x1;
  long lVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  Signature *pSVar9;
  long lVar10;
  pair local_a0 [8];
  Signature *local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0x3f800000;
  lVar5 = *(long *)(param_1 + 200);
  uVar1 = *(uint *)(lVar5 + 0x3c);
  if ((int)uVar1 < 1) {
    uVar6 = 0;
  }
  else {
    lVar10 = 0;
    iVar8 = 0;
    while( true ) {
      pSVar9 = *(Signature **)(*(long *)(lVar5 + 0x88) + lVar10);
      uVar3 = v8::internal::wasm::IsJSCompatibleSignature(pSVar9,(WasmFeatures *)(param_1 + 0xc0));
      if ((uVar3 & 1) != 0) {
        local_a0[0] = (pair)0x4;
        local_98 = pSVar9;
        std::__ndk1::
        __hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
        ::
        __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>const&>
                  ((__hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
                    *)&local_90,local_a0,local_a0);
        if ((extraout_x1 & 1) != 0) {
          puVar4 = (undefined8 *)
                   v8::internal::wasm::WasmImportWrapperCache::operator[]
                             (*(WasmImportWrapperCache **)(param_1 + 0x108),local_a0);
          *puVar4 = 0;
          FUN_015e50e4(param_2,iVar8);
        }
      }
      if ((ulong)uVar1 * 0x20 + -0x20 == lVar10) break;
      lVar5 = *(long *)(param_1 + 200);
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x20;
    }
    uVar6 = (undefined4)local_78;
    puVar4 = local_80;
    while (puVar4 != (void *)0x0) {
      pvVar7 = (void *)*puVar4;
      operator_delete(puVar4);
      puVar4 = pvVar7;
    }
  }
  pvVar7 = local_90;
  local_90 = (void *)0x0;
  if (pvVar7 != (void *)0x0) {
    operator_delete(pvVar7);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

