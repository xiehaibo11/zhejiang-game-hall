
void FUN_015ec910(long param_1)

{
  long lVar1;
  bool bVar2;
  piecewise_construct_t *ppVar3;
  long lVar4;
  Mutex *this;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  piecewise_construct_t *local_60 [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  while( true ) {
    this = *(Mutex **)(param_1 + 0x28);
    bVar2 = false;
    local_88 = local_88 & 0xffffffffffffff00;
    v8::base::Mutex::Lock(this);
    lVar4 = *(long *)(this + 0x38);
    if (lVar4 != 0) {
      uStack_80 = *(undefined8 *)(lVar4 + 0x18);
      local_88 = *(ulong *)(lVar4 + 0x10);
      uStack_70 = *(undefined8 *)(lVar4 + 0x28);
      uStack_78 = *(undefined8 *)(lVar4 + 0x20);
      bVar2 = true;
      std::__ndk1::
      __hash_table<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,std::__ndk1::allocator<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>>
      ::remove(local_60,this + 0x28);
      ppVar3 = local_60[0];
      local_60[0] = (piecewise_construct_t *)0x0;
      if (ppVar3 != (piecewise_construct_t *)0x0) {
        operator_delete(ppVar3);
      }
    }
    v8::base::Mutex::Unlock(this);
    if (!bVar2) break;
    local_60[0] = (piecewise_construct_t *)&local_88;
    lVar4 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,v8::base::hash<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>,std::__ndk1::equal_to<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::unique_ptr<v8::internal::wasm::JSToWasmWrapperCompilationUnit,std::__ndk1::default_delete<v8::internal::wasm::JSToWasmWrapperCompilationUnit>>>>>
            ::
            __emplace_unique_key_args<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<bool,v8::internal::Signature<v8::internal::wasm::ValueType>>const&>,std::__ndk1::tuple<>>
                      (*(pair **)(param_1 + 0x30),(piecewise_construct_t *)&local_88,
                       (tuple *)&DAT_01a5456b,(tuple *)local_60);
    v8::internal::wasm::JSToWasmWrapperCompilationUnit::Execute
              (*(JSToWasmWrapperCompilationUnit **)(lVar4 + 0x30));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

