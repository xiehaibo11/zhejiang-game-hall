
/* v8::internal::wasm::WasmCodeRefScope::AddRef(v8::internal::wasm::WasmCode*) */

void v8::internal::wasm::WasmCodeRefScope::AddRef(WasmCode *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong extraout_x1;
  WasmCode *local_18;
  
  local_18 = param_1;
  plVar3 = (long *)__emutls_get_address(&DAT_01d35888);
  std::__ndk1::
  __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
  ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
            ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
              *)(*plVar3 + 8),&local_18,&local_18);
  if ((extraout_x1 & 1) != 0) {
    local_18 = local_18 + 0x8c;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(local_18,0x10);
      if (bVar2) {
        *(int *)local_18 = *(int *)local_18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}

