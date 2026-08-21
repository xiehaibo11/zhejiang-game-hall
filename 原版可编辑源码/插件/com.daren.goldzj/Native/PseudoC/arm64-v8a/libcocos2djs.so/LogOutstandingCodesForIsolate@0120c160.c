
/* v8::internal::wasm::WasmEngine::LogOutstandingCodesForIsolate(v8::internal::Isolate*) */

void __thiscall
v8::internal::wasm::WasmEngine::LogOutstandingCodesForIsolate(WasmEngine *this,Isolate *param_1)

{
  WasmCode *pWVar1;
  WasmCode *pWVar2;
  ulong uVar3;
  long lVar4;
  WasmCode *pWVar5;
  Isolate *local_40 [2];
  undefined1 *local_18;
  WasmCode *pWVar6;
  
  local_40[0] = param_1;
  uVar3 = WasmCode::ShouldBeLogged(param_1);
  if ((uVar3 & 1) != 0) {
    base::Mutex::Lock((Mutex *)(this + 0x100));
    local_18 = (undefined1 *)local_40;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::__unordered_map_hasher<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::hash<v8::internal::Isolate*>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Isolate*,std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>,std::__ndk1::equal_to<v8::internal::Isolate*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Isolate*,std::__ndk1::unique_ptr<v8::internal::wasm::WasmEngine::IsolateInfo,std::__ndk1::default_delete<v8::internal::wasm::WasmEngine::IsolateInfo>>>>>
            ::
            __emplace_unique_key_args<v8::internal::Isolate*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Isolate*const&>,std::__ndk1::tuple<>>
                      ((Isolate **)(this + 0x160),(piecewise_construct_t *)local_40,
                       (tuple *)&DAT_019eee9c,(tuple *)&local_18);
    lVar4 = *(long *)(lVar4 + 0x18);
    pWVar1 = *(WasmCode **)(lVar4 + 0x28);
    pWVar2 = *(WasmCode **)(lVar4 + 0x30);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    base::Mutex::Unlock((Mutex *)(this + 0x100));
    pWVar6 = pWVar1;
    if (pWVar1 != pWVar2) {
      do {
        pWVar5 = pWVar6 + 8;
        WasmCode::LogCode(*(WasmCode **)pWVar6,local_40[0]);
        pWVar6 = pWVar5;
      } while (pWVar2 != pWVar5);
      WasmCode::DecrementRefCount
                (pWVar1,((long)pWVar2 - (long)pWVar1) * 0x20000000 >> 0x20 & 0x1fffffffffffffff);
    }
    if (pWVar1 != (WasmCode *)0x0) {
      operator_delete(pWVar1);
    }
  }
  return;
}

