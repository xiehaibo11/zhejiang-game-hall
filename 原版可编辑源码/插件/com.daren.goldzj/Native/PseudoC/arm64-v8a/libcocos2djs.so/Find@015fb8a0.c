
/* v8::internal::wasm::SignatureMap::Find(v8::internal::Signature<v8::internal::wasm::ValueType>
   const&) const */

undefined4 __thiscall v8::internal::wasm::SignatureMap::Find(SignatureMap *this,Signature *param_1)

{
  long lVar1;
  
  lVar1 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
          ::find<v8::internal::Signature<v8::internal::wasm::ValueType>>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                      *)(this + 8),param_1);
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x28);
  }
  return 0xffffffff;
}

