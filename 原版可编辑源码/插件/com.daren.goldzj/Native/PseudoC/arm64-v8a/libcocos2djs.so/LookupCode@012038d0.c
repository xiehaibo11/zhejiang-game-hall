
/* v8::internal::wasm::WasmCodeManager::LookupCode(unsigned long) const */

undefined8 __thiscall
v8::internal::wasm::WasmCodeManager::LookupCode(WasmCodeManager *this,ulong param_1)

{
  Mutex *this_00;
  bool bVar1;
  undefined8 uVar2;
  WasmCodeManager *pWVar3;
  WasmCodeManager *pWVar4;
  WasmCodeManager *pWVar5;
  NativeModule *this_01;
  
  this_00 = (Mutex *)(this + 0x18);
  base::Mutex::Lock(this_00);
  if (*(long *)(this + 0x50) != 0) {
    pWVar3 = this + 0x48;
    for (pWVar5 = *(WasmCodeManager **)(this + 0x48); pWVar5 != (WasmCodeManager *)0x0;
        pWVar5 = *(WasmCodeManager **)(pWVar5 + (ulong)(*(ulong *)(pWVar5 + 0x20) <= param_1) * 8))
    {
      pWVar4 = pWVar5;
      if (*(ulong *)(pWVar5 + 0x20) <= param_1) {
        pWVar4 = pWVar3;
      }
      pWVar3 = pWVar4;
    }
    if (pWVar3 != *(WasmCodeManager **)(this + 0x40)) {
      pWVar5 = *(WasmCodeManager **)pWVar3;
      if (*(WasmCodeManager **)pWVar3 == (WasmCodeManager *)0x0) {
        do {
          pWVar4 = *(WasmCodeManager **)(pWVar3 + 0x10);
          bVar1 = *(WasmCodeManager **)pWVar4 == pWVar3;
          pWVar3 = pWVar4;
        } while (bVar1);
      }
      else {
        do {
          pWVar4 = pWVar5;
          pWVar5 = *(WasmCodeManager **)(pWVar4 + 8);
        } while (*(WasmCodeManager **)(pWVar4 + 8) != (WasmCodeManager *)0x0);
      }
      if ((*(ulong *)(pWVar4 + 0x20) <= param_1) && (param_1 < *(ulong *)(pWVar4 + 0x28))) {
        this_01 = *(NativeModule **)(pWVar4 + 0x30);
        base::Mutex::Unlock(this_00);
        if (this_01 == (NativeModule *)0x0) {
          return 0;
        }
        uVar2 = NativeModule::Lookup(this_01,param_1);
        return uVar2;
      }
    }
  }
  base::Mutex::Unlock(this_00);
  return 0;
}

