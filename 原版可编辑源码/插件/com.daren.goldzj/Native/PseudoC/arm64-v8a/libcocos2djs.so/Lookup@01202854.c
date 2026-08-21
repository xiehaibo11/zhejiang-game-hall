
/* v8::internal::wasm::NativeModule::Lookup(unsigned long) const */

WasmCode * __thiscall v8::internal::wasm::NativeModule::Lookup(NativeModule *this,ulong param_1)

{
  WasmCode *pWVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong extraout_x1;
  NativeModule *pNVar5;
  NativeModule *pNVar6;
  NativeModule *pNVar7;
  WasmCode *pWVar8;
  WasmCode *local_18;
  
  base::Mutex::Lock((Mutex *)(this + 0x110));
  pNVar5 = this + 0x140;
  for (pNVar7 = *(NativeModule **)(this + 0x140); pNVar7 != (NativeModule *)0x0;
      pNVar7 = *(NativeModule **)(pNVar7 + (ulong)(*(ulong *)(pNVar7 + 0x20) <= param_1) * 8)) {
    pNVar6 = pNVar7;
    if (*(ulong *)(pNVar7 + 0x20) <= param_1) {
      pNVar6 = pNVar5;
    }
    pNVar5 = pNVar6;
  }
  if (pNVar5 != *(NativeModule **)(this + 0x138)) {
    pNVar7 = *(NativeModule **)pNVar5;
    if (*(NativeModule **)pNVar5 == (NativeModule *)0x0) {
      do {
        pNVar6 = *(NativeModule **)(pNVar5 + 0x10);
        bVar3 = *(NativeModule **)pNVar6 == pNVar5;
        pNVar5 = pNVar6;
      } while (bVar3);
    }
    else {
      do {
        pNVar6 = pNVar7;
        pNVar7 = *(NativeModule **)(pNVar6 + 8);
      } while (*(NativeModule **)(pNVar6 + 8) != (NativeModule *)0x0);
    }
    pWVar8 = *(WasmCode **)(pNVar6 + 0x28);
    if ((*(ulong *)pWVar8 <= param_1) && (param_1 < *(ulong *)pWVar8 + *(ulong *)(pWVar8 + 8))) {
      local_18 = pWVar8;
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
      goto LAB_0120293c;
    }
  }
  pWVar8 = (WasmCode *)0x0;
LAB_0120293c:
  base::Mutex::Unlock((Mutex *)(this + 0x110));
  return pWVar8;
}

