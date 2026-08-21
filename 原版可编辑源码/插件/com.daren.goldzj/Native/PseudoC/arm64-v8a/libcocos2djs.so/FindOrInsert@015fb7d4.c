
/* v8::internal::wasm::SignatureMap::FindOrInsert(v8::internal::Signature<v8::internal::wasm::ValueType>
   const&) */

ulong __thiscall
v8::internal::wasm::SignatureMap::FindOrInsert(SignatureMap *this,Signature *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*this != (SignatureMap)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!frozen_");
  }
  lVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
          ::find<v8::internal::Signature<v8::internal::wasm::ValueType>>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                      *)(this + 8),param_1);
  if (lVar2 == 0) {
    uVar3 = *(ulong *)(this + 0x20);
    if (uVar3 >> 0x1f != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","kMaxInt >= map_.size()");
    }
    local_50 = *(undefined8 *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 8);
    local_60 = *(undefined8 *)param_1;
    local_48 = (undefined4)uVar3;
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
    ::
    __emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::pair<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                *)(this + 8),(Signature *)&local_60,(pair *)&local_60);
  }
  else {
    uVar3 = (ulong)*(uint *)(lVar2 + 0x28);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

