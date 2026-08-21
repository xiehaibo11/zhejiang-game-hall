
/* v8::internal::wasm::WasmImportWrapperCache::operator[](std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,
   v8::internal::Signature<v8::internal::wasm::ValueType>*> const&) */

long __thiscall
v8::internal::wasm::WasmImportWrapperCache::operator[](WasmImportWrapperCache *this,pair *param_1)

{
  long lVar1;
  pair *local_18;
  
  local_18 = param_1;
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,v8::internal::wasm::WasmImportWrapperCache::CacheKeyHash,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>,std::__ndk1::equal_to<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,v8::internal::wasm::WasmCode*>>>
          ::
          __emplace_unique_key_args<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::pair<v8::internal::compiler::WasmImportCallKind,v8::internal::Signature<v8::internal::wasm::ValueType>*>const&>,std::__ndk1::tuple<>>
                    ((pair *)(this + 0x28),(piecewise_construct_t *)param_1,(tuple *)&DAT_019eee9d,
                     (tuple *)&local_18);
  return lVar1 + 0x20;
}

