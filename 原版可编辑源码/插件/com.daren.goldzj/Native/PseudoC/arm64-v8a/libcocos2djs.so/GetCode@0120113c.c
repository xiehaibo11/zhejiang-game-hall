
/* v8::internal::wasm::NativeModule::GetCode(unsigned int) const */

WasmCode * __thiscall v8::internal::wasm::NativeModule::GetCode(NativeModule *this,uint param_1)

{
  WasmCode *pWVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong extraout_x1;
  WasmCode *pWVar5;
  WasmCode *local_18;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  pWVar5 = *(WasmCode **)
            (*(long *)(this + 0x150) + (ulong)(param_1 - *(int *)(*(long *)(this + 200) + 0x3c)) * 8
            );
  if (pWVar5 != (WasmCode *)0x0) {
    local_18 = pWVar5;
    plVar4 = (long *)__emutls_get_address(&DAT_01d35888);
    std::__ndk1::
    __hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
    ::__emplace_unique_key_args<v8::internal::wasm::WasmCode*,v8::internal::wasm::WasmCode*const&>
              ((__hash_table<v8::internal::wasm::WasmCode*,std::__ndk1::hash<v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<v8::internal::wasm::WasmCode*>,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                *)(*plVar4 + 8),&local_18,&local_18);
    if ((extraout_x1 & 1) != 0) {
      pWVar1 = local_18 + 0x8c;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pWVar1,0x10);
        if (bVar3) {
          *(int *)pWVar1 = *(int *)pWVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  return pWVar5;
}

