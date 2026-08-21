
/* v8::internal::wasm::WasmEngine::LogCode(v8::internal::Vector<v8::internal::wasm::WasmCode*>) */

void v8::internal::wasm::WasmEngine::LogCode(long param_1,long *param_2,long param_3)

{
  Mutex *this;
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *local_88;
  long local_80;
  long local_78 [2];
  long *local_68;
  
  if (param_3 != 0) {
    this = (Mutex *)(param_1 + 0x100);
    base::Mutex::Lock(this);
    local_68 = local_78;
    local_78[0] = *(long *)(*param_2 + 0x30);
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::hash<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::wasm::NativeModule*,std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>,std::__ndk1::equal_to<v8::internal::wasm::NativeModule*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::wasm::NativeModule*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::NativeModuleInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::NativeModuleInfo>>>>>
            ::
            __emplace_unique_key_args<v8::internal::wasm::NativeModule*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::wasm::NativeModule*const&>,std::__ndk1::tuple<>>
                      ((NativeModule **)(param_1 + 0x188),(piecewise_construct_t *)local_78,
                       (tuple *)&DAT_019eee9c,(tuple *)&local_68);
    plVar7 = *(long **)(*(long *)(lVar4 + 0x18) + 0x10);
    if (plVar7 != (long *)0x0) {
      do {
        local_80 = plVar7[2];
        local_68 = &local_80;
        lVar4 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
                ::
                __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                          ((Isolate **)(param_1 + 0x160),(piecewise_construct_t *)&local_80,
                           (tuple *)&DAT_019eee9c,(tuple *)&local_68);
        lVar4 = *(long *)(lVar4 + 0x18);
        if (*(char *)(lVar4 + 0x18) != '\0') {
          if (*(long *)(lVar4 + 0x20) == 0) {
            local_88 = operator_new(0x28);
            *local_88 = (long)&PTR_FUN_01cbc468;
            local_88[1] = (long)this;
            local_88[2] = lVar4 + 0x20;
            local_88[3] = local_80;
            local_88[4] = param_1;
            *(long **)(lVar4 + 0x20) = local_88;
            (**(code **)**(undefined8 **)(lVar4 + 0x40))(*(undefined8 **)(lVar4 + 0x40),&local_88);
            plVar6 = local_88;
            local_88 = (long *)0x0;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 8))();
            }
          }
          lVar5 = *(long *)(lVar4 + 0x30);
          if (*(long *)(lVar4 + 0x28) == lVar5) {
            StackGuard::RequestInterrupt((StackGuard *)(local_80 + 0x48),0x40);
            lVar5 = *(long *)(lVar4 + 0x30);
          }
          std::__ndk1::
          vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
          ::insert<v8::internal::wasm::WasmCode**>
                    ((vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                      *)(lVar4 + 0x28),lVar5,param_2,param_2 + param_3);
          plVar6 = param_2;
          do {
            piVar1 = (int *)(*plVar6 + 0x8c);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            plVar6 = plVar6 + 1;
          } while (plVar6 != param_2 + param_3);
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != (long *)0x0);
    }
    base::Mutex::Unlock(this);
  }
  return;
}

