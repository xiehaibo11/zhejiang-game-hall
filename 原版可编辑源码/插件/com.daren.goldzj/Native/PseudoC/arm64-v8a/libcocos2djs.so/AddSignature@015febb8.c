
/* v8::internal::wasm::WasmModuleBuilder::AddSignature(v8::internal::Signature<v8::internal::wasm::ValueType>*)
    */

uint __thiscall
v8::internal::wasm::WasmModuleBuilder::AddSignature(WasmModuleBuilder *this,Signature *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  Zone *this_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint local_14;
  
  lVar3 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
          ::find<v8::internal::Signature<v8::internal::wasm::ValueType>>
                    ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                      *)(this + 0x128),param_1);
  if (lVar3 == 0) {
    local_14 = (uint)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 3);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
    ::
    __emplace_unique_key_args<v8::internal::Signature<v8::internal::wasm::ValueType>,v8::internal::Signature<v8::internal::wasm::ValueType>&,unsigned_int&>
              ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                *)(this + 0x128),param_1,param_1,&local_14);
    puVar5 = *(undefined8 **)(this + 0x10);
    if (puVar5 == *(undefined8 **)(this + 0x18)) {
      lVar3 = (long)puVar5 - *(long *)(this + 8) >> 3;
      uVar1 = lVar3 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = (long)*(undefined8 **)(this + 0x18) - *(long *)(this + 8);
      uVar7 = lVar4 >> 2;
      if (uVar1 <= uVar7) {
        uVar1 = uVar7;
      }
      if (0x7fffffe < (ulong)(lVar4 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        this_00 = *(Zone **)(this + 0x20);
        uVar7 = uVar1 * 8;
        lVar4 = *(long *)(this_00 + 0x10);
        if (uVar7 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
            uVar7 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar4 + uVar7;
        }
        else {
          lVar4 = Zone::NewExpand(this_00,uVar7);
        }
      }
      puVar5 = (undefined8 *)(lVar4 + lVar3 * 8);
      puVar6 = puVar5 + 1;
      *puVar5 = param_1;
      puVar2 = *(undefined8 **)(this + 8);
      puVar8 = *(undefined8 **)(this + 0x10);
      while (puVar8 != puVar2) {
        puVar8 = puVar8 + -1;
        puVar5 = puVar5 + -1;
        *puVar5 = *puVar8;
      }
      *(undefined8 **)(this + 8) = puVar5;
      *(undefined8 **)(this + 0x10) = puVar6;
      *(ulong *)(this + 0x18) = lVar4 + uVar1 * 8;
    }
    else {
      *puVar5 = param_1;
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
    }
  }
  else {
    local_14 = *(uint *)(lVar3 + 0x28);
  }
  return local_14;
}

