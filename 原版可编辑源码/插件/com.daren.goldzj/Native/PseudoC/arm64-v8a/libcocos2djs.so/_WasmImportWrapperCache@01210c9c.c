
/* v8::internal::wasm::WasmImportWrapperCache::~WasmImportWrapperCache() */

void __thiscall
v8::internal::wasm::WasmImportWrapperCache::~WasmImportWrapperCache(WasmImportWrapperCache *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  WasmCode *pWVar3;
  long *plVar4;
  void *pvVar5;
  WasmCode *local_38;
  WasmCode *local_30;
  WasmCode *local_28;
  
  local_30 = (WasmCode *)0x0;
  local_28 = (WasmCode *)0x0;
  local_38 = (WasmCode *)0x0;
  uVar2 = *(ulong *)(this + 0x40);
  if (uVar2 != 0) {
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    local_30 = operator_new(uVar2 * 8);
    local_28 = local_30 + uVar2 * 8;
  }
  local_38 = local_30;
  for (plVar4 = *(long **)(this + 0x38); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    pWVar3 = (WasmCode *)plVar4[4];
    if (pWVar3 != (WasmCode *)0x0) {
      if (local_30 == local_28) {
        std::__ndk1::
        vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
        ::__push_back_slow_path<v8::internal::wasm::WasmCode*const&>
                  ((vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
                    *)&local_38,(WasmCode **)(plVar4 + 4));
      }
      else {
        *(WasmCode **)local_30 = pWVar3;
        local_30 = local_30 + 8;
      }
    }
  }
  WasmCode::DecrementRefCount
            (local_38,((long)local_30 - (long)local_38) * 0x20000000 >> 0x20 & 0x1fffffffffffffff);
  if (local_38 != (WasmCode *)0x0) {
    local_30 = local_38;
    operator_delete(local_38);
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  base::Mutex::~Mutex((Mutex *)this);
  return;
}

