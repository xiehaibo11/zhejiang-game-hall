
void FUN_0120d9f8(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_50 [2];
  undefined1 *local_28;
  
  lVar6 = *(long *)(param_1 + 0xc770);
  uVar5 = *(undefined8 *)(param_1 + 0x9520);
  local_50[0] = param_1;
  v8::base::Mutex::Lock((Mutex *)(lVar6 + 0x100));
  local_28 = (undefined1 *)local_50;
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
          ::
          __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                    ((Isolate **)(lVar6 + 0x160),(piecewise_construct_t *)local_50,
                     (tuple *)&DAT_019eee9c,(tuple *)&local_28);
  plVar7 = *(long **)(lVar2 + 0x18);
  plVar8 = (long *)*plVar7;
  while (plVar8 != plVar7 + 1) {
    v8::internal::wasm::NativeModule::SampleCodeSize((NativeModule *)plVar8[4],uVar5,2);
    plVar4 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar4 = plVar8 + 2;
      bVar1 = (long *)*(long *)*plVar4 != plVar8;
      plVar8 = (long *)*plVar4;
      if (bVar1) {
        do {
          lVar2 = *plVar4;
          plVar4 = (long *)(lVar2 + 0x10);
          plVar8 = (long *)*plVar4;
        } while (*plVar8 != lVar2);
      }
    }
    else {
      do {
        plVar8 = plVar4;
        plVar4 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  if ((*(long *)(lVar6 + 0x1b8) != 0) &&
     (lVar2 = *(long *)(*(long *)(lVar6 + 0x1b8) + 0x58), lVar2 != 0)) {
    uVar5 = *(undefined8 *)(local_50[0] + 0x9520);
    lVar3 = v8::base::TimeTicks::Now();
    local_28 = (undefined1 *)(lVar3 - lVar2);
    v8::base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
    v8::internal::Histogram::AddSample((int)uVar5 + 0x1360);
  }
  v8::base::Mutex::Unlock((Mutex *)(lVar6 + 0x100));
  return;
}

