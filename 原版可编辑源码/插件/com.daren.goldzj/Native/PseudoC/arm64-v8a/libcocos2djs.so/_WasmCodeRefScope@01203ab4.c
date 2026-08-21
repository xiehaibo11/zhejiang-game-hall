
/* v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope() */

void __thiscall v8::internal::wasm::WasmCodeRefScope::~WasmCodeRefScope(WasmCodeRefScope *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  WasmCode *local_40;
  WasmCode *pWStack_38;
  WasmCode *local_30;
  
  uVar3 = *(undefined8 *)this;
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_01d35888);
  *puVar1 = uVar3;
  pWStack_38 = (WasmCode *)0x0;
  local_30 = (WasmCode *)0x0;
  local_40 = (WasmCode *)0x0;
  uVar2 = *(ulong *)(this + 0x20);
  if (uVar2 != 0) {
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pWStack_38 = operator_new(uVar2 * 8);
    local_30 = pWStack_38 + uVar2 * 8;
  }
  local_40 = pWStack_38;
  std::__ndk1::
  vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>::
  assign<std::__ndk1::__hash_const_iterator<std::__ndk1::__hash_node<v8::internal::wasm::WasmCode*,void*>*>>
            ((vector<v8::internal::wasm::WasmCode*,std::__ndk1::allocator<v8::internal::wasm::WasmCode*>>
              *)&local_40,*(undefined8 *)(this + 0x18),0);
  WasmCode::DecrementRefCount
            (local_40,((long)pWStack_38 - (long)local_40) * 0x20000000 >> 0x20 & 0x1fffffffffffffff)
  ;
  if (local_40 != (WasmCode *)0x0) {
    pWStack_38 = local_40;
    operator_delete(local_40);
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  return;
}

