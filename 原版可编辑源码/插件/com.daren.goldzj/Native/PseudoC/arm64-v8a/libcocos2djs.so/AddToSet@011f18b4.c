
/* v8::internal::SerializedHandleChecker::AddToSet(v8::internal::FixedArray) */

void __thiscall
v8::internal::SerializedHandleChecker::AddToSet(SerializedHandleChecker *this,ulong param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong local_48;
  
  uVar1 = *(uint *)(param_2 + 3);
  if (1 < (int)uVar1) {
    iVar2 = 0;
    uVar3 = 0;
    do {
      local_48 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7 + (long)iVar2);
      std::__ndk1::
      __hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
      ::__emplace_unique_key_args<v8::internal::Object,v8::internal::Object>
                ((__hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
                  *)(this + 0x10),(Object *)&local_48,(Object *)&local_48);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (uVar3 < uVar1 >> 1);
  }
  return;
}

