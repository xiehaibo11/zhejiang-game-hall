
/* v8::internal::wasm::WasmEngine::FreeDeadCodeLocked(std::__ndk1::unordered_map<v8::internal::wasm::NativeModule*,
   std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*> >,
   std::__ndk1::hash<v8::internal::wasm::NativeModule*>,
   std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::wasm::NativeModule* const,
   std::__ndk1::vector<v8::internal::wasm::WasmCode*,
   std::__ndk1::allocator<v8::internal::wasm::WasmCode*> > > > > const&) */

void __thiscall
v8::internal::wasm::WasmEngine::FreeDeadCodeLocked(WasmEngine *this,unordered_map *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long local_a0;
  byte **local_98;
  byte *local_90;
  char *local_88;
  undefined8 local_80;
  long *local_70;
  long *local_68;
  
  if (DAT_01d3fcc0 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3fcc0 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.wasm");
  }
  pbVar2 = DAT_01d3fcc0;
  local_98 = (byte **)0x0;
  if ((*DAT_01d3fcc0 & 5) == 0) {
    plVar3 = *(long **)(param_1 + 0x10);
  }
  else {
    local_70 = (long *)0x0;
    local_68 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar2,"FreeDeadCode",0,0,0,0,0,0,0,&local_70,0);
    plVar3 = local_68;
    local_68 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_70;
    local_70 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_98 = &local_90;
    local_88 = "FreeDeadCode";
    plVar3 = *(long **)(param_1 + 0x10);
    local_90 = pbVar2;
    local_80 = uVar4;
  }
  if (plVar3 != (long *)0x0) {
    do {
      local_a0 = plVar3[2];
      local_70 = &local_a0;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
              ::
              __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*const&>,std::__ndk1::tuple<>>
                        ((NativeModule **)(this + 0x188),(piecewise_construct_t *)&local_a0,
                         (tuple *)&DAT_019eee9c,(tuple *)&local_70);
      lVar5 = *(long *)(lVar5 + 0x18);
      if (FLAG_trace_wasm_code_gc != '\0') {
        pcVar1 = "";
        if (plVar3[4] - plVar3[3] != 8) {
          pcVar1 = "s";
        }
        PrintF("[wasm-gc] Freeing %zu code object%s of module %p.\n",plVar3[4] - plVar3[3] >> 3,
               pcVar1,local_a0);
      }
      plVar6 = (long *)plVar3[3];
      plVar8 = (long *)plVar3[4];
      if (plVar6 != plVar8) {
        do {
          plVar7 = plVar6 + 1;
          local_70 = (long *)*plVar6;
          FUN_0120b648(lVar5 + 0x50,&local_70);
          plVar6 = plVar7;
        } while (plVar8 != plVar7);
        plVar6 = (long *)plVar3[3];
        plVar8 = (long *)plVar3[4];
      }
      NativeModule::FreeCode(local_a0,plVar6,(long)plVar8 - (long)plVar6 >> 3);
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  if ((local_98 != (byte **)0x0) && (*local_90 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_90,local_88,local_80);
  }
  return;
}

