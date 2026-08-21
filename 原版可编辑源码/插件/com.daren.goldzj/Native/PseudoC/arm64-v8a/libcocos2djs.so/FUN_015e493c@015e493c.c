
undefined4
FUN_015e493c(Isolate *param_1,WasmEngine *param_2,long param_3,long param_4,WasmFeatures *param_5)

{
  JSToWasmWrapperCompilationUnit *this;
  __shared_weak_count *p_Var1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  __shared_weak_count *p_Var8;
  ulong extraout_x1;
  undefined8 *puVar9;
  long lVar10;
  undefined4 uVar11;
  void *pvVar12;
  JSToWasmWrapperCompilationUnit *local_c0;
  __shared_weak_count *local_b8;
  pair local_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uStack_88 = 0;
  local_90 = (void *)0x0;
  local_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0x3f800000;
  lVar3 = *(long *)(*(long *)(param_3 + 200) + 0xe8);
  lVar4 = *(long *)(*(long *)(param_3 + 200) + 0xf0);
  if (lVar3 == lVar4) {
    uVar11 = 0;
  }
  else {
    cVar5 = *(char *)(lVar3 + 8);
    while( true ) {
      if (cVar5 == '\0') {
        plVar2 = (long *)(*(long *)(*(long *)(param_3 + 200) + 0x88) +
                         (ulong)*(uint *)(lVar3 + 0xc) * 0x20);
        puVar9 = (undefined8 *)*plVar2;
        local_b0[0] = *(pair *)(plVar2 + 3);
        local_98 = puVar9[2];
        uStack_a0 = puVar9[1];
        local_a8 = *puVar9;
        std::__ndk1::
        __hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
        ::
        __emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>const&>
                  ((__hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
                    *)&local_90,local_b0,local_b0);
        if ((extraout_x1 & 1) != 0) {
          p_Var8 = operator_new(0x30);
          *(undefined8 *)(p_Var8 + 8) = 0;
          *(undefined8 *)(p_Var8 + 0x10) = 0;
          *(undefined ***)p_Var8 = &PTR____shared_ptr_emplace_01cc9b18;
          this = (JSToWasmWrapperCompilationUnit *)(p_Var8 + 0x18);
          v8::internal::wasm::JSToWasmWrapperCompilationUnit::JSToWasmWrapperCompilationUnit
                    (this,param_1,param_2,(Signature *)*plVar2,(bool)*(pair *)(plVar2 + 3),param_5);
          puVar9 = *(undefined8 **)(param_4 + 0x48);
          if (puVar9 < *(undefined8 **)(param_4 + 0x50)) {
            *puVar9 = this;
            puVar9[1] = p_Var8;
            local_c0 = (JSToWasmWrapperCompilationUnit *)0x0;
            local_b8 = (__shared_weak_count *)0x0;
            *(long *)(param_4 + 0x48) = *(long *)(param_4 + 0x48) + 0x10;
          }
          else {
            local_c0 = this;
            local_b8 = p_Var8;
            std::__ndk1::
            vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
            ::
            __emplace_back_slow_path<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>
                      ((vector<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>,std::__ndk1::allocator<std::__ndk1::shared_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>
                        *)(param_4 + 0x40),(shared_ptr *)&local_c0);
            p_Var8 = local_b8;
            if (local_b8 != (__shared_weak_count *)0x0) {
              p_Var1 = local_b8 + 8;
              do {
                lVar10 = *(long *)p_Var1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
                if (bVar6) {
                  *(long *)p_Var1 = lVar10 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar10 == 0) {
                (**(code **)(*(long *)local_b8 + 0x10))(local_b8);
                std::__ndk1::__shared_weak_count::__release_weak(p_Var8);
              }
            }
          }
        }
      }
      if (lVar3 + 0x10 == lVar4) break;
      cVar5 = *(char *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x10;
    }
    uVar11 = (undefined4)local_78;
    puVar9 = local_80;
    while (puVar9 != (void *)0x0) {
      pvVar12 = (void *)*puVar9;
      operator_delete(puVar9);
      puVar9 = pvVar12;
    }
  }
  pvVar12 = local_90;
  local_90 = (void *)0x0;
  if (pvVar12 != (void *)0x0) {
    operator_delete(pvVar12);
  }
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

