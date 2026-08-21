
/* v8::internal::wasm::WasmCodeAllocator::SetExecutable(bool) */

undefined8 __thiscall
v8::internal::wasm::WasmCodeAllocator::SetExecutable(WasmCodeAllocator *this,bool param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  WasmCodeAllocator *pWVar6;
  
  base::Mutex::Lock((Mutex *)(this + 8));
  if (this[0xa8] != (WasmCodeAllocator)param_1) {
    plVar1 = (long *)GetPlatformPageAllocator();
    if (FLAG_wasm_write_protect_code_memory != '\0') {
      uVar4 = 4;
      if (!param_1) {
        uVar4 = 2;
      }
      lVar2 = (**(code **)(*plVar1 + 0x18))();
      pWVar6 = *(WasmCodeAllocator **)(this + 0x50);
      if (this + 0x48 != pWVar6) {
        do {
          uVar3 = SetPermissions(plVar1,*(undefined8 *)(pWVar6 + 0x10),
                                 lVar2 + -1 + *(long *)(pWVar6 + 0x18) & -lVar2,uVar4);
          if ((uVar3 & 1) == 0) {
            uVar5 = 0;
            goto LAB_01200708;
          }
          pWVar6 = *(WasmCodeAllocator **)(pWVar6 + 8);
        } while (this + 0x48 != pWVar6);
      }
    }
    this[0xa8] = (WasmCodeAllocator)param_1;
  }
  uVar5 = 1;
LAB_01200708:
  base::Mutex::Unlock((Mutex *)(this + 8));
  return uVar5;
}

