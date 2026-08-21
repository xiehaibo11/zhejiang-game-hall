
/* v8::internal::wasm::WasmCodeManager::LookupNativeModule(unsigned long) const */

long __thiscall
v8::internal::wasm::WasmCodeManager::LookupNativeModule(WasmCodeManager *this,ulong param_1)

{
  bool bVar1;
  WasmCodeManager *pWVar2;
  WasmCodeManager *pWVar3;
  WasmCodeManager *pWVar4;
  long lVar5;
  
  base::Mutex::Lock((Mutex *)(this + 0x18));
  if (*(long *)(this + 0x50) != 0) {
    pWVar2 = this + 0x48;
    for (pWVar4 = *(WasmCodeManager **)(this + 0x48); pWVar4 != (WasmCodeManager *)0x0;
        pWVar4 = *(WasmCodeManager **)(pWVar4 + (ulong)(*(ulong *)(pWVar4 + 0x20) <= param_1) * 8))
    {
      pWVar3 = pWVar4;
      if (*(ulong *)(pWVar4 + 0x20) <= param_1) {
        pWVar3 = pWVar2;
      }
      pWVar2 = pWVar3;
    }
    if (pWVar2 != *(WasmCodeManager **)(this + 0x40)) {
      pWVar4 = *(WasmCodeManager **)pWVar2;
      if (*(WasmCodeManager **)pWVar2 == (WasmCodeManager *)0x0) {
        do {
          pWVar3 = *(WasmCodeManager **)(pWVar2 + 0x10);
          bVar1 = *(WasmCodeManager **)pWVar3 == pWVar2;
          pWVar2 = pWVar3;
        } while (bVar1);
      }
      else {
        do {
          pWVar3 = pWVar4;
          pWVar4 = *(WasmCodeManager **)(pWVar3 + 8);
        } while (*(WasmCodeManager **)(pWVar3 + 8) != (WasmCodeManager *)0x0);
      }
      if (*(ulong *)(pWVar3 + 0x20) <= param_1) {
        lVar5 = *(long *)(pWVar3 + 0x30);
        if (*(ulong *)(pWVar3 + 0x28) <= param_1) {
          lVar5 = 0;
        }
        goto LAB_012038b4;
      }
    }
  }
  lVar5 = 0;
LAB_012038b4:
  base::Mutex::Unlock((Mutex *)(this + 0x18));
  return lVar5;
}

