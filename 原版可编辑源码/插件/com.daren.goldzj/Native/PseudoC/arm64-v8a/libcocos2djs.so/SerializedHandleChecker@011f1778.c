
/* v8::internal::SerializedHandleChecker::SerializedHandleChecker(v8::internal::Isolate*,
   std::__ndk1::vector<v8::internal::Context, std::__ndk1::allocator<v8::internal::Context> >*) */

void __thiscall
v8::internal::SerializedHandleChecker::SerializedHandleChecker
          (SerializedHandleChecker *this,Isolate *param_1,vector *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_58;
  
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__SerializedHandleChecker_01cbbc40;
  *(Isolate **)(this + 8) = param_1;
  this[0x38] = (SerializedHandleChecker)0x1;
  uVar3 = *(ulong *)(param_1 + 0xf88);
  uVar2 = *(uint *)(uVar3 + 3);
  if (1 < (int)uVar2) {
    iVar5 = 0;
    uVar6 = 0;
    do {
      local_58 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7 + (long)iVar5);
      std::__ndk1::
      __hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
      ::__emplace_unique_key_args<v8::internal::Object,v8::internal::Object>
                ((__hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
                  *)(this + 0x10),(Object *)&local_58,(Object *)&local_58);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < uVar2 >> 1);
  }
  puVar4 = *(ulong **)param_2;
  puVar1 = *(ulong **)(param_2 + 8);
  if (puVar4 != puVar1) {
    do {
      uVar6 = *puVar4 & 0xffffffff00000000;
      uVar3 = uVar6 | *(uint *)(*puVar4 + 0x27f);
      uVar2 = *(uint *)(uVar3 + 3);
      if (1 < (int)uVar2) {
        iVar5 = 0;
        uVar7 = 0;
        do {
          local_58 = uVar6 | *(uint *)(uVar3 + 7 + (long)iVar5);
          std::__ndk1::
          __hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
          ::__emplace_unique_key_args<v8::internal::Object,v8::internal::Object>
                    ((__hash_table<v8::internal::Object,v8::internal::Object::Hasher,std::__ndk1::equal_to<v8::internal::Object>,std::__ndk1::allocator<v8::internal::Object>>
                      *)(this + 0x10),(Object *)&local_58,(Object *)&local_58);
          uVar7 = uVar7 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar7 < uVar2 >> 1);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar1);
  }
  return;
}

