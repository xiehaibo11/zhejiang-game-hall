
/* v8::internal::wasm::WasmEngine::PotentiallyFinishCurrentGC() */

void __thiscall v8::internal::wasm::WasmEngine::PotentiallyFinishCurrentGC(WasmEngine *this)

{
  WasmCode *pWVar1;
  WasmEngine *pWVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  NativeModule *pNVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  void *pvVar12;
  undefined4 uVar13;
  long lVar14;
  void *pvVar15;
  long *plVar16;
  undefined8 local_b0;
  WasmCode *local_a8 [2];
  undefined1 *local_98;
  NativeModule *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  if (FLAG_trace_wasm_code_gc != '\0') {
    PrintF("[wasm-gc] Remaining dead code objects: %zu; outstanding isolates: %zu.\n",
           *(undefined8 *)(*(long *)(this + 0x1b8) + 0x40),
           *(undefined8 *)(*(long *)(this + 0x1b8) + 0x18));
  }
  if (*(long *)(*(long *)(this + 0x1b8) + 0x18) == 0) {
    uStack_88 = 0;
    local_90 = (NativeModule *)0x0;
    uStack_78 = 0;
    local_80 = (undefined8 *)0x0;
    local_70 = 0x3f800000;
    plVar16 = *(long **)(*(long *)(this + 0x1b8) + 0x38);
    if (plVar16 == (long *)0x0) {
      lVar14 = 0;
    }
    else {
      lVar14 = 0;
      do {
        local_a8[0] = (WasmCode *)plVar16[2];
        local_b0 = *(undefined8 *)(local_a8[0] + 0x30);
        local_98 = (undefined1 *)&local_b0;
        lVar9 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
                ::
                __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*&&>,std::__ndk1::tuple<>>
                          ((NativeModule **)(this + 0x188),(piecewise_construct_t *)&local_b0,
                           (tuple *)&DAT_019eee9c,(tuple *)&local_98);
        lVar9 = *(long *)(lVar9 + 0x18);
        FUN_0120b648(lVar9 + 0x28,local_a8);
        std::__ndk1::
        __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
        ::
        __emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
                  ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                    *)(lVar9 + 0x50),local_a8,local_a8);
        pWVar1 = local_a8[0] + 0x8c;
        do {
          iVar3 = *(int *)pWVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pWVar1,0x10);
          if (bVar5) {
            *(int *)pWVar1 = iVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 + -1 == 0) {
          local_b0 = *(undefined8 *)(local_a8[0] + 0x30);
          local_98 = (undefined1 *)&local_b0;
          lVar9 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>>>>
                  ::
                  __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*&&>,std::__ndk1::tuple<>>
                            (&local_90,(piecewise_construct_t *)&local_b0,(tuple *)&DAT_019eee9c,
                             (tuple *)&local_98);
          if (*(long **)(lVar9 + 0x20) == *(long **)(lVar9 + 0x28)) {
            std::__ndk1::
            vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
            ::__push_back_slow_path<v8::internal::wasm::WasmCode*const&>
                      ((vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                        *)(lVar9 + 0x18),local_a8);
          }
          else {
            **(long **)(lVar9 + 0x20) = (long)local_a8[0];
            *(long *)(lVar9 + 0x20) = *(long *)(lVar9 + 0x20) + 8;
          }
          lVar14 = lVar14 + 1;
        }
        plVar16 = (long *)*plVar16;
      } while (plVar16 != (long *)0x0);
    }
    FreeDeadCodeLocked(this,(unordered_map *)&local_90);
    lVar9 = *(long *)(*(long *)(this + 0x1b8) + 0x58);
    uVar13 = 0;
    if (lVar9 != 0) {
      lVar10 = base::TimeTicks::Now();
      local_98 = (undefined1 *)(lVar10 - lVar9);
      uVar11 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_98);
      plVar16 = *(long **)(this + 0x170);
      uVar11 = uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU);
      uVar13 = (undefined4)uVar11;
      if (0x7ffffffe < (long)uVar11) {
        uVar13 = 0x7fffffff;
      }
      for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        Histogram::AddSample((int)*(undefined8 *)(plVar16[3] + 0x50) + 0x1360);
      }
    }
    pWVar2 = this + 0x1b8;
    if (FLAG_trace_wasm_code_gc != '\0') {
      PrintF("[wasm-gc] Took %d us; found %zu dead code objects, freed %zu.\n",uVar13,
             *(undefined8 *)(*(long *)pWVar2 + 0x40),lVar14);
    }
    lVar14 = *(long *)pWVar2;
    cVar4 = *(char *)(lVar14 + 0x51);
    *(undefined8 *)pWVar2 = 0;
    if (lVar14 != 0) {
      FUN_01210550(pWVar2);
    }
    pNVar7 = local_90;
    puVar8 = local_80;
    if (cVar4 != '\0') {
      TriggerGC(this,cVar4);
      pNVar7 = local_90;
      puVar8 = local_80;
    }
    while (puVar8 != (void *)0x0) {
      pvVar12 = (void *)puVar8[3];
      pvVar15 = (void *)*puVar8;
      local_90 = pNVar7;
      if (pvVar12 != (void *)0x0) {
        puVar8[4] = pvVar12;
        operator_delete(pvVar12);
      }
      operator_delete(puVar8);
      pNVar7 = local_90;
      puVar8 = pvVar15;
    }
    local_90 = (NativeModule *)0x0;
    if (pNVar7 != (NativeModule *)0x0) {
      operator_delete(pNVar7);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

