
void FUN_015fb6e4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  Mutex *this;
  undefined8 uVar5;
  void *local_60 [3];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = *(Mutex **)(param_1 + 0x40);
  while( true ) {
    v8::base::Mutex::Lock(this);
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 == 0) break;
    uVar1 = *(undefined1 *)(lVar4 + 0x10);
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    std::__ndk1::
    __hash_table<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>>
    ::remove(local_60,this + 0x28);
    pvVar3 = local_60[0];
    local_60[0] = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    v8::base::Mutex::Unlock(this);
    v8::internal::wasm::CompileImportWrapper
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x30),uVar1,uVar5,*(undefined8 *)(param_1 + 0x48));
    this = *(Mutex **)(param_1 + 0x40);
  }
  v8::base::Mutex::Unlock(this);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

