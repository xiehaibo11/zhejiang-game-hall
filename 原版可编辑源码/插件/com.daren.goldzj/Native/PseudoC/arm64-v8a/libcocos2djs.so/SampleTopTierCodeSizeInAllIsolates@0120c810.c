
/* v8::internal::wasm::WasmEngine::SampleTopTierCodeSizeInAllIsolates(std::__ndk1::shared_ptr<v8::internal::wasm::NativeModule>
   const&) */

void __thiscall
v8::internal::wasm::WasmEngine::SampleTopTierCodeSizeInAllIsolates
          (WasmEngine *this,shared_ptr *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  Isolate *pIVar5;
  long lVar6;
  CancelableTask *pCVar7;
  undefined8 *puVar8;
  long *plVar9;
  CancelableTask *local_80;
  Isolate *local_78 [2];
  Isolate **local_68;
  
  base::Mutex::Lock((Mutex *)(this + 0x100));
  local_78[0] = *(Isolate **)param_1;
  local_68 = local_78;
  lVar6 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*&&>,std::__ndk1::tuple<>>
                    ((NativeModule **)(this + 0x188),(piecewise_construct_t *)local_78,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_68);
  plVar9 = *(long **)(*(long *)(lVar6 + 0x18) + 0x10);
  if (plVar9 != (long *)0x0) {
    do {
      local_78[0] = (Isolate *)plVar9[2];
      local_68 = local_78;
      lVar6 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
              ::
              __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                        ((Isolate **)(this + 0x160),(piecewise_construct_t *)local_78,
                         (tuple *)&DAT_019eee9c,(tuple *)&local_68);
      puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x18) + 0x40);
      pCVar7 = operator_new(0x40);
      pIVar5 = local_78[0];
      uVar2 = *(undefined8 *)param_1;
      lVar6 = *(long *)(param_1 + 8);
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + 0x10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      CancelableTask::CancelableTask(pCVar7,local_78[0]);
      *(undefined ***)pCVar7 = &PTR_FUN_01cbc490;
      local_80 = pCVar7 + 0x20;
      *(undefined ***)local_80 = &PTR_FUN_01cbc4c0;
      *(Isolate **)(pCVar7 + 0x28) = pIVar5;
      *(undefined8 *)(pCVar7 + 0x30) = uVar2;
      *(long *)(pCVar7 + 0x38) = lVar6;
      (**(code **)*puVar8)(puVar8,&local_80);
      pCVar7 = local_80;
      local_80 = (CancelableTask *)0x0;
      if (pCVar7 != (CancelableTask *)0x0) {
        (**(code **)(*(long *)pCVar7 + 8))();
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  base::Mutex::Unlock((Mutex *)(this + 0x100));
  return;
}

